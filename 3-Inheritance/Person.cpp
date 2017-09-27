#include <iostream>

#include "Person.h"

Person::Person()
{
	fullName = "";
	happiness = 50;
}

Person::Person(string initialName, int initialHappiness)
{
	fullName = initialName;
	happiness = initialHappiness;
}

void Person::greet()
{
	cout << "Howdy! My name is " << fullName << ".";
}

bool Person::isHappy()
{
	return happiness > 70;
}