// 1.-  Convertir minutos en dias , horas  y minutos

#include<iostream>
using namespace std;
void conversion(int,int&,int&,int&);
main()
{

int min,dias,horas,mins;
cin >> min;
conversion(min,dias,horas,mins);
cout << dias << ":" << horas << ":" << mins << endl;
}
void conversion(int min,int&dias,int&horas,int&mins)
{

    dias = min/1440;
    horas = (min%1440)/60;
    mins = (min%1440)%60;

}

