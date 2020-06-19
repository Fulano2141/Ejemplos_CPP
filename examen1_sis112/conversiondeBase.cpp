/* 1.-
 Escribir un programa que mediante una función permita convertir un numero en base n a base 10. Emplear el teorema fundamental de la numeración:

	 	Ej: Convertir   1010 de base2   10

				1 * 23 + 0 * 22  + 1 * 21 + 0 * 20	= 10
*/
# include <iostream>
# include <cmath>
using namespace std;
int  convertir(int,int);
main()
{
    int num,base;
    cout <<"Ingrese el numero:";
    cin >> num;
    cout <<"Ingrese la base:";
    cin >> base;
    int x=convertir(num,base);
    cout << "Numero convertido:"<<convertir(num,base)<<endl;
}

int convertir(int n,int b)
{  int sum=0,c=0;
   while(n>0)
   {
       sum=sum+n%10*pow(b,c);
       n=n/10;
       c++;
   }
   return sum;
   }


