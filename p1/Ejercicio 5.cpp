// 5.-  Convertir coordenadas polares en rectangulares.
#include <iostream> 
#include <math.h>
void leerco();
void converti();
void mostrar();
using namespace std;
int r,a;
float x,y,ar;
int main ()
{
	leerco();
	converti();
	mostrar();
	return 0;
}
void leerco()
{
	cout<<"Ingrese el radio "<<endl;
	cin>>r;
	cout<<"Ingrese el angulo en grados "<<endl;
	cin>>a;
}
void converti()
{
	ar=a*M_PI/180;
	x=r*cos(ar);
	y=r*sin(ar);
}
void mostrar()
{
	cout<<"Coordenada en X: "<<x<<endl;
	cout<<"Coordenada en Y: "<<y<<endl;
}
