/* 18. En una llantería se ha establecido una promoción de las llantas marca "Ponchadas", 
dicha promoción consiste en lo siguiente:
Si se compran menos de cinco llantas el precio es de 300 Bs. cada una. si se compran de 
cinco a 10 y 250 Bs si se compran más de 10 el precio es 200. Obtener la cantidad de 
dinero que una persona tiene que pagar por cada una de las llantas que compra y la que 
tiene que pagar por el total de la compra */
#include <iostream>
void menor();
void medio();
void mayor();
using namespace std;
int lla,pre,tot;
int main()
{
	cout<<"Ingresar el monto de llantas a comprar "<<endl;
	cin>>lla;
	if (lla<=0)
	{
		cout<<"Usted no compro llantas "<<endl;
	}
	else 
	{
	if (lla<5)
	{
		menor();
	}
	else
	{
		if (lla<10)
		{
			medio();
		}
		else
		{
			mayor();
		}
	}
	}
}
void menor()
{
	pre=300;
	tot=pre*lla;
	cout<<"El precio por llanta es: "<<pre<<". Debe un total de: "<<tot<<endl;
}
void medio()
{
	pre=250;
	tot=pre*lla;
	cout<<"El precio por llanta es: "<<pre<<". Debe un total de: "<<tot<<endl;
}
void mayor()
{
	pre=200;
	tot=pre*lla;
	cout<<"El precio por llanta es: "<<pre<<". Debe un total de: "<<tot<<endl;
}

