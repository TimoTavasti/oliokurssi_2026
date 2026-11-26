#ifndef ENGINE_H
#define ENGINE_H

class Engine
{
private:
    int horsepower;
    double displacement;

public:
    Engine();
    Engine(int horsepower, double displacement);

    int getHorsepower();
    void setHorsepower(int horsepower);

    double getDisplacement();
    void setDisplacement(double displacement);
};

#endif // ENGINE_H