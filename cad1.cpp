
// 1.-  Leer una palabra y determinar si contiene las
//      5 vocales.


#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
	int c=0;
	char frase[50];
	cout<<"Ingrese la frase:";
	gets(frase);
	int t=strlen(frase);
	for (int i=0;i<t;i++)
	{
		if (frase[i]=='a' || frase[i]=='e' || frase[i]=='i' || frase[i]=='o' || frase[i]=='u')
			c++;
	}
	if (c>=5)
        cout<<"La palabra tiene "<<c<<" las 5 vocales";
    else
        cout<<"La palabra no tiene "<<c<<" las 5 vocales";



	return 0;
}
