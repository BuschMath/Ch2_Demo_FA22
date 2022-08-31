#include <iostream>

// Function prototype
void TestFunction();

int main()
{
	// Function call
	TestFunction();
	std::cout << "Test";
	// Function call
	TestFunction();

	return 0;
}

// Function definition
void TestFunction()
{
	std::cout << "In function";
}