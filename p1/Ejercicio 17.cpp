/* 17. Multiplicar dos números naturales, sin emplear el operador de la multiplicación, empleando sumas sucesivas. */
#include <iostream>
void leer();
void multi();
void impri();
using namespace std;
int a,b,c=0,d=0;
int main ()
{
	leer();
	multi();
	impri();
	return 0;
}
void leer()
{
	cout<<"Ingrese el primer digito "<<endl;
	cin>>a;
	cout<<"Ingrese el segundo digito "<<endl;
	cin>>b;
	
}
void multi()
{
	while (c<a)
	{
		c++;
		d=d+b;
	}
}
void impri()
{
	cout<<"El producto de los digitos es: "<<d<<endl;
}
