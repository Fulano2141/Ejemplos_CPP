/* 4.- En una f�brica de computadoras se planea ofrecer a los clientes un descuento 
que depender� del n�mero de computadoras que compre. Si las computadoras son menos 
de cinco se les dar� un 10% de descuento sobre el total de la compra; si el n�mero 
de computadoras es mayor o igual a cinco pero menos de diez se le otorga un 20% de 
descuento; y si son 10 o m�s se les da un 40% de descuento. El precio de cada 
computadora es un valor que el usuario ingrese desde el teclado. Se debe obtener el 
precio total que el cliente debe pagar y el valor del descuento. */
#include <iostream>
using namespace std;
void compra(int&, int&);
int main(){
	int num,pre;
	cout<<"Ingrese el numero de computadoras a comprar y el precio "<<endl;
	cin>>num;
	cin>>pre;
	compra(num, pre);
	cout<<num<<"Bs. es el descuento y "<<pre<<"Bs. es el precio total a pagar "<<endl;}
void compra(int& num, int& pre){ 
	int x=num, y=pre;
	if (x<5){
		num=x*y*0.10;
		pre=x*y-num;
	}
	if (x>=5 and x<10){
		num=x*y*0.20;
		pre=x*y-num;
	}
	if (x>=10)
		{
		num=x*y*0.40;
		pre=x*y-num;
		}
}
