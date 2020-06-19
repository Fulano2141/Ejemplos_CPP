/* 3.- Hallar el cociente y el residuo de dos números enteros empleando "restas sucesivas" */
# include <iostream>
using namespace std;
void leer();
void divisor();
void salida();
int num, div,c=0;
int main(){
	leer();
	divisor();
	salida();
	return 0;
}
void leer(){
	cout<<"Ingrese el dividendo "<<endl;
	cin>>num;
	cout<<"Ingrese el divisor "<<endl;
	cin>>div;
}
void divisor(){
	int aux=num;
	for (num;aux>=div;aux=aux-div)
	{c++;}
	num=num-c*div;
}
void salida(){
	cout<<"El cociente es "<<c<<" el residuo es "<<num<<endl;
}
