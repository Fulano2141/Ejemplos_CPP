/*14.  Escribir un programa que permita adivinar un número que sea genere internamente 
 al azar, el cual está en el rango de 0 a 50. El usuario debe adivinar este número en 
 base a aproximaciones, para lo cual se dispone de 5 intentos. */
#include <iostream> 
#include <stdlib.h>     
#include <time.h>
using namespace std;
int main(int valRandom)
{	
	srand (time(NULL));
	int limit=50,usrInput, i=1,aprox=0;
	valRandom=rand()%50+1;
	cout<<"El numero que estoy pensando esta entre 0 y 50"<<endl;
	cout<<"Ingrese numero: \n";
//	cout<<valRandom<<endl;
	do{
		cout<<"\nIntento "<<i<<": ";
		cin>>usrInput;
		if(usrInput>aprox and usrInput<valRandom){
			aprox=usrInput;
		}
		else{
			if(usrInput>valRandom)
			{
			limit=usrInput;
			}
		}		
		if(usrInput==valRandom){			
			cout<<"Felicitaciones Adivinaste, el ";
		}
		else
		{
			cout<<"\nEl numero esta entre "<<aprox <<" y "<<limit<<" \n";
		}
		i++;}
	while(i<=5 and usrInput!=valRandom);
	cout<<"Numero generado es: "<<valRandom;	
	return valRandom;
}
