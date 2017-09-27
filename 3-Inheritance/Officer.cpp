#include "Officer.h"
#include "Person.h"

#include <iostream>

Officer::Officer()
{
	fullName = "";
	happiness = 50;
	badgeNumber = 0;
}

Officer::Officer(std::string initialName, int initialHappiness, int initialBadgeNumber)
{
	fullName = initialName;
	happiness = initialHappiness;
	badgeNumber = initialBadgeNumber;
}

using namespace std;

void Officer::greet()
{
	cout << "Hi, m'name's " << fullName << "." << endl;
	cout << "Officer numbah #" << badgeNumber << "." << endl;
}