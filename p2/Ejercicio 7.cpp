/* 7.- Leer un numero entero y obtener la suma de los dos  primeros dígitos, 
verifique que el número es entero positivo y mayor a 9, emplear una función. */
#include <iostream>
#include <cstdlib>
#include <math.h>
double digitador(double);
bool signo(int);
int cifras(int);
using namespace std;
int main(){
	int num;
	if (signo(num))
	{
    cout<<"Ingrese el numero: "<<endl;
    cin>>num;
    cout<<"El resutado es: "<<digitador(num)<<endl;}
    else 
    cout<<"El numero es menor a 10"<<endl;
    return 0;
}
double digitador(double n) {
	int dig,dig1,aux1,aux2,dig2,digtot;
	dig=cifras(n);
	aux2=dig-1;
	aux1=dig-2;
	dig1=trunc(n/pow(10,aux2));
	dig2=trunc(n/pow(10,aux1))-(dig1*10);
	digtot=dig1+dig2;
	return digtot;
}
int cifras(int n){
	int s, r;
	s=0;
	while(n>0)
	{	s++;
		n=n/10;}
	return s;
}
bool signo(int num){
	if (num>9)
	return true;
	else 
	return false;
}

