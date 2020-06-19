// 3.-  Leer un valor en bolivianos y convierta a Euros, Dolares y Libras Esterlinas
#include <iostream>
void entrada1();
void entrada2();
void converdo();
void convereu();
void converlb();
void salido();
void salieu();
void salilb();
using namespace std;
int a,num;
float res;
int main ()
{
	entrada1();
	switch (a)
	{
		case 1 :entrada2();converdo();salido();break;
		case 2 :entrada2();convereu();salieu();break;
		case 3 :entrada2();converlb();salilb();break;
		default:cout<<"Numero invalido "<<endl;
	}
	return 0;
}
void entrada1()
{
	cout<<"Conversion de Moneda Boliviana a: "<<endl;
	cout<<"1.- Dolares "<<endl;
	cout<<"2.- Euros "<<endl;
	cout<<"3.- Libras Esterlinas "<<endl;
	cin>>a;
}
void entrada2()
{
	cout<<"Ingrese el valor en Bolivianos a convertir "<<endl;
	cin>>num;
}
void converdo()
{
	res=num/6.91;
}
void convereu()
{
	res=num/8.494;
}
void converlb()
{
	res=num/9.61957;
}
void salido()
{
	cout<<"Son: "<<res<<" Dolares"<<endl;
}
void salieu()
{
	cout<<"Son: "<<res<<" Euros"<<endl;
}
void salilb()
{
	cout<<"Son: "<<res<<" Libras esterlinas"<<endl;
}

