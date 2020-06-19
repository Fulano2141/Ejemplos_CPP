//mediante el uso de funciones, calcular el promedio de 3 numeros ingresados por el usuario
#include <iostream>
#include <math.h>
#define PI 3.1416
using namespace std;
float promedio(float, float, float);
int main()
{
float a,b,c;
cout<<"Ingresar 3 numeros ";
cin>>a>>b>>c;
cout<<"El promedio es : "<<promedio(a,b,c)<<endl;
return 0;
}
float promedio(float a,float b,float c)
{
    return (a+b+c)/3.0;
}
