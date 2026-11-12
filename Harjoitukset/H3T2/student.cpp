#include "student.h"

Student::Student(string n, int id):Person(n),studentId(id) {
    cout<<"  luotiin Stundent olio"<<endl;
}

Student::~Student()
{
    cout<<"   Student olio tuhottiin"<<endl;
}

void Student::sayStatus()
{
    cout<<"Olen Studentnimi= "<<this->getName()<<" studentId= "<<studentId<<endl;
}
