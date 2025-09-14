#include <iostream>
#include "Fraction.h"

Fraction addFraction()
{
	int numerator{};
	int denominator{};
	std::string slash{};

	std::cin >> numerator >> slash >> denominator;
	Fraction fraction(numerator, denominator);
	return fraction;
}

int main()
{
	Fraction f1 = addFraction();
	Fraction f2 = addFraction();

	if (f1.greaterThan(f2))
	{
		std::cout << f1.toString() << " > " << f2.toString() << "\n";
	}
	if (f1.lessThan(f2))
	{
		std::cout << f1.toString() << " < " << f2.toString() << "\n";
	}
	if (f1.equalTo(f2))
	{
		std::cout << f1.toString() << " = " << f2.toString() << "\n";
	}
}