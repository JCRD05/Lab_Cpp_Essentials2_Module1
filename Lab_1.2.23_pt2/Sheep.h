#pragma once
#include "FarmAnimal.h"
class Sheep : public FarmAnimal
{
private:
	double weight{};

public:
	Sheep(double weight);
	double getWaterConsumption() override { return (weight / 10) * 1.1; }
};

