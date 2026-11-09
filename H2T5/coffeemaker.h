#ifndef COFFEEMAKER_H
#define COFFEEMAKER_H

class CoffeeMaker
{
private:
    float v_tilavuus;
    float v_maara;
    float papu_kapasiteetti;
    float papu_maara;
    bool tila;
public:
    CoffeeMaker();
    void start();
    void stop();
};

#endif // COFFEEMAKER_H
