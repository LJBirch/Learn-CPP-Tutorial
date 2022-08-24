#include <iostream>

int main()
{
	/* 
	* Don't make errors:
	* - Follow best practices.
	* - Don't program when tired.
	* - Understand where the common pitfalls are in a language (all those things we warn you not to do).
	* - Keep your programs simple.
	* - Don't let your functions get too long.
	* - Prefer using the standard library to writing your own code, when possible.
	* - Comment your code liberally.
	*/

	// Break single long functions into multiple shorter ones.
	// This process of making structural changes to your code without changing its behavior (typically in order to make your program more organized, modular, or performant) is called refactoring.
	// When making changes to your code, make behavioral changes OR structural changes, and then retest for correctness.
	
	// Defensive programming is a practive whereby the programmer tries to anticipate all of the ways the software could be misused.
	// These misuses can often be detected and then mitigated.

	// Catch errors quickly, by programming piece-by-piece at a time.

	// You can write functions that test your code (primitive style of unit testing).

	// Constraints-based techniques involve the addition of some extra code (that can be compiled out in a non-debug build, if desired) to check that some set of assumptions or expectations are not violated.
	// This is covered in more detail later.

	// Best practice: Use a static analysis tool on your programs to help find areas where your code is non-compliant with best practices.

	return 0;
}