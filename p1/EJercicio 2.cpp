/* 2.-  Leer un valor que represente la temperatura en 
centígrados y convierta a grados Fahrenheit y viceversa. */
#include <iostream>
void leer1();
void leer2();
void convercen();
void converfar();
void imprimir2();
void imprimir1();
using namespace std;
int a,n;
float gc;
int main ()
{
	leer1();
	if (a!=1 and a!=2)
		cout<<"Numero no valido"<<endl;
	else
	{
	if (a==1)
	{
		leer2();
		convercen ();
		imprimir1();}
	if (a==2)
	{
		leer2();
		converfar ();
		imprimir2();}}
	return 0;
}
void leer1(){
	cout<<"Conversion: "<<endl;
	cout<<"1.- De Grados Centigrados a Grados Fahrenheit "<<endl;
	cout<<"2.- De Grados Fahrenheit a Grados Centigrados "<<endl;
	cin>>a;

}
void leer2()
{
	cout<<"Ingrese el valor a convertir "<<endl;
	cin>>n;	
}
void converfar()
{
	gc=((n-32)*5)/9;	
}
void convercen()
{
	gc=(n*1.8)+32;
}
void imprimir1()
{
	cout<<"La conversion del valor es: "<<gc<<" Grados Fahrenheit"<<endl;

}
void imprimir2()
{
	cout<<"La conversion del valor es: "<<gc<<" Grados Centigrados"<<endl;

}
