// Clasificar nombres por inicial ingresada por teclado
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
void leer();
void leercla();
void escribir();
void eliminar();
int main(){
	escribir();
	cout<<endl;
	leer();
	cout<<endl;
	eliminar();
	cout<<endl;
	leercla();
	return 0;
}
void leer(){
	ifstream in;
	in.open("nombres.txt");  // "d:\\carpeta\\"nombre.txt"
	char nombre[25];
	while  (in>>nombre) //(!in.eof())
		cout<<nombre<<endl;
	in.close();
}
void escribir(){
	ofstream F;
	F.open("nombres.txt",ios::app); //app = append
	char nombre[25];
	int n; 
	cout<<"cuantos datos, desea guardar "<<endl;
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Nombre "<<i+1<<": ";
		cin>>nombre;
		F<<nombre<<endl;
	}
	F.close();
}
void eliminar(){
	ofstream F;
	ifstream G;
	G.open("nombres.txt");
	F.open("clasi.txt");
	char nombre[25],ini[25];
	cout<<"Ingrese la inicial a calificar";
	cin>>ini;
	while  (G>>nombre){
		if(ini[0]==nombre[0])
			F<<nombre<<endl;
	}
	G.close();
	F.close();
}
void leercla(){
	ifstream in;
	in.open("clasi.txt");  // "d:\\carpeta\\"nombre.txt"
	char nombre[25];
	while  (in>>nombre) //(!in.eof())
		cout<<nombre<<endl;
	in.close();
}
