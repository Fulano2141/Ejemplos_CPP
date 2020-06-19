/* emplando constructores determinar el volumen de una caja*/
#include <iostream>
using namespace std;
class Caja {
	double lon,anch,altu;
	public:
		Caja(double,double,double);
		double volumen();
};
Caja::Caja(double dim1,double dim2,double dim3){
	lon=dim1;
	anch=dim2;
	altu=dim3;
};
// Operador de ambito
double Caja::volumen(){
	return lon*anch*altu;	
};
int main(){
	Caja peque(5,4,10), mediana(10,6,20),grande(20,10,30);
	cout<<"Caja pequena: "<<peque.volumen()<<endl;
	cout<<"Caja mediana: "<<mediana.volumen()<<endl;
	cout<<"Caja grande:  "<<grande.volumen()<<endl;
}
