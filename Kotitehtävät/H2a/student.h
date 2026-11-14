#ifndef STUDENT_H
#define STUDENT_H

#include <string>

using namespace std;

class Student
{
public:
    void setName(string n);
    void setStudentNumber(int sn);
    void setAverage(double avg);

    string getName();
    int getStudentNumber();
    double getAverage();

private:
    string name;
    int studentNumber;
    double average;
};

#endif // STUDENT_H