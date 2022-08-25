#include <iostream>

int getNumber()
{
	std::cout << "Enter a number: ";
	int y{};
	std::cin >> y;

	return y;
}

int main()
{
	// A constant expression is an expression that can be evaluated by the compiler at compile-time. 
	// To be a constant expression, all the values in the expression must be known at compile-time (and all of the operators and functions called must support compile-time evaluation).
	// When the compiler encounters a constant expression, it will replace the constant expression with the result of evaluating the constant expression.
	
	/* 
	   Evaluating constant expressions at compile-time makes our compilation take longer (because the compiler has to do more work), 
	   but such expressions only need to be evaluated once (rather than every time the program is run). 
	   The resulting executables are faster and use less memory.
	*/

	// A Compile-time constant is a constant whose value is known at compile-time.
	// Literals (e.g. ‘1’, ‘2.3’, and “Hello, world!”) are one type of compile-time constant.

	// A const variable is a compile-time constant if its initializer is a constant expression.
	const int x{ 3 };  // x is a compile-time const.
	const int y{ 4 };  // y is a compile-time const.

	std::cout << x + y << '\n'; // x + y is a compile-time expression.

	const int z{ 1 + 2 };
	const int w{ z * 2 };

	const double gravity{ 9.8 };

	/* 
	   Compile-time constants enable the compiler to perform optimizations that aren’t available with non-compile-time constants. 
	   For example, whenever gravity is used, the compiler can simply substitute the identifier gravity with the literal double 9.8, 
	   which avoids having to fetch the value from somewhere in memory.
	*/

	// In many cases, compile-time constants will be optimized out of the program entirely.
	// In cases where this is not possible (or when optimizations are turned off), the variable will still be created (and initialized) at runtime.

	// Any const variable that is initialized with a non-constant expression is a runtime constant. 
	// Runtime constants are constants whose initialization values aren’t known until runtime.

	const int x{ 3 };           // x is a compile time constant.

	const int y{ getNumber() }; // y is a runtime constant.

	std::cout << x + y << '\n'; // x + y is a runtime expression.

	// Because compile-time constants generally allow for better optimization (and have little downside), we typically want to use compile-time constants wherever possible.
	// When using const, our variables could end up as either a compile-time const or a runtime const, depending on whether the initializer is a compile-time expression or not.
	// Because the definitions for both look identical, we can end up with a runtime const where we thought we were getting a compile-time const. 

	// Fortunately, we can enlist the compiler’s help to ensure we get a compile-time const where we expect one. 
	// To do so, we use the constexpr keyword instead of const in a variable’s declaration.

	// A constexpr (which is short for “constant expression”) variable can only be a compile-time constant. 
	// If the initialization value of a constexpr variable is not a constant expression, the compiler will error.
	constexpr double gravity{ 9.8 }; // Ok: 9.8 is a constant expression.
	constexpr int sum{ 4 + 5 };      // Ok: 4 + 5 is a constant expression.
	constexpr int something{ sum };  // Ok: sum is a constant expression.

	std::cout << "Enter your age: ";
	int age{};
	std::cin >> age;

	constexpr int myAge{ age }; // Compile error: age is not a constant expression.

	/* Best Practice:
	   Any variable that should not be modifiable after initialization and whose initializer is known at compile-time should be declared as constexpr.

       Any variable that should not be modifiable after initialization and whose initializer is not known at compile-time should be declared as const.
	*/

	return 0;
}