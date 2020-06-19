/* 6.- Realizar un programa que lea la entrada de 2 números y muestre 
el doble producto del primero menos la mitad del segundo. */
#include <iostream>
using namespace std;
double resultado(double,double);
int main()
{
    int a,b,res;
    cout<<"Ingresar 2 numeros: "<<endl;
    cin>>a>>b;
    cout<<"El resutado es: "<<resultado(a,b)<<endl;
    return 0;
}
double resultado (double a,double b)
{  double aux;
    aux=2*a-b/2;
    return aux;
}
