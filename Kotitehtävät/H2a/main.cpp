#include <iostream>
#include <memory>

#include "car.h"
#include "rectangle.h"
#include "student.h"

using namespace std;

int main()
{
    // CAR (pinomuisti)
    Car car;

    car.setBrand("BMW");
    car.setModel("X5");
    car.setYearModel(2010);

    cout << "CAR" << endl;
    car.printData();

    cout << endl;

    // RECTANGLE (kekomuisti)
    Rectangle *rect = new Rectangle;

    rect->setWidth(5.5);
    rect->setHeight(3.0);

    cout << "RECTANGLE" << endl;
    cout << "Area: " << rect->getArea() << endl;
    cout << "Circumference: " << rect->getCircum() << endl;

    delete rect;

    cout << endl;

    // STUDENT (smart pointer)
    shared_ptr<Student> student = make_shared<Student>();

    student->setName("Hessu Hopo");
    student->setStudentNumber(583164);
    student->setAverage(6.6);

    cout << "STUDENT" << endl;
    cout << "Name: " << student->getName() << endl;
    cout << "Student number: " << student->getStudentNumber() << endl;
    cout << "Average: " << student->getAverage() << endl;

    return 0;
}