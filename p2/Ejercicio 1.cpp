/* 1.- Calcular el número de pulsaciones que una persona debe tener por 
cada 10 segundos de ejercicio, si la fórmula es: 
	Numero de  Pulsaciones = (220 - edad)/10 */
#include <iostream>
using namespace std;
void leer();
void calcular();
void resultado();
double edad,pulsacion;
int main (){
	leer();
	calcular();
	resultado();
	return 0;
}
void leer(){
	cout<<"Ingrese la edad que tiene "<<endl;
	cin>>edad;
}
void calcular(){
	pulsacion=(220-edad)/10;
}
void resultado(){
	cout<<"El numero de pulsaciones cada 10 segundos"<<endl<<"segun su edad es: "<<pulsacion<<endl;
}
