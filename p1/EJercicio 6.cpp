// 6.-  Leer un numero entero y determine mediante mensajes, si es cero,
// un numero par positivo, par negativo, impar positivo o impar negativo.
#include <iostream>
void leer();
void par();
void positivo();
using namespace std;
int n;
int main ()
{
	leer();
	if (n==0)
	{
	cout<<"El Valor es cero "<<endl;		
	}
	else {
	positivo();	
	par();
	}
	return 0;
	
}
void leer()
{
	cout<<"Ingrese el numero a definir "<<endl;
	cin>>n;
}
void par()
{
	if (n%2==0)
	cout<<" es par "<<endl;
	else 
	cout<<" es impar"<<endl;
}
void positivo()
{
	if (n>0)
	cout<<"El numero es positivo y";
	else
	cout<<"El numero es negativo y";
}
