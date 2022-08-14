#include <iostream>

int add(int x, int y); // Function prototype includes return type, name, parameters, and semicolon. No function body!

int main()
{
	// Best practice: When addressing compile errors in your programs, always resolve the first error produced first and then compile again.

	// Forward declaration allows us to tell the compilier about the existence of an identifier before actually defining the identifer.
	// This is achieved with function prototypes (see line 3).
	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n'; // This works because we forward declared add() above.


	// Function prototypes do not need parameters names to be specified, however they should be.

	// Best practice: When defining function prototypes, keep the parameter names. You can easily create forward declarations by copy/pasting your function’s prototype and adding a semicolon.

	// Forward declerations can be used with other identifiers in C++ such as variables and user-defined types (covered later).

	// A definition actually implements (for functions or types) or instantiates (for variables) the identifier. 
	// A definition is needed to satisfy the linker. If you use an identifier without providing a definition, the linker will error.
	/* 
	   The one definition rule (or ODR for short) is a well-known rule in C++. The ODR has three parts:
	   1) Within a given file, a function, variable, type, or template can only have one definition.
	   2) Within a given program, a variable or normal function can only have one definition. 
	      This distinction is made because programs can have more than one file (we’ll cover this in the next lesson).
	   3) Types, templates, inline functions, and inline variables are allowed to have identical definitions in different files. 
	      We haven’t covered what most of these things are yet, so don’t worry about this for now -- we’ll bring it back up when it’s relevant.

	   Violating part 1 of the ODR will cause the compiler to issue a redefinition error. 
	   Violating ODR part 2 will likely cause the linker to issue a redefinition error. 
	   Violating ODR part 3 will cause undefined behavior.
	*/

	// A declaration is a statement that tells the compiler about the existence of an identifier and its type information.
	// A declaration is all that is needed to satsify the compiler.
	// All definitions serve as declarations in C++.

	// The converse is not true, not all declerations are definitions however.
	// Those that are, are called pure declarations.
	// The ODR doesnt apply to pure declarations.

	return 0;
}

int add(int x, int y) // Even though the body of add() isn't defined until here.
{
	return x + y;
}


/*
	Quiz:

	Question #1 - What is a function prototype?
	Answer: A function prototype is a declaration statement that includes a function’s name, return type, and parameters. It does not include the function body.

	Question #2: What is a forward declaration?
	Answer: A forward declaration tells the compiler that an identifier exists before it is actually defined.

	Question #3 - How do we declare a forward declaration for functions?
	Answer: For functions, a function prototype serves as a forward declaration.

	Question #4 - Write the function prototype for this function (use the preferred form with names):
	Answer: int doMath(int first, int second, int third, int fourth);

	Question #5 - For each of the following programs, state whether they fail to compile, fail to link, fail both, or compile and link successfully. If you are not sure, try compiling them! (see code at quiz section at https://www.learncpp.com/cpp-tutorial/forward-declarations/).
	
	Question #5a:
	Answer: Doesn’t compile. The compiler will complain that the add() called in main() does not have the same number of parameters as the one that was forward declared.
	
	Question #5b:
	Answer: Doesn’t compile. The compiler will complain that it can’t find a matching add() function that takes 3 arguments, because the add() function that was forward declared only takes 2 arguments.
	
	Question #5c:
	Answer: Doesn’t link. The compiler will match the forward declared prototype of add to the function call to add() in main(). However, no add() function that takes two parameters was ever implemented (we only implemented one that took 3 parameters), so the linker will complain.
 
	Question #5d:
	Answer: Compiles and links. The function call to add() matches the prototype that was forward declared, the implemented function also matches.
 */