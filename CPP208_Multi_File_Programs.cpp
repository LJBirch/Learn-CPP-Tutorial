#include <iostream>

// A function defined in the file add.cpp
int add(int x, int y);

int main()
{
	/*
	 * As long as a declerations has been given and the file containing the function has been compilied alongside this, 
	 * referencing that function in this fille will work.
	 */

	std::cout << "The sum of 3 and 4 is: " << add(3, 4) << '\n';

	return 0;
}