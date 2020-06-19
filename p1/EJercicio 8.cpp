// 8.- Leer un numero n y tambien un intervalo de cerrado de valores (a,b), 
//si el numero esta dentro del intervalo obtenga su cuadrado (n*n), si es menor 
//que el limite inferior, obtenga su valor inverso (1/n), si esta por encima del
// intervalo obtenga su mitad  (n/2).*/
#include <iostream>
using namespace std;
float numero(float,float,float);
int main()
{	float res,nume,a,b;
	cout<<"Ingregese el numero entero "<<endl;
	cin>>nume; 
	cout<<"Ingrese el limite inferior del intervalo "<<endl;
	cin>>a;
	cout<<"Ingrese el limite inferior del intervalo "<<endl;
	cin>>b;
	res=numero(nume,a,b);
	cout<<"El resultado es: "<<res<<endl;
	return 0;}
float numero(float nume, float a, float b)
{
	float x;
	if (nume>a and nume<b)
		{
		x=nume*nume;
		return x;}
	else 
		{
		if (nume<a)
			{
			x=1/nume;
			return x;}
		else
			{
			x=nume/2;
			return x;}}
	}
