#include <iostream>
#include "Fraction.h"

int main()
{
	int numerator{};
	int denominator{};
	std::string slash{};

	std::cin >> numerator >> slash >> denominator;
	Fraction fraction(numerator,denominator);
	std::cout << fraction.toString() << " is " << fraction.toDouble() << " in decimal\n";
}