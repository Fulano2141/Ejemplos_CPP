/*9.- En una fábrica de computadoras se planea ofrecer a los clientes un descuento que dependerá del número de computadoras 
 que compre. Si las computadoras son menos de cinco se les dará un 10% de descuento sobre el total de la compra; si el 
 número de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de descuento; y si son 10 o más 
 se les da un 40% de descuento. El precio de cada computadora es un valor que el usuario ingrese desde el teclado. */
 #include <iostream>
using namespace std;
float decompras(float,float);
int main()
{	int cc,tot,pre;
	cout<<"Ingregese el numero de computadoras a comprar "<<endl;
	cin>>cc;
	if (cc<1)
	cout<<"NO COMPRO NINGUNA!";
	else{
		cout<<"Ingrese el precio estimado por unidad"<<endl;
		cin>>pre;
		tot=decompras(cc,pre);
		cout<<"El precio con descuento aplicado es: "<<tot<<endl;}
	return 0;}
float decompras(float cc, float pre)
{	float x;
	if (cc>=1 and cc<5)
	{	x=(pre*cc)-(pre*cc)*0.1;
		return x;}
	else 
	{	if (cc<10)
		{	x=(pre*cc)-(pre*cc)*0.2;
			return x;}
		else
		{	x=(pre*cc)-(pre*cc)*0.4;
		return x;}
	}
}
