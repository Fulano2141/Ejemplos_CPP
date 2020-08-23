/* 13.-  Leer un numero entero y muestre la suma de sus dos primeros dígitos.*/
#include <iostream>
using namespace std;
void digitador();
int numero, a,b,c,d,sum;
int main()
 {
	cout<<"Escribe un numero entero con 4 digitos: ";
	cin>>numero;
	digitador();
	sum=a+b;
	cout<<a<<"+"<<b<<"="<<sum;
	return 0;
}
void digitador()
{
	if (numero>=1000)
	{
		if (numero<=9999)
		{
		a=numero/1000;
		b=(numero%1000)/100;
		c=(numero%1000)%100/10;
		d=((numero%1000)%100)%10;
		}
	}
}
