#include <iostream>
#include <iomanip>

int main()
{
	// A floating point type variable is a number that can hold a real number.
	// Example: 4320.0, -3.33, or 0.01226.
	// The floating point refers the fact that the decimal point can "float"; that is, it can support a variable number of digits before and after the decimal point.

	// Three types of floating point data types: float, double, and long double.
	// See https://www.learncpp.com/cpp-tutorial/floating-point-numbers/ for minimum byte sizes for each floating point data type.

	float fValue;
	double dValue;
	long double ldValue;

	// Always include one decimal when using floating point data types.
	// This helps the compilier understand that the number is a floating point number and not an integer.

	int x{ 5 }; // 5 means integer.
	double y{ 5.0 }; // 5.0 is a floating point literal (no suffix means double type by default).
	float z{ 5.0f }; // 5.0 is a floating point literal, f suffix means float type.

	/* Best Practice:
	   Always make sure the type of your literals match the type of the variables they’re being assigned to or used to initialize. 
	   Otherwise an unnecessary conversion will result, possibly with a loss of precision.
	*/

	/* Warning:
	   Make sure you don’t use integer literals where floating point literals should be used. 
	   This includes when initializing or assigning values to floating point objects, doing floating point arithmetic, and calling functions that expect floating point values.
	*/

	std::cout << 5.0 << '\n';
	std::cout << 6.7f << '\n';
	std::cout << 9876543.21 << '\n';

	// std::cout will not print the fractional part of a number if it is 0.


	// See https://www.learncpp.com/cpp-tutorial/floating-point-numbers/ for the range of values each floating point data type can take.

	// The precision of a floating point number defines how many significant digits it can represent without information loss.
	// std::cout has a default precision of 6.
	std::cout << 9.87654321f << '\n';
	std::cout << 987.654321f << '\n';
	std::cout << 987654.321f << '\n';
	std::cout << 9876543.21f << '\n';
	std::cout << 0.0000987654321f << '\n';

	// The precision of a floating point number is determined by which floating point data type is used.
	// Floats have between 6 and 9 digits of precision, whilist doubles have between 15 and 18.

	// The default level of precision can be overwritten by using the std::setprecision output manipulator.
	std::cout << std::setprecision(16); // Show 16 digits of precision.
	std::cout << 3.33333333333333333333333333333333333333f << '\n'; // f suffix means float.
	std::cout << 3.33333333333333333333333333333333333333 << '\n'; // No suffix means double.
	// Doing the above doesn't mean the value displayed is actually precise to 16 digits.


	float f{ 123456789.0f }; // f has 10 significant digits.
	std::cout << std::setprecision(9); // To show 9 digits in f.
	std::cout << f << '\n';
	// When precision is lost, this is called a rounding error.

	// Best Practice: Favor double over float unless space is at a premium, as the lack of precision in a float will often lead to inaccuracies.

	// Never assume your floating point number are exact.
	// Be wary of using them for financial or currency data.

	// There are two special categories of floating point numbers:
	// The first is inf, which represents infinity (positive or negative).
	// The second is NaN, which is "Not a Number".

	double zero{ 0.0 };
	double posinf{ 5.0 / zero }; // Positive infinity.
	std::cout << posinf << '\n';

	double neginf{ -5.0 / zero }; // Negative infinity.
	std::cout << neginf << '\n';

	double nan{ zero / zero }; // Not a number (mathematically invalid).
	std::cout << nan << '\n';

	// INF stands for infinity, whilist IND stands for indeterminate.
	// The results of doing the above are platform specific, so results may vary.

	// Best Practice: Avoid division by 0 altogether, even if your compiler supports it.

	return 0;
}