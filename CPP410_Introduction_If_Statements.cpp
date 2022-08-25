#include <iostream>

int main()
{
	// The simpliest kind of conditional statement in C++ is called an if statement.
	// Its simple form is: if (condition) true_statement;
	/* For readability however it usually takes the form:
	   if (condition)
		  true_statement;
	*/

	// A condition (also called a conditional expression) is an expression that evaluates to a Boolean value.

	std::cout << "Enter an integer: ";
	int x{};
	std::cin >> x;

	if (x == 0)
		std::cout << "The value is zero\n";
	
	// == (equality operator) returns true if two values are equal.
	// The if statement will execute subsequent statement if the if statement evaluates to true, if false it will not.

	// Warning: If statements only conditionally execute a single statement.

	std::cin >> x;

	if (x == 0)
		std::cout << "The value is zero\n";
	else
		std::cout << "The value is non-zero\n";

	// We can use an else statement that is executed if our if statement evaluates to false.

	std::cin >> x;

	if (x > 0)
		std::cout << "The value is positive\n";
	else if (x < 0)
		std::cout << "The value is negative\n";
	else
		std::cout << "The value is zero\n";

	// If we want to check multiple conditions we can use the else if statement.


	return 0;
}