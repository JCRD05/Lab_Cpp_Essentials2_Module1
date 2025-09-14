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
	Fraction sum(Fraction fraction);
	Fraction substract(Fraction fraction);
	Fraction multiply(Fraction fraction);
	Fraction divide(Fraction fraction);
	bool lessThan(Fraction fraction);
	bool equalTo(Fraction fraction);
	bool greaterThan(Fraction fraction);
	void reduce();

};

