// Convertir bolivianos en dólares y euros y Libras Esterlinas
#include <iostream>
void converdo(float&);
void convereu(float&);
void converlb(float&);
void salido(float);
void salieu(float);
void salilb(float);
using namespace std;
int main ()
{
	int a;
	float res;
	cout<<"Conversion de Moneda Boliviana a: "<<endl;
	cout<<"1.- Dolares "<<endl;
	cout<<"2.- Euros "<<endl;
	cout<<"3.- Libras Esterlinas "<<endl;
	cin>>a;
	cout<<"Ingrese el valor en Bolivianos a convertir "<<endl;
	cin>>res;
	switch (a)
	{
		case 1 :converdo(res);salido(res);break;
		case 2 :convereu(res);salieu(res);break;
		case 3 :converlb(res);salilb(res);break;
		default:cout<<"Numero invalido "<<endl;
	}
	return 0;
}
void converdo(float& res){
	res=res/6.91;
}
void convereu(float& res){
	res=res/8.494;
}
void converlb(float& res){
	res=res/9.61957;
}
void salido(float res){
	cout<<"Son: "<<res<<" Dolares"<<endl;
}
void salieu(float res){
	cout<<"Son: "<<res<<" Euros"<<endl;
}
void salilb(float res){
	cout<<"Son: "<<res<<" Libras esterlinas"<<endl;
}
