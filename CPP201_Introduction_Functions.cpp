#include <iostream>

void doPrint()
{
	std::cout << "In doPrint()\n";
}

int main()
{
	// A function is a reusable sequence of statements designed to do a particular job.

	// Functions written by the user are called user-defined functions.

	// A function call is an expression that tells the CPU to interrupt the current function and execute another.
	// The point at which this function is called, is bookmarked so after the new function is called it can return and resume execution from this point onward.

	// The function initiating the function is called the caller, whilist the function being called is the callee or called function.

	// Example function format:
	/*return-type identifier() // This is the function header (tells the compilier about the existence of the function). 
	 *{
	 * // This is the function body (tells the compilier what the function does). 
	 *}
	*/

	std::cout << "Starting main()\n";

	// Function call:

	// The main functions execution is suspended here.
	doPrint();
	// The main functions execution is returned here, after doPrint() execution is finished.


	std::cout << "Ending main()\n";

	// You cannot nest functions within functions.

	return 0;
}

/*
    Quiz:

    Question #1 - In a function definition, what are the curly braces and statements in-between called?
    Answer: The function body.

    Question #2 - What does the following program print? Do not compile this program, just trace the code yourself (see quiz section at https://www.learncpp.com/cpp-tutorial/introduction-to-functions/ to see code).
    Answer: Starting main()
			In doA()
			In doB()
			In doB()
			Ending main()
 */