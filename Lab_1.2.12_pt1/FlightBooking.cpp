#include "FlightBooking.h"
#include <iostream>
FlightBooking::FlightBooking(int id, int capacity, int reserved)
{
	this->id = id;
	this->capacity = capacity;
	this->reserved = reserved;
}

void FlightBooking::printStatus()
{
	std::cout << "Flight " << id << " : " << reserved << "/" << capacity << " (" << ((float)reserved / capacity )*100 << "%) seats reserved\n";
}
