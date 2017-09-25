/* WALKTHROUGH

#include <iostream>
#include "Person.h"
using namespace std;

int main()
{
	Person human("Zach", 20, "555-555-5555");
	human.print();
	if (human.checkSoc("555-555-5555"))
	{
		cout << "Match!" << endl;
	}
	else
	{
		cout << "No match!" << endl;
	}

	Person underling("Josh", 18, "111-111-1111");
	underling.print();

	Person student("Xavier", 19, "222-222-2222");
	student.print();

	Person baby;
	baby.name = "EzzyBaby";
	baby.age = 0;
	baby.print();

	while (true) {}
} */

#include <iostream>
#include "Television.h"
#include "PiggyBank.h"
#include "Server.h"

using namespace std;

// Closed
// Television
int main()
{

	Television samsung(4, 12);
	samsung.print();
	samsung.increaseChannel();
	samsung.decreaseVolume();
	samsung.print();

	// Piggy Bank
	PiggyBank wallet;
	wallet.deposit(3.50);
	cout << wallet.balance() << endl;
	cout << wallet.withdraw() << endl;


	while (true) {}

	// Open
	// Servers
	ServerInfo servers[5];

	for (int i = 0; i < 5; i++)
	{
		server[i].serverName = "AwesomeTown";
		server[i].Region = "NA";
		server[i].maxPlayerCount = 16;
		server[i].currentPlayerCount = i *2;
		server[i].ping = i * 3;
	}
	

	ServerBrowserService serverBrowserService;

	serverBrowserService.registerServer(server01);

	ServerInfo arr[20];

	serverBrowserService.getServers(arr, 5);


	while (true) {}
}