#include "FarmAnimal.h"

FarmAnimal::FarmAnimal(double waterConsumption, std::string speciesName)
{
	this->waterConsumption = waterConsumption;
	this->speciesName = speciesName;
}

double FarmAnimal::getWaterConsumption() const { return waterConsumption; }

std::string FarmAnimal::getSpeciesName() const { return speciesName; }
