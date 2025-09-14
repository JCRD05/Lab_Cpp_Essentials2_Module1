#include <iostream>
#pragma once
class FarmAnimal
{
private:
	double waterConsumption{};
	std::string speciesName{};

public:
	FarmAnimal(double waterConsumption, std::string speciesName);
	double getWaterConsumption() const;
	std::string getSpeciesName() const;
};

