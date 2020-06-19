// Archivo de edades y determinar el numero de personas por encima del promedio
#include <fstream>
#include <iostream>
#include <string.h>
using namespace std;
void escribir();
void leer();
void promedio();
int main(){
	cout<<"============================="<<endl;
	escribir();
	cout<<"---------------"<<endl;
	leer();
	cout<<"---------------"<<endl;
	promedio();
	cout<<"============================="<<endl;
	return 0;
}
void leer(){
	ifstream in;
	in.open("edades.txt");  // "d:\\carpeta\\"nombre.txt"
	char nombre[25];
	while  (in>>nombre) //(!in.eof())
		cout<<nombre<<endl;
	in.close();
}
void escribir(){
	ofstream F;
	F.open("edades.txt",ios::app); //app = append
	int edad;
	int n; 
	cout<<"cuantos datos, desea guardar "<<endl;
	cin>>n;
	for (int i=0;i<n;i++){
		cout<<"Edad "<<i+1<<": ";
		cin>>edad;
		F<<edad<<endl;
	}
	F.close();
}
void promedio(){
	ifstream G,F;
	G.open("edades.txt");
	F.open("edades.txt");
	int edad,prome=0,c=0;
	while(G>>edad){
		c++;
		prome=prome+edad;
	}
	prome=prome/c;
	c=0;
	cout<<"Promedio = "<<prome<<endl;
	while(F>>edad){
		if(edad>=prome)
			c++;
	}
	cout<<"Hay "<<c<<" personas por encima del promedio"<<endl;
	G.close();
	F.close();
}
