#include <iostream>

int add(int x, int y)
{
	return x + y;
}

int main()
{
	// Incrementing (adding 1 to) and decrementing (subtracting 1 from) a variable are both so common that they have their own operators.
	// See https://www.learncpp.com/cpp-tutorial/increment-decrement-operators-and-side-effects/ for a full list of inrecment/decrement opertaors.

	int x{ 5 };
	int y = ++x; // x is incremented to 6, x is evaluated to the value 6, and 6 is assigned to y.

	std::cout << x << ' ' << y << '\n';

	int x{ 5 };
	int y = x++; // x is incremented to 6, copy of original x is evaluated to the value 5, and 5 is assigned to y.

	// Let’s examine how this line 6 works in more detail. First, a temporary copy of x is made that starts with the same value as x (5). 
	// Then the actual x is incremented from 5 to 6. Then the copy of x (which still has value 5) is returned and assigned to y. 
	// Then the temporary copy is discarded.
	// Consequently, y ends up with the value of 5 (the pre-incremented value), and x ends up with the value 6 (the post-incremented value).
	// Note that the postfix version takes a lot more steps, and thus may not be as performant as the prefix version.

	// Best Practice: Strongly favor the prefix version of the increment and decrement operators, as they are generally more performant, and you’re less likely to run into strange issues with them.

	// A function or expression is said to have a side effect if it does anything that persists beyond the life of the function or expression itself.
	x = 5; // The assignment operator modifies the state of x.
	++x; // Operator++ modifies the state of x.
	std::cout << x; // Operator<< modifies the state of the console.

	// However, side effects can also lead to unexpected results:
	int x{ 5 };
	int value{ add(x, ++x) }; // is this 5 + 6, or 6 + 6?
	// It depends on what order your compiler evaluates the function arguments in.

	std::cout << value << '\n'; // Value could be 11 or 12, depending on how the above line evaluates!

	// The C++ standard does not define the order in which function arguments are evaluated. 
	
	// Warning: C++ does not define the order of evaluation for function arguments or operator operands.
	// Warning: Don’t use a variable that has a side effect applied to it more than once in a given statement. If you do, the result may be undefined.

	return 0;
}