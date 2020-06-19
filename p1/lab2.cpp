//2.- Empleando funciones con retorno, determinar la cantidad de digitos de un numero entero
//    que ingreso el usuario
#include <iostream>
using namespace std;
int conteo(int);
int main()
{
    int x,c;
    cout<<"ingresar un numero:";
    cin>>x;
    c=conteo(x);
    cout<<"La cantidad de digitos es: "<<c<<endl;
    return 0;
}
int conteo(int x)
{
    int c=0,a;
    while(x>0)
    {
    a=x%10;
    c++;
    x=x/10;
    }
return c;
}

