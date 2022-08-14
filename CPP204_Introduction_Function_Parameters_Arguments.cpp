#include <iostream>

int doubleNumber(int x)
{
	return x * 2;
}

// This function takes one integer parameter.
// The called will supply the value for x.
void printValue(int x)
{
	std::cout << x << '\n';
}

// This function has two ineger parameters.
// The caller will have to supply both.
int add(int x, int y)
{
	return x + y;
}

// Main takes no parameters.
int main()
{
	// A function parameter is variable used in a function.
	// They act in the same way as variables defined inside a function, except they always initialized with a valye provided by the caller of the function.

	// Calling add and printValue with the required values as parameters.
	int num{ add(4, 5) };
	printValue(num);

	// When a function is called, all of the parameters are created as variables.
	// The values of each of the arguments is copied into the matching parameter.
	// This process is called pass by value.

	// Return values can be used as arguments.
	printValue(add(10, 20));

	return 0;
}

/*
	Quiz: (see quiz section at https://www.learncpp.com/cpp-tutorial/introduction-to-function-parameters-and-arguments/ for code).

	Question #1 - What’s wrong with this program fragment?
	Answer: void return type given to function that returns an iteger.

	Question #2: What two things are wrong with this program fragment?
	Answer: The function multiply returns no value and is being called with only 1 argument provided, whilist it takes two.

	Question #3 - What value does the following program print?
	Answer: 24

	Question #4 - Write a function called doubleNumber() that takes one integer parameter. The function should return double the value of the parameter.
	Answer: See function at top.

 */