/* obtener el volumen de una espera*/
#include <iostream>
#include <math.h>
#include <cstdio>
using namespace std;
class Esfera {
	double radio;
	public:
		Esfera(double);
		double volumen();
};
Esfera::Esfera(double radio){
	this->radio=radio;
};
// Operador de ambito
double Esfera::volumen(){
	double x=radio*radio*radio*M_PI*(4.0/3.0);
	return x;	
};
int main(){
	double ra;
	cout<<"Ingrese el radio de la esfera: ";
	cin>>ra;
	Esfera p(ra);
	double y=p.volumen();
	 printf("El volumen de la esfera es: %.2f ", y);
}
