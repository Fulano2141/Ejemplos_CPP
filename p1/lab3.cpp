//3. Mediante el uso de una funcion con retorno calcular el volumen de un cubo
#include <iostream>
#include <math.h>
using namespace std;
float volcubo(float);
int main()
{
    float lado,x;
    cout<<"ingresar el lado del cubo";
    cin>>lado;
    x=volcubo(lado);
    cout<<"El volumen es: "<<x<<endl;
    return 0;
}
float volcubo(float lado)
{
   return pow(lado,3);

}
