#include <iostream>
#include <string>

using namespace std;

// Function prototype
void TestFunction();

const string m = "Monday";

int main()
{
	const string TuesdayIsADayOfTheWeek = "Tuesday";

	// Function call
	TestFunction();
	cout << "Test";
	// Function call
	TestFunction();

	cout << endl << m << TuesdayIsADayOfTheWeek;

	return 0;
}

// Function definition
void TestFunction()
{
	cout << "In function";
	cout << m;
	//std::cout << TuesdayIsADayOfTheWeek; Not valid
}