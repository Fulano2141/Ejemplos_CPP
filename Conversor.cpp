/* Convertir minutos en dias;horas;minutos;*/
#include <iostream>
#include <math.h>
#include <cstdio> 
// #include <bits/stdc++.h>
using namespace std;
int dias,hora,minu;
class Conver {
	int min;
	public:
		Conver(int);
		void convers();
};
Conver::Conver(int min){
	this->min=min;
};
void Conver::convers(){
	dias=min/1440;
	hora=(min%1440)/60;
	minu=min-dias*1440-hora*60;
};
int main(){
	int min;
	cout<<"Ingrese los minutos: ";
	cin>>min;
	Conver p(min);
	p.convers();
	cout<<"Dias: "<<dias<<" Horas: "<<hora<<" Minutos: "<<minu<<endl;
}
