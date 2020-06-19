// 4.-  Escribir un programa que calcule el volumen de una pirámide recta de base cuadrada
#include <iostream>
void leer();
void calcular();
void salida();
using namespace std;
int a,b,res;
int main ()
{
	leer();
	calcular();
	salida();
	return 0;	
}
void leer()
{
	cout<<"Ingrese la altura"<<endl;
	cin>>a;
	cout<<"Ingrese la base"<<endl;
	cin>>b;
	
}
void calcular()
{
	res=(b*b*a)/3;
}
void salida()
{
	cout<<"El volumen de la piramide con base cuadrada propuesta es: "<<res<<endl;
}
