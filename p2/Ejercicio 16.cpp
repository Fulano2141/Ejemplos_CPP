/* 16.- Escriba un programa que mediante una función determine el pago por el servicio 
de estacionamiento de coches en un parqueo, teniendo en cuenta que la primera hora 
de estadía se paga 8 Bs., y las restantes 3 Bs. c/hora. Si el uso del servicio es menor
 a una hora se cobra por la hora y de igual manera si excede la hora se cobra por la 
 hora siguiente. Verificar con los siguientes casos:
Hora Entrada   Minuto de entrada    Hora Salida   Minuto Salida   Tiempo    Pago
09		35	       	10		            15	         1 hora        	08 Bs.
11		10		12		20	    2 horas       			11 Bs
17		55		21		30	    4 horas       			17 Bs.  
*/
#include <iostream>
using namespace std;
int pago(int);
int main(){
	int hor;
	cout<<"Ingrese las horas que estuvo aparcado su coche"<<endl;
	cin>>hor;
	cout<<"El monto a pagar por las horas de aparcamiento es: "<<pago(hor)<<"Bs. "<<endl;
	return 0;
}
int pago (int hor) {
	int x;
	if (hor==1)
	return 8;
	else 
	{hor=hor-1;
	x=hor*3+8;
	return x;
	}
}
