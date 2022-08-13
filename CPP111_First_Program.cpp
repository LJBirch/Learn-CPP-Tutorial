#include <iostream>

// Its important to develop the program in steps, implement small features and then compile an run them.
// Dont dive in an write the whole thing, then try to solve is.
// Start small, test and then iterate.

int main()
{
	int num{0};

	std::cout << "Enter an integer: ";
	std::cin >> num;

	std::cout << "Double that number is: " << num * 2 << '\n';
	std::cout << "Triple that number is: " << num * 3 << '\n';

	return 0;
}