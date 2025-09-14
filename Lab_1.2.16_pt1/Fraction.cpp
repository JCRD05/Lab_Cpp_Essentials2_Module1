#include <string>
#include "Fraction.h"

Fraction::Fraction(int numerator, int denominator)
{
	this->numerator = numerator;
	if (denominator == 0){ this->denominator = 1; }
	else { this->denominator = denominator; }
}

std::string Fraction::toString()
{
	std::string result{};
	int wholes{};
	int parts{};
	if(numerator < 0 || denominator < 0)
	{
		result = "-";
	}
	else
	{
		result = "";
	}

	wholes = abs(numerator / denominator);
	parts = abs(numerator % denominator);

	if (wholes == 0 && parts == 0)
	{
		result = "0";
	}
	else
	{
		if (wholes > 0)
		{
			result += std::to_string(wholes);
		}

		if (wholes > 0 && parts > 0) 
		{
			result += ' ';
		}

		if (parts > 0)
		{
			result += std::to_string(abs(parts)) + '/' + std::to_string(abs(denominator));
		}
	}
	return result;
}

double Fraction::toDouble()
{
	return (double)numerator / denominator;
}
