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

	std::cout << f1.toString() << " + " << f2.toString() << " = " << f1.sum(f2).toString() << "\n";
	std::cout << f1.toString() << " - " << f2.toString() << " = " << f1.substract(f2).toString() << "\n";
	std::cout << f1.toString() << " * " << f2.toString() << " = " << f1.multiply(f2).toString() << "\n";
	std::cout << f1.toString() << " / " << f2.toString() << " = " << f1.divide(f2).toString() << "\n";
}