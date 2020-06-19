// 1.-mediante el uso de funciones CON RETORNO, determinar el mayor de 3 numeros ingresados

#include <iostream>
using namespace std;
int mayor(int,int,int);
int main()
{
    int a,b,c,max;
    cout<<"ingresar 3 numeros enteros:"<<endl;
    cin>>a>>b>>c;
    max=mayor(a,b,c);
    cout<<"El numero mayor es: "<<max<<endl;
    return 0;
}
int mayor(int a,int b,int c)
{  int aux=a;
    if(aux<b)
       aux=b;
    if(aux<c)
       aux=c;
return aux;
}
