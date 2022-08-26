#include <iostream>

int getValue()
{
	std::cout << "Enter an integer: ";

	int x{};
	std::cin >> x;
	return x;
}

int main()
{
	// In mathematics, an operation is a mathematical calculation involving zero or more input values (called operands) that produces a new value (called an output value).
	// The specific operation to be performed is denoted by a construct (typically a symbol or pair of symbols) called an operator.
	// For example, as children we all learn that 2 + 3 equals 5. 
	// In this case, the literals 2 and 3 are the operands, and the symbol + is the operator that tells us to apply mathematical addition on the operands to produce the new value 5.

	// An expression that has multiple operators is called a compound expression.
	// The order in which operators are evaluated in a compound expression is determined by an operator’s precedence.
	
	// In C++, when the compiler encounters an expression, it must similarly analyze the expression and determine how it should be evaluated.
	// To assist with this, all operators are assigned a level of precedence. Operators with the highest level of precedence are evaluated first.
	// Some operators have the same level of precedence.
	// The operators associativity tells the compilier wether to evaluate the operators from left to right or from right to left.
	// For example: 3 * 4 / 2 both the multiplication and divide symbols have the same precedence level, but will be evaluated from left to right due their associativity.

	// See https://www.learncpp.com/cpp-tutorial/operator-precedence-and-associativity/ for a full list of operators with their precedence and associativity.

	// Best Practice: Use parentheses to make it clear how a non-trivial expression should evaluate (even if they are technically unnecessary).

	// Best Practice: Expressions with a single assignment operator do not need to have the right operand of the assignment wrapped in parenthesis.

	// Warning: In many cases, the operands in a compound expression may evaluate in any order. This includes function calls and the arguments to those function calls.

	std::cout << getValue() + (getValue() * getValue()); // a + (b * c)
	// These getValue calls could be evaluated in any order.

	// Best Practice: Outside of the operator precedence and associativity rules, assume that the parts of an expression could evaluate in any order. Ensure that the expressions you write are not dependent on the order of evaluation of those parts.
	
	// Ensures correct order.
	int a{ getValue() }; // Will execute first.
	int b{ getValue() }; // Will execute second.
	int c{ getValue() }; // Will execute third.

	std::cout << a + (b * c); // order of eval doesn't matter now

	return 0;
}