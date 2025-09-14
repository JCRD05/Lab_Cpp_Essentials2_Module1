#include "FlightBooking.h"
#include <iostream>
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this->id = id;
	this->capacity = capacity;
	if(reserved <= capacity * 1.05){ this->reserved = reserved; }
	else if(reserved < 0){ this->reserved = 0; }
	else
	{
		std::cout << "The number of reservations should be less than 105% of the flight capacity\n";
		this->reserved = 0;
	}
}

FlightBooking::FlightBooking()
{
	id = 0;
	capacity = 0;
	reserved = 0;
}

int FlightBooking::getID(){ return id; }

void FlightBooking::printStatus()
{
	std::cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << ((float)reserved / capacity )*100 << "%) seats reserved\n";
}

void FlightBooking::addReservation(int reservation)
{
	if ( ((reservation + reserved) > capacity * 1.05) || (reservation < 1) )
	{
		std::cout << "Cannot perform this operation\n";
	}
	else 
	{
		reserved += reservation; 
		printStatus();
	}
}

void FlightBooking::cancelReservation(int reservation)
{
	if ((reserved - reservation) < 0 || (reservation < 1))
	{
		std::cout << "Cannot perform this operation\n";
	}
	else 
	{
		reserved -= reservation;
		printStatus();
	}
}
