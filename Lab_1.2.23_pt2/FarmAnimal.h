#include <iostream>
#pragma once
class FarmAnimal
{
private:
	double weight{};
	double waterConsumption{};
	std::string speciesName{};

public:
	FarmAnimal(double weight, std::string speciesName);
	virtual double getWaterConsumption();
	std::string getSpeciesName() const;
};

