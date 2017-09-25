/* WALKTHROUGH

#pragma once
#include <string>
using namespace std;

class Person
{
	string soc;

public:
	Person();
	Person(string n, int a, string s);

	string name;
	int age;

	void print();
	bool checkSoc(string test);
}; */


#pragma once
using namespace std;

// Closed
// Television
class Television
{
private:
	int currentChannel;
	int currentVolume;
public:
	Television(int chn, int vol);

	void print();

	void increaseVolume();
	void decreaseVolume();

	void increaseChannel();
	void decreaseChannel();





};