#pragma once

#include "Person.h"

#include <string>

class Officer : public Person
{
protected:
	int badgeNumber;
	int happiness;
	string fullName;

public: 
	Officer();
	Officer(std::string initialName,
		int initialHappiness,
		int initialBadgeNumber);


	virtual void greet() override;
};