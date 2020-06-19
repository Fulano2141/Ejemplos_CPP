/*14.  Escribir un programa que permita adivinar un número que sea genere internamente 
 al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en 
 base a aproximaciones, para lo cual se dispone de 5 intentos. */
#include <iostream> 
#include <stdlib.h>     
#include <time.h>
using namespace std;
int main(int r)
{	
	srand (time(NULL));
	int l=50,u, i=1,a=0;
	r=rand()%50+1;
	cout<<"El numero que estoy pensando esta entre 0 y 50"<<endl;
	cout<<"Ingrese numero: \n";
	do{
		cout<<"Intento "<<i<<": ";
		cin>>u;
		if(u>a and u<r){
			a=u;
		}
		else{
			if(u>r)
			{l=u;			}
		}		
		if(u==r){			
			cout<<"Felicitaciones Adivinaste ";
		}
		else
		{
			cout<<"El numero esta entre "<<a<<" y "<<l;
		}
		i++;}
	while(i<=5 and u!=r);
	cout<<"Numero generado es: "<<r;	
	return r;
}
