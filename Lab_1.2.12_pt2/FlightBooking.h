#pragma once
class FlightBooking
{
private:
	int id{};
	int capacity{};
	int reserved{};

public:
	FlightBooking(int id, int capacity, int reserved);
	void printStatus();
	void addReservation(int reservation);
	void cancelReservation(int reservation);
};

