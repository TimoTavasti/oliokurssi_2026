#include <iostream>
#include <stdexcept>
#include "functions.h"

using namespace std;

int main()
{
    int a;
    int b;

    cout << "Anna luku a: ";
    cin >> a;

    cout << "Anna luku b: ";
    cin >> b;

    calcSum(a, b);
    calcDiv(a, b);

    cout << "Palautettu summa: "
         << retSum(a, b) << endl;

    float result;

    try
    {
        result = retDiv(a, b);
        cout << a << "/" << b
             << " = " << result << endl;
    }
    catch (runtime_error& e)
    {
        cout << "Error: "
             << e.what() << endl;
    }

    return 0;
}