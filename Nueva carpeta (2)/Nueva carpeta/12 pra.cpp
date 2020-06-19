// 12.- Leer varios apellidos y muestre aquellos que terminan con una vocal.//
/// CERO para Terminar
#include <iostream>
#include <string.h>

using namespace std;
int main ()
{
	char n[30]="";
	int y,h,j;
	do
	{
		cout<<"Ingrese el Apellido ";
		gets(n);
		cout<<"Ingrese cuantas letras tiene ";
		cin>>y;
		j=y-1;
		if (strcmp(n,"0"==0))
			break;
		if (n[j]=='a')
		cout<<n;
		if (n[j]=='e') 
		cout<<n;
		if (n[j]=='i')
		cout<<n;
		if (n[j]=='o')
		cout<<n;
		if (n[j]=='u') 
		cout<<n;
	} while (strcmp(n,"0")!=0);
	
}
