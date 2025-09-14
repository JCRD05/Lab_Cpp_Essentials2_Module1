#pragma once
#include "FarmAnimal.h"
class Horse : public FarmAnimal
{
private:
	double weight{};

public:
	Horse(double weight);
	double getWaterConsumption() override { return (weight / 100) * 6.8; }
};

