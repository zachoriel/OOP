#pragma once

#include <string>
using namespace std;

class Person
{
	string fullName;

	int happiness;

public:
	Person();
	Person(string initialName, int initialHappiness);

	// Prints a greeting to the console
	virtual void greet();

	// Returns true if happy, and false if not
	bool isHappy();
};