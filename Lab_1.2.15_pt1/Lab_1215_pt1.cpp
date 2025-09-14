#include <iostream>
#include "GymMembership.h"

const int NUMBER_OF_MEMBERSHIPS = 10;

int main()
{
	GymMembership memberships[NUMBER_OF_MEMBERSHIPS];
	std::cout << "No members in the system\n";

	while(true)
	{
		std::string command{};
		int id{};
		std::string name{};
		int months{};
		int index{};
		bool commandKnown{};

		std::cout << "What would you like to do?: ";
		std::cin >> command;
		if(command == "create")
		{
			std::cin >> id >> name;
			while(index < NUMBER_OF_MEMBERSHIPS)
			{
				if (memberships[index].getID() == id)
				{
					std::cout << "Membership " << id << " is already in the system\n";
					break;
				}
				if (memberships[index].getID() == 0)
				{
					memberships[index] = GymMembership(id, name, 0);
					std::cout << "Membership added to the system\n";
					break;
				}
				index++;
			}
			if (index == NUMBER_OF_MEMBERSHIPS)
			{
				std::cout << "Capacity of memberships has been reached\n";
			}
			commandKnown = true;
		}
		else if (command == "delete")
		{
			std::cin >> id;
			while (index < NUMBER_OF_MEMBERSHIPS)
			{
				if (memberships[index].getID() == id)
				{
					memberships[index] = GymMembership();
					std::cout << "Membership erased from the system\n";
					break;
				}
				index++;
			}
			if (index == NUMBER_OF_MEMBERSHIPS)
			{
				std::cout << "The membership is not in the system\n";
			}
			commandKnown = true;
		}
		else if (command == "extend")
		{
			std::cin >> id >> months;
			memberships[id - 1].extendMembership(months);
			commandKnown = true;
		}
		else if (command == "cancel")
		{

			std::cin >> id;
			memberships[id - 1].cancelMembership();
			commandKnown = true;
		}
		else if (command == "exit")
		{
			break;
		}
		else if (!commandKnown)
		{
			std::cout << "Unknown command\n";
		}
	}
}