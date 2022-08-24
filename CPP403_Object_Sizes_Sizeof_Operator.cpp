#include <iostream>

int main()
{
	// An object with n bits can hold 2^n unique values (Example: 8-bit byte, can hold 2^8 (256) different values).
	// The size of an object puts a limit on the amount of unique values it can store.
	// Objects that utilize more bytes can store a larger number of unique values.

	// New programmers should focus on making maintainable code, onlying optimizing memory size only when and where the benefit will be substantive.

	// See https://www.learncpp.com/cpp-tutorial/object-sizes-and-the-sizeof-operator/ for how much space each fundamental data type takes up.
	// The actual size of variables may be different on each machine.

	// Best practice: For maximum compatibility, you shouldn’t assume that variables are larger than the specified minimum size.

	// Objects of fundamental data types are generally extremely fast.

	// The size of data types in C++ can be seen by using the sizeof operator.
	// This is a unary operator that takes either a type or a variable.
	std::cout << "bool:\t\t" << sizeof(bool) << " bytes\n";
	std::cout << "char:\t\t" << sizeof(char) << " bytes\n";
	std::cout << "wchar_t:\t" << sizeof(wchar_t) << " bytes\n";
	std::cout << "char16_t:\t" << sizeof(char16_t) << " bytes\n";
	std::cout << "char32_t:\t" << sizeof(char32_t) << " bytes\n";
	std::cout << "short:\t\t" << sizeof(short) << " bytes\n";
	std::cout << "int:\t\t" << sizeof(int) << " bytes\n";
	std::cout << "long:\t\t" << sizeof(long) << " bytes\n";
	std::cout << "long long:\t" << sizeof(long long) << " bytes\n";
	std::cout << "float:\t\t" << sizeof(float) << " bytes\n";
	std::cout << "double:\t\t" << sizeof(double) << " bytes\n";
	std::cout << "long double:\t" << sizeof(long double) << " bytes\n";

	int x{};
	std::cout << "x is " << sizeof(x) << " bytes\n";

	// Types that use less memory are not always faster than types that use more.
	// CPUs are often optimized to process data of a ceratin size (e.g. 32 bits), so types that match that size may be processed quicker (over say a 16-bit or 18-bit value).

	return 0;
}