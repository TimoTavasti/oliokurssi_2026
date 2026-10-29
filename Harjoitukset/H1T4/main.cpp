#include <iostream>

using namespace std;
/*
 * Esimerkki havainnollistaa try catch rakentaa tarvetta.
 * Sovellus kyselee lukuja, kunnes annetaan luku 999
 * Sovellus lukee käyttäjän syötteen merkkijonon ja muuttaa sen kokonaisluvuksi
 * Sovellus tulostaa annetun luvun kaksinkertaisena
 * Merkkijonon muunnos kokonaisluvuksi tehdään tässä stoi-funktiolla
 * */
int main()
{
     int number=1;
     string word;
    // Tällä versiolla ohjelma kaatuu, jos annetaan vahingossa merkkejä
    // while (number != 999){
    //     cout<<"Anna kokonaisluku: ";
    //     cin>>word;
    //     number=stoi (word);
    //     cout<<"Kaksinkertaisena luku="<<2*number<<endl;
    // }

    while(number != 999){
        cout<<"Anna kokonaisluku :";
        cin>>word;
        try{
            number=stoi(word);
            cout<<"Kaksinkertaisena luku="<<2*number<<endl;
        } catch (const invalid_argument &e) {
            cout<<"Jokin meni vikaan"<<endl;
            cout<<e.what();
        }
    }
    return 0;
}
