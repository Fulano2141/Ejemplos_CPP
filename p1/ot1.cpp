/* 15. En una tienda comercial, las amas de casa compran diversos artículos 
de primera necesidad. Una ama de casa selecciona los artículos de su 
preferencia pasando por los distintos mostradores, cada artículo elegido es 
colocado en un carrito de mano, para asegurar el pago exacto de los artículos 
comprados la señora anota el precio y la cantidad del artículo, estableciendo 
cuanto pagara por este articulo; así sumara los demás artículos.  Ayude a 
esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito 
de manos con todos los artículos de primera necesidad. */
#include <iostream>
void obtener();
void buy();
void todo();
using namespace std;
float c,s=0,p;
int main()
{
	obtener();
	cin>>p;
	c=p;
	while (p!=-1)
	{
		buy();
	}
	todo();
	return 0;
}
void buy()
{
	cout<<"Ingrese el precio del articulo, (-1 para ternimar)"<<endl;
	cin>>p;
	c=c+p;
	s++;
}
void obtener()
{
	cout<<"Ingrese el precio del articulo, (-1 para ternimar)"<<endl;
}
void todo()
{
	cout<<"La suma del precio de los articulos comprados es: "<<c<<endl;
	cout<<"Se compro "<<s<<" articulos "<<endl;
}
