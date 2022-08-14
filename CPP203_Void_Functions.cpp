#include <iostream>

// No value to be returned.
void printHi()
{
	std::cout << "Hi" << '\n';
}

// A return statement that is not the last statement in a function, is called and early return.
void earlyReturn() 
{
	std::cout << "Hi" << '\n';

	return; // earlyReturn's execution stops here.

	std::cout << "Bye!" << '\n'; // Never reached and therefore not executed.

	// Early returns are accepted when making a function simpler, or when used to abort a function early due to some error condition.
	// Will be covered in depth later on.
}

int main()
{
	// Functions are not required to return a value back to the caller.
	// To tell the compiler that a function does not return a value, a return type of void is used.
	// A function of this type is called a non-value returning function.
	// A non-value returning function doesnt need a return statement (however adding one is possible).

	// Best practive: Do not put a return statement at the end of a non-value returning function.

	// Void functions cannot be used in expressions that require a value.
	std::cout << printHi(); // Compilier error.

	printHi(); // This works fine.

	// Returning a value from a void function will cause a compilier error.

	return 0;
}

/*
	Quiz:

	Question #1 - Inspect the following programs and state what they output, or whether they will not compile (see quiz section at https://www.learncpp.com/cpp-tutorial/void-functions-non-value-returning-functions/ for code).
	Question #1a:
	Answer: This program prints the letters A and B on separate lines.

	Question #1b:
	Answer: Compilier error as printA() returns void, which cant be sent to std::cout.

	Question #2 - What is an early return, and what is its behavior?
	Answer: An early return is a return statement that occurs before the last line of a function. It causes the function to return to the caller immediately.

 */