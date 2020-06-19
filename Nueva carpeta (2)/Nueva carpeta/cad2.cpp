// 2.-  Leer el correo electronico de varias personas
//      y determine el porcentaje correos pertenecientes
//      a "gmail.com"

#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
	int c=0,p;
	int n;
	char correo[50];
    char *nombre,*email;
	cout << "Cuantos correos desea leer:";
	cin >> n;
	for (int i=1;i<n+1;i++)
	{
        cout << "Ingrese el correo: ";
        cin >> correo;
        nombre=strtok(correo,"@");
        email=strtok(NULL,"@");
        cout << nombre << "  "<<correo<<endl;
        if (strcmp(email,"gmail.com")==0)
            c++;
    }
    p=c*100/n;
    cout << "El % de correos de gmail es : "<<p<<endl;
    return 0;
}


