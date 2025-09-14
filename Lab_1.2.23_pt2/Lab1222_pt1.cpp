#include <iostream>
#include "FarmAnimal.h"
#include "Cow.h"
#include "Horse.h"
#include "Sheep.h"
#include <string>

int main()
{
    std::string command{};
    int weight{};
    double totalWaterConsumption{};

    while(true)
    {
        std::cin >> command;
        if (command == "cow")
        {
            std::cin >> weight;
            Cow cow(weight);
            totalWaterConsumption += cow.getWaterConsumption();

        }
        else if (command == "horse")
        {
            std::cin >> weight;
            Horse horse(weight);
            totalWaterConsumption += horse.getWaterConsumption();
        }
        else if (command == "sheep")
        {
            std::cin >> weight;
            Sheep sheep(weight);
            totalWaterConsumption += sheep.getWaterConsumption();
        }
        else if (command == "result") { break; }
    }
    std::cout << totalWaterConsumption << "\n";
}