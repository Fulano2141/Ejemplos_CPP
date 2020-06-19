#include<iostream>
#include<conio.h>
void LeerArreglo(int Numero, int Arreglo[]);
void EscribeArreglo(int Numero, int Arreglo[]);
void Shell(int Numero, int Arreglo[]);
using namespace std;
int main(){
	int Num;
	cout<<"Ingrese Numero Elementos: ";
	cin>>Num;
	int Arreglo[Num];
	LeerArreglo(Num,Arreglo);
	Shell(Num,Arreglo);
	EscribeArreglo(Num,Arreglo);
	return 0;
}
void LeerArreglo(int Numero, int Arreglo[]){
	for(int i=1;i<=Numero;i++){
		cout<<"Arreglo["<<i<<"]=";
		cin>>Arreglo[i];
	}
}
void EscribeArreglo(int Numero, int Arreglo[]){
	for(int i=1;i<=Numero;i++){
		cout<<Arreglo[i]<<endl;
	}
}
void Shell(int Numero, int Arreglo[]){
	int i,j,k,incremento,aux;
	incremento=Numero/2;
	while(incremento>0){
		for(i=incremento+1;i<=Numero;i++){
			j=i-incremento;
			while(j>0){
				if(Arreglo[j]>=Arreglo[j+incremento]){
				  aux = Arreglo[j];
				  Arreglo[j] = Arreglo[j+incremento];
				  Arreglo[j+incremento] = aux;
				}
				else
				j=0;
				j=j-incremento;
			}
		}
	incremento=incremento/2;
	}
}

