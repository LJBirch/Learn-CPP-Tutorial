#include <iostream>

int main() {

	// Copy assignment, copies the value on the RHS of the = operator the variable on the LHS of the operator.
	// The = operator is the assignment operator.
	int width;
	width = 5;

	int a; // No initializer (default initialization).
	int b = 5; // Initializer after equals sign (copy initialization) (not used often).
	int c(6); // Initializer in parenthesis (direct initialization) (not used often).
	int d{ 7 }; // Initializer in braces (brace initialization) (used in modern C++).

	// Brace Initialization

	int width{ 5 }; // Direct brace initialization of value 5 into variable width (preferred).
	int height = { 6 }; // Copy brace initialization of value 6 into variable height.
	int depth{}; // Calue initialization (brace version of default initilization.)

	// Use brace initilization whenver possible! It provides a more consistent initialization syntax for all features (caveated).
	
	/* Brace initilization also disallows "narrowing conversions", 
	 * meaining if you try to brace initialize a variable using a 
	 * value that the variable cannot safely hold, it will produce a compiler error.
	 */


	int x{}; // Calue initialization (use if the value is temporary and will be replaced).
	int x{ 0 }; // Explicit initialization to value 0 (use if you're actually using that value).

	// Best practice: initialize your variables!


	 
	return 0;
}


/*
	Quiz:

		Question #1 - What is the difference between initialization and assignment?
		Answer: Initialization gives a variable an initial value at the point when it is created, assignment gives a variable a value at some point after the variable is created..

		Question #2 - What form of initialization should you be using?
		Answer: Direct brace initialization.
*/