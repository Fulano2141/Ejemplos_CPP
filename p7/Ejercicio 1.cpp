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
#include<ctime>
void crear();
void lectura1();
int pareim ();
void capicuador();
void lectura2();
int capicua(int );
using namespace std;
int main(){
	srand (time(NULL));
	cout<<"========================="<<endl;
    crear();
    cout<<"========================="<<endl;
    lectura1();
    cout<<"========================="<<endl;
    cout<<"Porcentaje de impares "<<pareim()<<"%"<<endl;
    cout<<"Porcentaje de pares "<<100-pareim()<<"%"<<endl;
	capicuador();
	cout<<"========================="<<endl;
	lectura2();
	cout<<"========================="<<endl;
}
void crear(){
	fstream out;
	out.open("Azar.txt",ios::app);
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
	in.open("Azar.txt",ios::in);
	int x;
	cout<<"Reporte"<<endl;
	while(in.read((char*)&x,sizeof(x))){
        cout << x << endl;
	}
	in.close();
	system("pause");
}
int pareim(){
	fstream in;
	int x;
	int i,par=0;
	float c=0;
	in.open("Azar.txt",ios::in);
	while(in.read((char*)&x,sizeof(x))){
		if(x%2==0)
        	par++;
		c++;
	}
	c=(par/c)*100;
	in.close();
	return c;
	
}
void capicuador(){
	fstream G;
	G.open("Azar.txt",ios::in);
	fstream F;
	F.open("Capicua.txt",ios::out);
	char nombre[25],ini[25],i;
	int x,y;
	while  (G.read((char*)&x,sizeof(x))){
		if(capicua(x)!=0)
			F<<x<<endl;
	}
	G.close();
	F.close();
}
void lectura2(){
	ifstream in;
	in.open("Capicua.txt");
	char x;
	cout<<"Reporte"<<endl;
	while(in.read((char*)&x,sizeof(x))){
        cout<<x;
	}
	in.close();
	system("pause");
}
int capicua(int num){
	int a,b,c;
	a=num;c=0;b=0;
	while(a!=0){
		b=a%10;
		a=a/10;
		c=c*10+b;
	}
	if(c==num)
		return c;
	else 
		return 0;
}
