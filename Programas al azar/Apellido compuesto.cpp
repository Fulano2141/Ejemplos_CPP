// 4.- Leer el nombre y el apellido paterno de una persona
//     y determinar si el apellido es compuesto
//       Ej: juan del castillo
//           maria del solar
//           hugo perez
//           carlos diez de medina
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
    char nombre[50];
    int c=0;
    cout << "Ingrese el nombre y el apellido de una persona: ";
	gets(nombre);
	for (int i=0;i<strlen(nombre);i++)
	{
        if (nombre[i]==' ')  // compara si es un espacio en blanco
              c++;
    }
    if (c>1)
        cout << "Tiene un apellido compuesto"<<endl;
    return 0;
    }
