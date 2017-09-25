/* WALKTHROUGH

#pragma once
#include <iostream>

#include "Person.h"

Person::Person()
{
	name = "";
	age = 0;
}

Person::Person(string n, int a, string s)
{
	name = n;
	age = a;
	soc = s;
}

void Person::print()
{
	cout << name << endl;
	cout << age << endl;
}

bool Person::checkSoc(string test)
{
	return soc == test;
} */ 


#pragma once

#include <iostream>
#include "Television.h"

using namespace std;

// Closed
// Television

Television::Television(int chn, int vol)
{
	currentChannel = chn;
	currentVolume = vol;
}

void Television::print()
{
}

void Television::increaseVolume()
{
	currentVolume++;
}

void Television::decreaseVolume()
{
	currentVolume--;
}

void Television::increaseChannel()
{
	currentChannel++;
}

void Television::decreaseChannel()
{
	currentChannel--;
}
