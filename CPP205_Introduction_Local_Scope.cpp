#include <iostream>

void doSomething()
{
	std::cout << "Hello!\n";
}

int main()
{
	// Function parameters and variables defined inside the function body, are called local variable (global variables will be discussed later).

	// Instantiated variables are destroyed in the opposite order of creation at the end of the set of curly braces in which it is defined.

	// An objects liftime is defined to be the time between its creation and destruction.

	int x{ 0 }; // x's lifetime begins here.

	// An identifier's scope determines where the identifer can be accessed within the source code.
	// When an identifier can be accessed we say it is in scope. When it cannot, it is out of scope (and will cause a compilier error).
	// Local variables defined in one function are also not in scope of other functions that are called.

	doSomething(); // We could call x within this function, as it would be out of scope.
	// If doSomething had parameters, we could pass x as an argument but this still wouldnt be referencing the same x within doSomething as exists in main (pass by value not pass by reference).

	// For objects, the term "going out of scope" means at the end of the scope in which the object is instantiated, we can no longer access it (x goes out of scope at the end of the function main()).
	// Local objects are destroed when they "go out of scope".

	// Its important to note that each function only "sees" variables that are within its scope.
	// We could define a variable called x in doSomething and it would work fine as doSomething cannot see the variables in main.
	// Variables are only visibile in the function that declares them, helping keep them independent.

	// Best practice: Define your local variables as close to their first use as reasonable.

	return 0;
} // x's lifetime ends here.

/*
	Quiz: 

	Question #1 - What does the following program print? (see quiz section at https://www.learncpp.com/cpp-tutorial/introduction-to-local-scope/ for code).
	Answer: main: x = 1 y = 2
			doIt: x = 1 y = 4
			doIt: x = 3 y = 4
			main: x = 1 y = 2

 */