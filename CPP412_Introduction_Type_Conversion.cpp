#include <iostream>

void print(int x)
{
	std::cout << x;
}

int main()
{
	// C++ will allow us convert values of one fundamental type to another fundamental type.
	// The process of converting a value from one type to another type is called type conversion.
	// When the compiler does type conversion on our behalf without us explicitly asking, we call this implicit type conversion.

	// If you have “treat warnings as errors” turned on, you will likely get a warning about data loss if implicit type conversion is happening.

	// Some type conversions are always safe to make (such as int to double), whilist other may result in the value being changed (double to int).
	// Brace initialization of the wrong value type will cause an error.
	double d{ 5 }; // Okay: int to double is safe.
	int x{ 5.5 }; // Error: double to int not safe.

	// C++ supports a second method of type conversion, called explicit type conversion. 
	// Explicit type conversion allow us (the programmer) to explicitly tell the compiler to convert a value from one type to another type, and that we take full responsibility for the result of that conversion.
	// Its follows the form: static_cast<new_type>(expression)

	print(static_cast<int>(5.5)); // Explicitly convert double value 5.5 to an int.

	// The static_cast operator doesnt do any range checking.
	// So if you cast a value to a type whose range doesn’t contain that value, undefined behavior will result.

	// Warning: The static_cast operator will produce undefined behavior if the value being converted doesn’t fit in range of the new type.

	return 0;
}