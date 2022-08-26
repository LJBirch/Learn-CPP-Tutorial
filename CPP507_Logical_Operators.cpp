#include <iostream>

int main()
{
	// Often we need to know whether multiple conditions are true simultaneously.
	// Logical operators provide us with the capability to test multiple conditions.

	// See https://www.learncpp.com/cpp-tutorial/logical-operators/ for a full list of logical operators.

	int x{ 100 };
	bool tooLarge{ x > 100 }; // tooLarge is true if x > 100.
	if (!tooLarge)
	{
		// Do something with x.
	}
	else
	{
		// Print an error.
	}

	// One thing to be wary of is that logical NOT has a very high level of precedence. New programmers often make the following mistake:
	int x{ 5 };
	int y{ 7 };

	if (!x > y)
		std::cout << x << " is not greater than " << y << '\n';
	else
		std::cout << x << " is greater than " << y << '\n';

	// But x is not greater than y, so how is this possible? The answer is that because the logical NOT operator has higher precedence than the greater than operator, the expression ! x > y actually evaluates as (!x) > y. 
	// Since x is 5, !x evaluates to 0, and 0 > y is false, so the else statement executes!

	// Correct way:
	if (!(x > y))
		std::cout << x << " is not greater than " << y << '\n';
	else
		std::cout << x << " is greater than " << y << '\n';

	// Best Practice:
	// If logical NOT is intended to operate on the result of other operators, the other operators and their operands need to be enclosed in parentheses.

	// The logical OR operator is used to test whether either of two conditions is true. 
	// If the left operand evaluates to true, or the right operand evaluates to true, or both are true, then the logical OR operator returns true. 
	// Otherwise it will return false.

	std::cout << "Enter a number: ";
	int value{};
	std::cin >> value;

	if (value == 0 || value == 1)
		std::cout << "You picked 0 or 1\n";
	else
		std::cout << "You did not pick 0 or 1\n";

	// We can use multiple logical OR statements.
	if (value == 0 || value == 1 || value == 2 || value == 3)
		std::cout << "You picked 0, 1, 2, or 3\n";

	// The logical AND operator is used to test whether both operands are true. 
	// If both operands are true, logical AND returns true. Otherwise, it returns false.

	std::cout << "Enter a number: ";
	int value{};
	std::cin >> value;

	if (value > 10 && value < 20)
		std::cout << "Your value is between 10 and 20\n";
	else
		std::cout << "Your value is not between 10 and 20\n";

	// As with logical OR, you can string together many logical AND statements:
	if (value > 10 && value < 20 && value != 16)
	{
		// Do something.
	}
	else
	{
		// Do something else.
	}

	// In order for logical AND to return true, both operands must evaluate to true. 
	// f the first operand evaluates to false, logical AND knows it must return false regardless of whether the second operand evaluates to true or false. 
	// In this case, the logical AND operator will go ahead and return false immediately without even evaluating the second operand! 
	// This is known as short circuit evaluation, and it is done primarily for optimization purposes.

	// Warning: Short circuit evaluation may cause Logical OR and Logical AND to not evaluate one operand. Avoid using expressions with side effects in conjunction with these operators.

	// Logical AND has higher precedence than logical OR, thus logical AND operators will be evaluated ahead of logical OR operators (unless they have been parenthesized).
	// When mixing logical AND and logical OR in the same expression, it is a good idea to explicitly parenthesize each operator and its operands.

	// Best Practice: When mixing logical AND and logical OR in a single expression, explicitly parenthesize each operation to ensure they evaluate how you intend.

	// Many programmers also make the mistake of thinking that !(x && y) is the same thing as !x && !y. Unfortunately, you can not “distribute” the logical NOT in that manner.
	// Read aobut De Morgan's law to understand why this the case.

	// C++ doesn’t provide a logical XOR operator. 
	// You can mimic this however, with:
	if (a != b)
	{

	}

	// Many operators in C++ (such as operator ||) have names that are just symbols. 
	// See https://www.learncpp.com/cpp-tutorial/logical-operators/ for the full list of alternative names.
	// You shouldnt however use these, as most prefer the original way.

	return 0;
}