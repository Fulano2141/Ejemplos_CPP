// Buscar un nombre y modificarlo
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
void leer();
void escribir();
void eliminar();
int main(){
	escribir();
	leer();
	eliminar();
	cout<<endl;
	leer();
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
	F.open("copia.txt");
	char nombre[25],nom[25];
	cout<<"Ingrese nombre a cambiar ";
	cin>>nom;
	while  (G>>nombre){
		if(strcmp(nom,nombre)!=0)
			F<<nombre<<endl;
		else{
			cin>>nombre;
		F<<nombre<<endl;}
	}
	G.close();
	F.close();
	system("del nombres.txt"); //delete
	system("ren copia.txt nombres.txt");  //rename 
}
