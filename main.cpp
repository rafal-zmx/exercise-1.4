/*Obliczanie objętość kuli o promieniu r. Wartość promienia wprowadzamy
z klawitury. r jest typem float. Objętość i r wyświetlamy na ekranie z
dokładnścią do 2 miejsc po przecinku*/

#include <iostream>
#include <conio.h>
#include <iomanip>
#include <math.h>

using namespace std;

float r, objetosc;

int main()
{
    cout<<"Program do obliczania objetosci kuli"<<endl;
    cout<<"Podaj promien kuli "<<endl;
    cin>>r;
    objetosc=4*M_PI*r*r*r/3;
    cout<<"Objetosc kuli wynosi "<<objetosc<<fixed<<setprecision(2)<<endl;

    getch();
}
