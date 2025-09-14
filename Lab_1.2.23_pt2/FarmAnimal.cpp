#include "FarmAnimal.h"

FarmAnimal::FarmAnimal(double weight, std::string speciesName)
{
	this->weight = weight;
	this->speciesName = speciesName;
}

double FarmAnimal::getWaterConsumption() { return waterConsumption = 0; }

std::string FarmAnimal::getSpeciesName() const { return speciesName; }
