/* 15. En una tienda comercial, las amas de casa compran diversos artículos 
de primera necesidad. Una ama de casa selecciona los artículos de su 
preferencia pasando por los distintos mostradores, cada artículo elegido es 
colocado en un carrito de mano, para asegurar el pago exacto de los artículos 
comprados la señora anota el precio y la cantidad del artículo, estableciendo 
cuanto pagara por este articulo; así sumara los demás artículos.  Ayude a 
esta ama de casa a obtener el total de sus comprar, luego de llenar el carrito 
de manos con todos los artículos de primera necesidad. */
#include <iostream>
void pedir();
void compra();
void total();
using namespace std;
float c,sum=0,pre;
int main()
{
	pedir();
	cin>>pre;
	c=pre;
	while (pre!=0)
	{
		compra();
	}
	total();
	return 0;
}
void compra()
{
	cout<<"Ingrese el precio del articulo, (0 para ternimar)"<<endl;
	cin>>pre;
	c=c+pre;
	sum++;
}
void pedir()
{
	cout<<"Ingrese el precio del articulo, (0 para ternimar)"<<endl;
}
void total()
{
	cout<<"La suma del precio de los articulos comprados es: "<<c<<endl;
	cout<<"Se compro "<<sum<<" articulos "<<endl;
}
