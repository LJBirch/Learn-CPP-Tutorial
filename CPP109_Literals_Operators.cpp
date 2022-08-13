#include <iostream>

int main()
{
	std::cout << "Hello world!";
	int x{ 5 };

	// "Hello world!" and 5 are literals.
	// A literal (also called a literal constant) is a fixed value that has been inserted directly into the source code.
	// Literals and variables both have a type, but the value of a literal is fixed and cant be changed.
	// Variables can be changed through initialization and assignment.

	// An operation is a math calculation involving zero or more input values (called operands), that produce a new value (called the output value).
	// The specific operation to be performed is denoted by a construct called an operator.
	// Example: 2 + 3 equals 5, the literals 2 and 3 are the operands, and + is the operator that tells us to apply mathematical addition on the operands to get 5.

	// Its common to append the operator's symbol to the word operator. E.g. operator+ or operator>>.

	// Example C++ operators: +, -, =, *, ==, <<, >>.
	// Some operators are words e.g. (new, delete and throw).

	// The three types of operators:
	// Unary: Act on one operand. For example the -operator, given -5 takes the literal operand 5 and flips its sign to produce -5.
	// Binary: Act on two operands. For example the +operator, given 3 + 4 takes the left operand (3) and the right operand (4) and applies mathematical addition.
	// << and >> are binary operators also, taking the left operand (the std::cout or std::cin) and the right operand to either output or input a variable from/to.
	// Tenary: Act on three operands. Only exists in one form in C++, will be covered later.

	// Some operators have more than one meaning depending on how they're used. For example operator- can be used to convert 5 to -5 (unary) or to add 4 + 3 (binary).


	// Operands can be chainged together to create the desired output. Example: 2 * 3 + 4.
	// They follow a specific order of which are executed first.
	// This is the way the are executed in standard mathematics, that is Brackets Indices Division Multiplication Addition Subtraction (BIDMAS).



	return 0;
}

/*
	Quiz: For each of the following, indicate what output they will produce:

	Question #1a - std::cout << 3 + 4;
	Answer: 7

	Question #1b - std::cout << 3 + 4 - 5;
	Answer: 2

	Question #1c - std::cout << 2 + 3 * 4;
	Answer: 14
*/