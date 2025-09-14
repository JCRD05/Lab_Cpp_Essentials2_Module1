#include <iostream>
#include <string>
#include "FlightBooking.h"

const int NUMBER_OF_FLIGHTS = 10;

int main()
{
	FlightBooking booking[NUMBER_OF_FLIGHTS];
	std::cout << "The system is empty\n";

	while (true)
	{
		std::string command{};
		int id{};
		int seats{};
		int index{};
		bool commandKnown{};

		std::cout << "What would you like to do?: ";
		std::cin >> command; 
		if (command == "create")
		{	
			std::cin >> id >> seats;
			while (index < NUMBER_OF_FLIGHTS)
			{
				if (booking[index].getID() == id)
				{
					std::cout << "Flight " << id << " is already in the system\n";
					break;
				}
				if (booking[index].getID() == 0)
				{
					booking[index] = FlightBooking(id,seats,0);
					std::cout << "Flight added to the system\n";
					break;
				}
				index++;
			}
			if(index == NUMBER_OF_FLIGHTS)
			{
				std::cout << "Capacity of flights has been reached\n";
			}
			commandKnown = true;
		}

		else if(command == "delete")
		{
			std::cin >> id;
			while (index < NUMBER_OF_FLIGHTS)
			{
				if (booking[index].getID() == id)
				{
					booking[index] = FlightBooking();
					std::cout << "Flight erased from the system\n";
					break;
				}
				index++;
			}
			if (index == NUMBER_OF_FLIGHTS)
			{
				std::cout << "The flight is not in the system\n";
			}
			commandKnown = true;
		}
		else if(command == "add")
		{
			std::cin >> id >> seats;
			booking[id - 1].addReservation(seats);
			commandKnown = true;
		}
		else if(command == "cancel")
		{
			std::cin >> id >> seats;
			booking[id - 1].cancelReservation(seats);
			commandKnown = true;
		}
		else if(command == "exit")
		{
			break;
		}
		else if(!commandKnown)
		{
			std::cout << "Unknown command\n";
		}
	}
}