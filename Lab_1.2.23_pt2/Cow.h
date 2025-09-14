#include "FarmAnimal.h"
#pragma once
class Cow : public FarmAnimal
{
private:
	double weight{};

public:
	Cow(double weight);
	double getWaterConsumption() override { return (weight / 100) * 8.6; }
};

