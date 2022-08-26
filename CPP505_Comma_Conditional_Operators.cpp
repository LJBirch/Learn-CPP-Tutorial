#include <iostream>

int add(int a, int b)
{
	return a + b;
}

int main()
{
	int x{ 1 };
	int y{ 2 };

	// The comma operator (,) allows you to evaluate multiple expressions wherever a single expression is allowed.
	std::cout << (++x, ++y) << '\n'; // Increment x and y, evaluates to the right operand.
	// The comma operator evaluates the left operand, then the right operand, and then returns the result of the right operand.

	int a{ 1 };
	int b{ 2 };
	int z{0};

	// Note that comma has the lowest precedence of all the operators, even lower than assignment. Because of this, the following two lines of code do different things:
	z = (a, b); // Evaluate (a, b) first to get result of b, then assign that value to variable z.
	z = a, b; // Evaluates as "(z = a), b", so z gets assigned the value of a, and b is evaluated and discarded.

	// This makes the comma operator somewhat dangerous to use.
	// In almost every case, a statement written using the comma operator would be better written as separate statements. For example, the above code could be written as:
	int x{ 1 };
	int y{ 2 };

	++x;
	std::cout << ++y << '\n';

	// Best Practice: Avoid using the comma operator, except within for loops.

	// The comma operators use within loops will be explored later.

	// In C++, the comma symbol is often used as a separator, and these uses do not invoke the comma operator.
	add(x, y); // Comma used to separate arguments in function call
	constexpr int z{ 3 }, w{ 5 }; // Comma used to separate multiple variables being defined on the same line (don't do this)

	// The conditional operator (?:) (also sometimes called the “arithmetic if” operator) is a ternary operator (it takes 3 operands). 
	// Because it has historically been C++’s only ternary operator, it’s also sometimes referred to as “the ternary operator”.

	// The ?: operator provides a shorthand method for doing a particular type of if/else statement.
	// The ?: operator takes the following form: (condition) ? expression1 : expression2;

	int larger{ 0 };

	// Standard if else block.
	if (x > y)
		larger = x;
	else
		larger = y;

	// As conditional operator:
	larger = (x > y) ? x : y;

	// It is common convention to put the conditional part of the operation inside of parentheses, both to make it easier to read, and also to make sure the precedence is correct. 
	// Note that the ?: operator has a very low precedence. If doing anything other than assigning the result to a variable, the whole ?: operator also needs to be wrapped in parentheses.

	// Should do this:
	std::cout << ((x > y) ? x : y) << '\n';

	// Shouldnt do this as << operator has higher precedence than the ?: operator:
	std::cout << (x > y) ? x : y << '\n';

	// Best Practice: Always parenthesize the conditional part of the conditional operator, and consider parenthesizing the whole thing as well.

	// Because the conditional operator operands are expressions rather than statements, the conditional operator can be used in some places where if/else can not.
	constexpr bool inBigClassroom{ false };
	constexpr int classSize{ inBigClassroom ? 30 : 20 };
	std::cout << "The class size is: " << classSize << '\n';

	// To properly comply with C++’s type checking, either the type of both expressions in a conditional statement must match, or the both expressions must be convertible to a common type.
	constexpr int x{ 5 };
	std::cout << (x != 5 ? x : "x is 5"); // Won't compile.

	// One of the expressions is an integer, and the other is a C-style string literal. 
	// The compiler is unable to determine a common type for expressions of these types. In such cases, you’ll have to use an if/else.

	// The conditional operator gives us a convenient way to compact some if/else statements. 
	// It’s most useful when we need a conditional initializer (or assignment) for a variable, or to pass a conditional value to a function.

	// Best Practice: Only use the conditional operator for simple conditionals where you use the result and where it enhances readability.

	return 0;
}