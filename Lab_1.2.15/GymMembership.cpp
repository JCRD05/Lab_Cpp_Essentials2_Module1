#include <iostream>
#include "GymMembership.h"

GymMembership::GymMembership(int userID, std::string name, int months)
{
	this->userID = userID;
	this->name = name;
	this->months = months;
}

GymMembership::GymMembership()
{
	userID = 0;
	name = "";
	months = 0;
}

int GymMembership::getID() { return userID; }

void GymMembership::extendMembership(int months)
{
	if (months < 1)
	{
		std::cout << "The extension should be atleast one month long\n";
	}
	else if (name == "")
	{
		std::cout << "There is no membership " << userID + 1 << " in the system\n";
	}
	else
	{ 
		this->months += months;
		std::cout << "The membership has been extend to " << this->months << " months\n";
		printMembership();
	}
}

void GymMembership::cancelMembership()
{
	if (name == "")
	{
		std::cout << "There is no membership " << userID + 1 << " in the system\n";
	}
	else
	{
		months = 0;
		std::cout << "The membership has been canceled\n";
	}
}

void GymMembership::printMembership()
{
	std::cout << "Name: " << name << "\n";
	std::cout << "ID: " << userID << "\n";
	std::cout << "Subscription valid for: " << months << " months\n";
}
