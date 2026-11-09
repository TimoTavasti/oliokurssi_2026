#ifndef HENKILO_H
#define HENKILO_H
#include<iostream>
using namespace std;

class Henkilo
{
private:
    string nimi;
    int ika;
protected:

public:
    Henkilo();
    Henkilo(string n, int i);
    string getNimi() const;
    void setNimi(const string &newNimi);
    int getIka() const;
    void setIka(int newIka);
    //tulostaTiedot halutaan ylkikirjoittaa perivässä luokassa, joten merkataan se virtuaaliseksi
    virtual void tulostaTiedot();
};

#endif // HENKILO_H
