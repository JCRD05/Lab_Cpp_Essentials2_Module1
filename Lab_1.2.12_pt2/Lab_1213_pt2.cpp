#include <iostream>
#include "FlightBooking.h"

int main()
{
	int reserved{};
	int	capacity{};
	std::cout << "Provide flight capacity: ";
	std::cin >> capacity;

	std::cout << "Provide number of reserved seats: ";
	std::cin >> reserved;

	FlightBooking booking(1, capacity, reserved);

	std::string command{};

	while (command != "quit")
	{
		std::cout << "What would you like to do?: ";
		std::cin >> command;
		if(command == "add")
		{
			int reservation{};
			std::cout << "How many reservations you want to add?\n";
			std::cin >> reservation;
			booking.addReservation(reservation);
		}
		if(command == "cancel")
		{
			int reservation{};
			std::cout << "How many reservations you want to cancel?\n";
			std::cin >> reservation;
			booking.cancelReservation(reservation);
		}
	}
}