#include <iostream>
#include <cstdint> // For fixed-width integers.

int main()
{
	// Why isnt the size of the integer variables fixed?
	// Because of C! Computers back then were slow and performance was of the utmost concern.
	// C left the size of an integer open so that compiler implmenters could pick the size for int that performers best on the targer computer architecture.

	// This is a slightly ridiclous things to deal with these days.
	// Having types that have uncertain ranges is annoyying.

	// In C99 fixed-width integerrs were added, that are guarnteed to be the same size on any architecture.
	// Need to import the <cstdint> header, where they are defined inside the std namespace to access them.

	// See https://www.learncpp.com/cpp-tutorial/fixed-width-integers-and-size-t/ for a full list of fixed-width integers.
	
	std::int16_t i{ 5 };
	std::cout << i;

	// They have downsides:
	// They only exist on systems where there are fundamental types matching their widths and following a certain binary representation.
	// Your program will fail to compile on any such architecture that does not support a fixed-width integer that your program is using. 
	// However, given that most modern architectures have standardized around 8/16/32/64-bit variables, this is unlikely to be a problem unless your program needs to be portable to some exotic mainframe or embedded architectures.

	// Second, if you use a fixed-width integer, it may be slower than a wider type on some architectures.
	// For example, if you need an integer that is guaranteed to be 32-bits, you might decide to use std::int32_t, but your CPU might actually be faster at processing 64-bit integers.
	// However, just because your CPU can process a given type faster doesn’t mean your program will be faster overall.
	// Modern programs are often constrained by memory usage rather than CPU, and the larger memory footprint may slow your program more than the faster CPU processing accelerates it.
	// It’s hard to know without actually measuring.

	// To address the above downsides, C++ also defines two alternative sets of integers  that are guarnteed to be defined.
	// The fast types (std::int_fast#_t and std::uint_fast#_t) provide the fastest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64).
	// For example, std::int_fast32_t will give you the fastest signed integer type that’s at least 32 bits.

	// The least types (std::int_least#_t and std::uint_least#_t) provide the smallest signed/unsigned integer type with a width of at least # bits (where # = 8, 16, 32, or 64).
	// For example, std::uint_least32_t will give you the smallest unsigned integer type that’s at least 32 bits.

	std::cout << "least 8:  " << sizeof(std::int_least8_t) * 8 << " bits\n";
	std::cout << "least 16: " << sizeof(std::int_least16_t) * 8 << " bits\n";
	std::cout << "least 32: " << sizeof(std::int_least32_t) * 8 << " bits\n";
	std::cout << '\n';
	std::cout << "fast 8:  " << sizeof(std::int_fast8_t) * 8 << " bits\n";
	std::cout << "fast 16: " << sizeof(std::int_fast16_t) * 8 << " bits\n";
	std::cout << "fast 32: " << sizeof(std::int_fast32_t) * 8 << " bits\n";

	// These fast and least types are however not really used.
	// Not many programmers know how to use them properly, resulting in errors.
	// The fast types can still lead to memory wastage we saw with 4 byte integers.
	// As the fast types size can vary, potentially resulting in different behaviours on architectures where they resolve to different sizes.

	// Due to an oversight in the C++ specification, most compilers define and treat std::int8_t and std::uint8_t (and the corresponding fast and least fixed-width types) identically to types signed char and unsigned char respectively.
	// This means these 8-bit types may (or may not) behave differently than the rest of the fixed-width types, which can lead to errors. 
	// This behavior is system-dependent, so a program that behaves correctly on one architecture may not compile or behave correctly on another architecture.
	// For consistency, it’s best to avoid std::int8_t and std::uint8_t (and the related fast and least types) altogether (use std::int16_t or std::uint16_t instead).

	// Warning: The 8-bit fixed-width integer types are often treated like chars instead of integer values (and this may vary per system). Prefer the 16-bit fixed integral types for most cases.

	// There is unfortunately little consensus on integral best practices.
	// However, it is better to be correct than fast, better to fail at compile time than runetime.
	// Therefore we recommend avoiding the fast/least types in favour of the fixed width types.

	/* Best Practice:
	
	   Prefer int when the size of the integer doesn’t matter (e.g. the number will always fit within the range of a 2-byte signed integer). 
	   For example, if you’re asking the user to enter their age, or counting from 1 to 10, it doesn’t matter whether int is 16 or 32 bits (the numbers will fit either way). 
	   This will cover the vast majority of the cases you’re likely to run across.

	   Prefer std::int#_t when storing a quantity that needs a guaranteed range.

	   Prefer std::uint#_t when doing bit manipulation or where well-defined wrap-around behavior is required.

	   Avoid the following when possible:

	   Unsigned types for holding quantities.

	   The 8-bit fixed-width integer types.

	   The fast and least fixed-width types.

	   Any compiler-specific fixed-width integers -- for example, Visual Studio defines __int8, __int16, etc…
	*/

	// Using sizeof returns a value of type std::size_t
	// This an unsigned integeral type and is used to to represent the size or length of objects.
	// The size of std::size_t varies depending on the system, as it has to be equivalent to that address-width of the application.
	// This is so that it can hold the largest size object object creatable on your system (in bytes).
	// For example on 64-bit application, size_t will be 64-bit unsigned integer.
	// Some compiliers limit the largest creatable object to half the maximum value of std::size_t.
	// In practice the largest creatable object may be smaller than this amount, depending on how much contiguous memory your computer has available for allocation.
	
	return 0;
}