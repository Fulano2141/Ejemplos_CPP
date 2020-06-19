/* 4.-  Leer un numero entero y determine mediante mensajes, si es cero, un numero 
par positivo, par negativo, impar positivo o impar negativo. */
#include <iostream>
using namespace std;
void leer();
void signo();
void par(); 
int num;
int main (){
	leer();
	signo();
	par();	
	return 0;
}
void leer(){
	cout<<"Ingrese el numero "<<endl;
	cin>>num;
}
void signo(){
	if (num==0)
		cout<<"El numero es cero "<<endl;
	else 
	{	if (num>0)
		cout<<"El numero es positivo ";
		else
		cout<<"El numero es negativo ";
	}}
void par(){
	if (num%2==0)
	cout<<"par "<<endl;
	else
	cout<<"impar "<<endl;}
