#include <iostream>
#include <vector>

#include "car.h"

using namespace std;

int main()
{
    vector<Car> carList;

    carList.push_back(Car("Toyota", "Supra", 1994));
    carList.push_back(Car("BMW", "2002 Turbo", 1974));
    carList.push_back(Car("Nissan", "Skyline", 2000));

    cout << "Toinen alkio:" << endl;
    carList.at(1).printData();

    cout << endl;
    cout << "Kaikki autot:" << endl;

    for(Car car : carList)
    {
        car.printData();
        cout << endl;
    }


    return 0;
}
