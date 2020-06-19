
// 1.-  Leer una palabra y determinar si contiene las
//      5 vocales.


#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
	int c=0,j=0;
	char digitos[50];
	char frase[20];
	cout<<"Ingrese los digitos: "<<endl;
	gets(digitos);
	cout<<"ingrese el digito a identificar: "<<endl;
	gets(frase);
	int t=strlen(digitos);
	int g=strlen(frase);
	for (int i=0;i<t;i++ and j++)
	{
		if (digitos[i]==frase[0])
			c++;
	}
        cout<<"La palabra no tiene "<<c;



	return 0;
}
