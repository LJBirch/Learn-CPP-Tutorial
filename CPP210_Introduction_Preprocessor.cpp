#include <iostream>

// An object-like macro, WITH subtution text.
#define MY_NAME "Alex"

// An object-like macro, WITHOUT subtution text.
#define PRINT_JOE

int main()
{
	// Prior to compilation, the code goes through a phase known as translation.
	// A code file with translations applied to it is called a translation unit.
	
	// The most noteworty part of the translation phases involves the preprocessor.
	// The preprocessor is best though of as a seperate program that manipulates the text in each code file.
	// When it runs, it scans through the code file from top to bottom, looking for preprocessor directives.
	// These are instructions that start with a # symbol and end with a newline symbol (NOT a semicolon).
	// Preprocessors do not understand C++ syntax, they have their own syntax.

	// When the preprocessor gets to #include, it replaces the it with the contents of the included file.
	// The included contents are then preprocessed, along with the rest of the file and then compiled.
	// For example: #include <iostream> would be replaced with the contents of the file named "iostream".

	// The #define directive can be used to create a macro.
	// This is a rule that defines how input text is converted into replacement output text.

	// Function-like macros act like functions, and serve a similiar purpose (however their use is generally considered dangerous and can instead be achieved using normal functions).
	
	// Object-like macro: #define identifier substiution_text
	// The identifier is usually typed in all capitial letters (e.g. MY_IDENTIFIER), like a constant in other languages.

	std::cout << "My name is: " << MY_NAME;
	// The above after preprocessing would become:
	std::cout << "My name is: " << "Alex";

	// Object-like macros were used in the C language as a way to assign names to literals.
	// However this is no longer necessary, as better methods are availiable in C++.
	// It is recommended to avoid these all together.

	// Object-like macros can be used with substitution text (e.g. #define MY_IDENTIFIER).

	// The conditional compilation preprocessor directive allow you to specify under what conditions something will or wont compile.
	// There are many but the most common are: #ifdef, #ifndef, and #endif.

	// #ifdef allows the preprocessor to check wether an identifer has been previously defined.
	// If so the code between the #ifdef and matching #endif is compilied, if not it is ignored.
	#ifdef PRINT_JOE
		std::cout << "Joe\n"; // Will be compiled since PRINT_JOE is defined.
	#endif

	#ifdef PRINT_BOB
		std::cout << "Bob\n"; // will be ignored since PRINT_BOB is not defined
	#endif

	// #ifndef is the opposite of #ifdef, allowing you to check whether an identifier has NOT been #defined yet.
	#ifndef PRINT_BOB
		std::cout << "Bob\n";
	#endif

	// Alternatively #if defined(PRINT_BOB) and #if !defined(PRINT_BOB) could be used, as the do the same as above but using a more C++ stlye syntax.

	// #if o is sometimes used to exculde a block of code from being compiled.
	#if 0 // Don't compile anything starting here.
		std::cout << "Bob\n";
		std::cout << "Steve\n";
	#endif // Until this point.

	// Macros only cause text substitution for normal code, other preprocesor commands are ignored.
	#define FOO 9 // Here's a macro substitution.

	#ifdef FOO // This FOO does not get replaced because it’s part of another preprocessor directive.
			std::cout << FOO; // This FOO gets replaced with 9 because it's part of the normal code.
	#endif

	// Directives are resolved before compilation occurs, from top to bottom and on a file-by-file basis.
	// Directives dont care for scope within each file, but are only valid within the file they're defined within.
	// For example: A directive defined within a function is still in scope for the whole file but not across other files within the project.
	return 0;
}