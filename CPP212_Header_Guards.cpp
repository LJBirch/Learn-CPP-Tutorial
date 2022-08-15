#include <iostream>

int main()
{
	// To prevent duplicate definitions in header files, we can use header guards.
	// Header guards are conditional compilation directives that take the following form:

	#ifndef SOME_UNIQUE_NAME_HERE
	#define SOME_UNIQUE_NAME_HERE

	// Your declarations (and certain types of definitions) here.

	#endif

	// This works by checking if SOME_UNIQUE_NAME_HERE has been declared previously or not.
	// If it has, the contents of that header file will be ignored (the section above that says your declarations here).

	// All header files should have header guards.
	// In place of SOME_UNIQUE_NAME_HERE, the full filename of the header file should be used.
	// Example: square.h should use #ifndef SQUARE_H.

	// In larger project its possible two seperate header files could end up having the same filename (e.g. directoryA\config.h and directoryB\config.h).
	// This would cause a compilation error using the above described method, as on compilation if the guard name is the same, the contents of the second include file will not be included.
	// To prevent this some use more complex/unique names in their headers. For example the following format:
	// <PROJECT>_<PATH>_<FILE>_H , <FILE>_<LARGE RANDOM NUMBER>_H
	// <FILE>_<CREATION DATE>_H

	// Header guards dont prevent you from including a header file once into different code files.
	// The only way to avoid this is to ensure that you only include each header file once.

	// Although we avoid defintions in header files, as discussed before. Later we will discuss user-defined types which will make use of definitions in header files.
	// Using header guards is good practice.

	// Modern compiliers allow for the use of #pragma once instead of using header guards.
	// It isnt however part of the C++ langauge and may never be due to not being able to be implemented in a way that works reliably in all cases.
	// For maximum portability, header guards should be used.

	// Best practice: Favor header guards over #pragma once for maximum portability.

	return 0;
}