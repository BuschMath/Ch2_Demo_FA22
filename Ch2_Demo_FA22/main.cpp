#include <iostream>
#include <string>

// Function prototype
void TestFunction();

const std::string m = "Monday";


int main()
{
	const std::string TuesdayIsADayOfTheWeek = "Tuesday";

	// Function call
	TestFunction();
	std::cout << "Test";
	// Function call
	TestFunction();

	std::cout << std::endl << m << TuesdayIsADayOfTheWeek;

	return 0;
}

// Function definition
void TestFunction()
{
	std::cout << "In function";
	std::cout << m;
	//std::cout << TuesdayIsADayOfTheWeek; Not valid
}