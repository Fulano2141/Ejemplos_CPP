/* 16. Crear un programa que indique si un n�mero es perfecto o no, se dice 
que un n�mero es perfecto si la suma de sus divisores es igual al n�mero. 
Por ejemplo 6 tiene como divisores 1,2  y 3., entonces 1+2+3 =6 el n�mero 6 
es perfecto, si el n�mero es 9 tiene como divisores 1, 3, entonces 1+3=4 no 
es perfecto. */
#include <iostream>
using namespace std;
int num,c=0,dig=1,c2=0;
int main()
{
	
	cout<<"Ingrese el numero a evaluar: "<<endl;
	cin>>num;
	while (c<10)
	{	
	c++;
	if (num%dig==0)
	{c2=c2+dig;
	cout<<dig<<" ";}
	dig++;		}
	c2=c2-num;
	if (c2==num)
	cout<<"Es numero perfecto "<<endl;
	else 
	cout<<"No es un numero perfecto "<<endl;
}

