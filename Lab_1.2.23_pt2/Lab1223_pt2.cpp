#include <iostream>
#include "FarmAnimal.h"
#include "DummyAnimal.h"
#include "DoublingAnimal.h"

void printConsumption(const FarmAnimal &animal)
{
    std::cout << "This animal species is a " << animal.getSpeciesName() << " and it consumes " << animal.getWaterConsumption() << " liters of water\n";
}

int main()
{
    FarmAnimal animalA(5, "cat");
    DummyAnimal animalB("dog");
    DoublingAnimal animalC(21, "cow");
   
    std::cout << "This animalA species is a " << animalA.getSpeciesName() << " and it consumes " << animalA.getWaterConsumption() << " liters of water\n";
    std::cout << "What about the others?\n";

    printConsumption(animalB);
    printConsumption(animalC);
}