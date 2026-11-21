#include <iostream>
#include <memory>
#include "animal.h"
#include "dog.h"

using namespace std;

int main()
{
    // 1. Kantaluokan Animal-olio
    unique_ptr<Animal> objAnimal = make_unique<Animal>();
    objAnimal->callOut();

    // 2. Aliluokan Dog-olio polymorfisesti Animal-osoittimen kautta
    unique_ptr<Animal> objDog = make_unique<Dog>();
    objDog->callOut();

    return 0; // Älyosoittimet tuhoavat oliot automaattisesti tässä kohtaa
}
