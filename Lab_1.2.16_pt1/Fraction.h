#include <iostream>
#pragma once
class Fraction
{
private:
	int numerator{};
	int denominator{};

public:
	Fraction(int numerator, int denominator);
	std::string toString();
	double toDouble();

};

