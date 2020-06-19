/* emplando constructores determinar el volumen de una caja*/
#include <iostream>
using namespace std;
class Caja {
	double lon,anch,altu;
	public:
		Caja(double,double,double);
		double volumen();
};
Caja::Caja(double lon,double anch,double altu){
	this->altu=altu;
	this->anch=anch;
	this->lon=lon;
};
// Operador de ambito
double Caja::volumen(){
	return lon*anch*altu;	
};
int main(){
	double a,l,an;
	cin>>a;
	cin>>l;
	cin>>an;
	Caja p(a,l,an);
	cout<<"Volumen de la Caja: "<<p.volumen()<<endl;
	/*Caja p(5,4,10), m(10,6,20),g(20,10,30);
	cout<<"Caja pequena: "<<p.volumen()<<endl;
	cout<<"Caja mediana: "<<m.volumen()<<endl;
	cout<<"Caja grande:  "<<g.volumen()<<endl;*/
}
