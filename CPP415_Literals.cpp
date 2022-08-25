#include <iostream>

int main()
{
	// Literals are unnamed values inserted directly into the code. For example:
	return 5;                   // 5 is an integer literal.
	bool myNameIsAlex{ true }; // true is a boolean literal.
	std::cout << 3.4;           // 3.4 is a double literal.

	// Literals are sometimes called literal constants because their values cannot be reassigned.

	// See https://www.learncpp.com/cpp-tutorial/literals/ for  full list of literal types and literal suffixes.

	// Best Practice: Prefer literal suffix L (upper case) over l (lower case).

	// You generally won’t need to use suffixes for integral literals, but here are examples:
	std::cout << 5; // 5 (no suffix) is type int (by default).
	std::cout << 5L; // 5L is type long.

	unsigned int x{ 5u }; // 5u is type unsigned int.
	std::cout << x;

	std::cout << 5.0; // 5.0 (no suffix) is type double (by default).
	std::cout << 5.0f; // 5.0f is type float.

	float f{ 4.1f }; // Use 'f' suffix so the literal is a float and matches variable type of float.
	double d{ 4.1 }; // Change variable to type double so it matches the literal type double.
	
	double pi{ 3.14159 }; // 3.14159 is a double literal in standard notation.
	double avogadro{ 6.02e23 }; // 6.02 x 10^23 is a double literal in scientific notation.
	double electron{ 1.6e-19 }; // charge on an electron is 1.6 x 10^-19

	// A magic number is a literal (usually a number) that either has an unclear meaning or may need to be changed later.
	// In complex programs, it can be very difficult to infer what a literal represents, unless there’s a comment to explain it.
	constexpr int numClassrooms{ 10 };
	constexpr int maxStudentsPerSchool{ numClassrooms * 30 }; // What does 30 mean here?

	// Fortunately, both the lack of context and the issues around updating can be easily addressed by using symbolic constants.
	// The name of the constant provides context, and we only need to update a value in one place to make a change to the value across our entire program.
	constexpr int maxStudentsPerClass{ 30 };
	constexpr int totalStudents{ numClassrooms * maxStudentsPerClass }; // Now obvious what this 30 means.

	// Literals used in obvious contexts that are unlikely to change are typically not considered magic. The values -1, 0, 0.0, and 1 are often used in such contexts:
	int idGenerator{ 0 };         // Fine: we're starting our id generator with value 0.
	idGenerator = idGenerator + 1; // Fine: we're just incrementing our generator.

	// Best Practice: Avoid magic numbers in your code (use constexpr variables instead).

	return 0;
}