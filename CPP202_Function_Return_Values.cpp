#include <iostream>

// This function returns an integer.
int getValueFromUser()
{
	std::cout << "Enter an integer: ";
	int input{};
	std::cin >> input;

	// Return the value the user entered to the caller.
	return input;
}


int main()
{
	// User defined functions give the user the ability to determine wether the function return a value back to the caller or not.
	// A function needs to have return type defined, even if it not returning anything (void return type).
	// For example a function that returns an int, must be defined as returning an int in its function header (e.g. int function_name(){}).
	// A value is returned by a function with the reserved keyword 'return'.

	// Once returned, the caller can then decide to use that value in an experssion or a statement, or ignore it.

	int num{ getValueFromUser() }; // Initialize num with the return value of getValueFromUser().

	std::cout << num << " doubled is " << num * 2 << '\n';

	// Understanding how main() works:
	// When a C++ project is compilied and then executed, the operating system makes a function call to main.
	// Execution then jumps to the top of main.
	// The statements in main are executed sequentially.
	// Finally main returns an integer (usually 0) and the program termintes.
	// The return value from main is sometimes called a status code or and exit code, it is used to indicate wether the program ran successfully or not.
	// A non-zero status code is used to indicate faulure (mostly supported by all OS' but not guarnteed).

	// Best practice: Your main function should return the value 0 if the program ran normally.

	// ADVANCED:
	// C++ standard defines three status codes:
	// 0
	// EXIT_SUCCESS
	// EXIT_FAILURE
	// 0 and EXIT_SUCCESS both mean the program executed successfully.
	// EXIT_FAILURE means the program did not execute successfully.
	// EXIT_SUCCESS and EXIT_FAILURE are defined in the <cstdlib> header.
	// To maximise portability to OS' you should only use 0 or EXIT_SUCCESS to indiciate a successfuly termination, or EXIT_FAILURE to indicate and unsuccessful termination.

	// C++ disallows calling the main function explicilty (by user written code).
	// main() should always be defined at the bottom of the code file, below other functions.

	// A function that returns a value is called a value-returning function (must return a type other than void).

	// Best practive: Make sure your functions with non-void return types return a value in all cases. Failure to return a value from a value-returning function will cause undefined behavior.

	// main() will return 0 if no return statement is given, however the return keyword and its value (0, EXIT_SUCCESS or EXIT_FAILURE) should be explicility written.

	// Function can only return a single value in C++.

	// The meaning of a function return is determined by the author, it could be a value to be used of status code to indicate success/failure.
	// Its a good idea to document your functions indicating what the return values mean.

	// Using functions helps to the author to keep to the Don't Repeat Yourself (DRY) rule of good programming.

	/*  Best practice:
	 *	Follow the DRY best practice: “don’t repeat yourself”. If you need to do something more than once, 
	 *	consider how to modify your code to remove as much redundancy as possible. 
	 *	Variables can be used to store the results of calculations that need to be used more than once (so we don’t have to repeat the calculation). 
	 *  Functions can be used to define a sequence of statements we want to execute more than once. And loops (which we’ll cover in a later chapter) 
	 *  can be used to execute a statement more than once.
	*/

	return 0;
}

/*
	Quiz:

	Question #1 - Inspect the following programs and state what they output, or whether they will not compile (see quiz section at https://www.learncpp.com/cpp-tutorial/function-return-values-value-returning-functions/ for code).
	Question #1a:
	Answer: Prints the value 16.

	Question #1b:
	Answer: Wont compile as nested function.

	Question #1c:
	Answer: Will compile but wont print anything.

	Question #1d:
	Answer: Prints 5 twice, second retun in getNumbers is redundant.

	Question #1e:
	Answer: Wont compile due to invalid function name.

	Question #1f:
	Answer: Program will compile, unknown output due function call missing paranthesis.

	Question #2 - What does “DRY” stand for, and why is it a useful practice to follow?
	Answer: DRY stands for “Don’t Repeat Yourself”. It is a practice that involves writing your code in such a way so as to minimize redundancy. This makes your programs more concise, less error prone, and more maintainable.

 */