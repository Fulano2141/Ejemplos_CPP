/*
4.- Tigo lanzo una promoci�n para recargas en base a los criterios:

- Por la compra de una tarjeta de   20 Bs recibes  25 Bs m�s 5 Bs de SMS
- Por la compra de una tarjeta de  30 Bs recibes  40 Bs m�s 10 Bs de SMS
- Por la compra de una tarjeta de   50 Bs recibes  75 Bs m�s 15 Bs de SMS
- Por la compra de una tarjeta de 100 Bs recibes 200 Bs m�s 20 Bs de SMS

Un cliente decide comprar  N  tarjetas de montos iguales, para lo cual dispone de un monto  M en bolivianos, una funci�n debe indicarle que tarjeta debe comprar, adem�s debe calcular el ahorro total que lograr� por esta promoci�n  (incluyendo los SMS)  y el saldo que quedara si lo hubiera.
Ej:
Caso 1:
Un cliente dispone de 250 Bs. y  tiene la intenci�n de comprar  6  tarjetas.
La funci�n le indica que puede comprar 6 tarjetas de 30 Bs, adem�s el ahorro ser� de: 120 Bs y tiene un saldo de 70.
Caso 2:
Un cliente dispone de 100 Bs. y  tiene la intenci�n de comprar  5  tarjetas.
La funci�n le indica que puede comprar 5 tarjetas de 20 Bs, adem�s el ahorro ser� de:  50 Bs y tiene un saldo de 0.
Caso 3:
Un cliente dispone de 50 Bs. y  tiene la intenci�n de comprar  3  tarjetas.
La funci�n le indica que no puede comprar ninguna tarjeta
*/

# include <iostream>
# include <stdlib.h>
using namespace std;
void promocionTIGO(int,int,int&,int&,int&);
int main()
{
    int n,m,pago,ahorro,saldo;
    cout << "Cantidad de tarjetas a comprar:";
    cin >> n;
    cout << "El monto disponible:";
    cin >> m;
    promocionTIGO(n,m,pago,ahorro,saldo); // numt es el numero de tarjetas q puede comprar
    cout << "El monto a pagar es :"<<pago<<endl;
    cout << "El ahorro es:"<<ahorro<<endl;
    cout << "El saldo es:"<<saldo<<endl;
    return 0;
}

void promocionTIGO(int n,int m,int&x,int&a,int&s)
{
    int t,cargocredito,sms;
    t=m/n;
    if (t<20)
        {
            cout<<"No es posible la transaccion para esta promocion, el monto es insuficiente"<<endl;
            exit(0);
        }
    if (t<30)
     {   x=20*n;
         sms=5;
         cargocredito=5;

     }
    else
        if (t<50)
        {    x=30*n;
             sms=10;
             cargocredito=10;

        }
        else
            if (t<100)
            { x=50*n;
            sms=15;
            cargocredito=50;
            }
            else
            {    x=100*n;
                 sms=20;
                 cargocredito=100;

            }
      a=(cargocredito+sms)*n;
      s=m-x;

}


