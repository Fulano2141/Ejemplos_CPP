/* 1.-  Leer un numero entero que represente un valor en
segundos y convierta en: horas, minutos y segundos
*/
#include <iostream>
void leer();
void conversion();
void imprimir();
using namespace std;
int n,h,m,s;
int main(){
	leer();
	conversion();
	imprimir();
	return 0;
}
void leer()
{
	cout<<"Ingrese el valor en segundos"<<endl;
    cin>>n;
}
void conversion ()
{
	h=(n/3600);
    m=(n-h*3600)/60;
    s=n-(h*3600+m*60);
}
void imprimir ()
{
	cout<<h<<" Horas "<<m<<" Minutos "<<s<<" Segundos ";
}
