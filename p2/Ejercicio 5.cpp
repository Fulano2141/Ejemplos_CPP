/* 5.- Un supermercado ha puesto en oferta la venta al por mayor (es decir la venta por docenas) 
de cierto producto, ofreciendo un descuento del 17% por la compra de más de 3 docenas y 12% en 
caso contrario. Además por la compra de más de 3 docenas se obsequia una unidad del producto por 
cada docena en exceso sobre 3. Diseñe un programa que determine el monto de la compra, el monto 
del descuento, el monto a pagar y el número de unidades de obsequio por la compra de cierta cantidad 
de docenas del producto. */
#include<iostream>
#include <math.h>
using namespace std;
void leer();
void compra();
void pagodes(); 
int num,pre,des,ob,preto;
int main (){
	leer();
	compra();
	pagodes();	
	return 0;
}
void leer(){
	cout<<"Ingrese el numero de productos comprados "<<endl;
	cin>>num;
	cout<<"Ingrese el precio de los productos "<<endl;
	cin>>pre;
}
void compra(){
	if (num<36)
	{
		des=(pre*num*0.12);
		ob=0;	
	}
	else 
	{	des=(pre*num*0.17);
		ob=num/36;
		}}
void pagodes(){
	preto=num*pre;
	cout<<"Los productos comprados son "<<num<<endl;
	cout<<"El monto de descuento es "<<des<<endl;
	cout<<"El monto a pagar es "<<preto-des<<endl;
	cout<<"Los obsequios de la compra son "<<ob<<endl;
}


