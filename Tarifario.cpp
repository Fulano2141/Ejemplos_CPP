/* una empresa paga a sus obreros en funcion a las horas trabajadas
por cada uno de ellos y una tarifa por hora trabajda
Se debe obtener el pago total considerando ademas que si existen horas 
extras se paga el +50% de la tarifa normal
agregar finalmente el descuento del 5% para impuestos al obrero que tiene
total ganada >3000bs
Mostrar :
			CODIGO;NOMBRE;PAGOTOTA;DESCUENTOS;PAGONETO;
			PAGONETO =PAGOTOTAL-DESCUENTO
			*/ 
#include <bits/stdc++.h>
using namespace std;
double pagoto,desc,pagone;
int cod;
class Conver {
	int hor;
	double tarifa;
	public:
		Conver(int, double);
		void convers();
};
Conver::Conver(int hor, double tarifa){
	this->hor=hor;
	this->tarifa=tarifa;
};
void Conver::convers(){
	cod=10000+rand() % 99999; 
	if(hor>40)
		pagoto=40.0*tarifa+(hor-40.0)*(tarifa*1.5);
	else
		pagoto=hor*tarifa;
	if(pagoto>3000)
		desc=0.05*pagoto;
	else
		desc=0;
	pagone=pagoto-desc;
};
int main(){
	int hor;
	double tarifa;
	string nom;
	cin>>nom;
	cout<<"Ingrese las horas trabajadas: ";
	cin>>hor;
	cout<<"Ingrese la tarifa: ";
	cin>>tarifa;
	Conver p(hor,tarifa);
	p.convers();
	cout<<"Codigo: "<<cod<<"; Nombre: "<<nom<<"; Pago total: "<<pagoto<<"; Descuentos: "<<desc<<"; Pago neto: "<<pagone<<endl;
}
