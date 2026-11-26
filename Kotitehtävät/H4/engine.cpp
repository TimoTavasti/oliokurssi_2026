#include "Engine.h"

Engine::Engine()
{
    horsepower = 0;
    displacement = 0.0;
}

Engine::Engine(int horsepower, double displacement)
{
    this->horsepower = horsepower;
    this->displacement = displacement;
}

int Engine::getHorsepower()
{
    return horsepower;
}

void Engine::setHorsepower(int horsepower)
{
    this->horsepower = horsepower;
}

double Engine::getDisplacement()
{
    return displacement;
}

void Engine::setDisplacement(double displacement)
{
    this->displacement = displacement;
}