#include <iostream>
#include "FlightBooking.h"

int main()
{
	FlightBooking flight1(1,120,30);
	FlightBooking flight2(2, 100, 55);

	flight1.printStatus();
	flight2.printStatus();
}