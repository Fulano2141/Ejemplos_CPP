/* 1.-  Escribir una función que permita almacenar en un archivo  de texto, números al azar en el  rango de 100 a 999,  
mediante una segunda función determine el porcentaje de números pares e impares que existe en dicho archivo, finalmente 
una tercera función debe permitir copiar a un segundo archivo todos los números capicúa, mostrar este último archivo. */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
#include<conio.h>
void crear();
void lectura1();
int pareim ();
void lectura2();
bool capicua(char);
using namespace std;
int main(){
	cout<<"========================="<<endl;
    crear();
    cout<<"========================="<<endl;
    lectura1();
    cout<<"========================="<<endl;
    cout<<"Porcentaje de impares"<<pareim()<<"%"<<endl;
    cout<<"Porcentaje de pares"<<100-pareim()<<"%"<<endl;
	cout<<"========================="<<endl;
	lectura2();
	cout<<"========================="<<endl;
}
void crear(){
	ofstream out;
	out.open("Azar.bin",ios::out|ios::binary|ios::app);
	int n;
	cout<<"Cuantos numeros de loteria agregara al archivo"<<endl;
	cin>>n;
	int LI=100,LS=999;
	for(int i=0;i<n;i++){
        int x=rand()%(LS-LI+1)+LI;
		out.write((char*)&x,sizeof(x));
	}
	out.close();
}
void lectura1(){
	fstream in;
	in.open("Azar.bin",ios::in|ios::binary);
	int x;
	cout<<"\nReporte"<<endl;
	while(in.read((char*)&x,sizeof(x))){
        cout << x << endl;
	}
	in.close();
	system("pause");
}
int pareim(){
	fstream in;
	char x;
	int i,par=0,c;
	in.open("Azar.bin",ios::out|ios::binary|ios::app);
	while(in.read((char*)&x,sizeof(x))){
		if(x%2==0)
        	par++;
		c++;
	}
	c=(par/c)*100;
	return c;
	
}
void lectura2(){
	fstream F;
	fstream G;
	G.open("Azar.bin",ios::in|ios::binary);
	F.open("Capicua.bin",ios::in|ios::binary|ios::app);
	char nombre[25],ini[25],i;
	int y;
	while(G.read((char*)&y,sizeof(y))){
		if(capicua(y)==true)
			F<<y<<endl;
	}
	int x;
	cout<<"Reporte"<<endl;
	while(F.read((char*)&x,sizeof(x))){
        cout << x << endl;
	}
	G.close();
	F.close();
}
bool capicua(char name[3]){
	int t,d=0;
	t=strlen(name);
	for (int i=t-1;i>=0;i--){
		if (name[i]==name[t-i-1])
			d++;
	}
	if(d=t)
		return true;
	else 
		return false;
}
