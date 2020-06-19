/* 4.- Una empresa efectúa el control de asistencia de sus empleados mediante un lector biométrico, 
el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El empleado tiene una 
tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos de tolerancia se penaliza 
todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos). De igual forma 
no puede salir antes del horario establecido en la salida,  (si lo hace se penaliza los minutos faltantes), 
pero si el empleado entra antes o sale después de sus horarios el sistema solo toma en cuenta las 8 horas laborales de trabajo. 
El problema consiste en determinar los minutos de penalización para el empleado en cualquier día laboral.
 Código Empleado      Hora Entrada         Hora Salida      Penalización          Fecha
	101045				7:55					16:15	               0		12/01/2011	
	223032				8:11					16:00	              11		12/01/2011
	334009				8:30					16:20	              30		12/01/2011
	443283	           	8:05                	16:10                  0		12/01/2011  */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
void calcular();
int biomeent(int, int);
int biomesal(int, int);
void Histo();
struct Datosd{
	int Cod;
	int	Hore;
	int Hors;
	int Mine;
	int Mins;
	int Pena;
	char Fecha[10];
};
using namespace std;
int main(){
	int opc=10;
     do{
     system("cls");
     cout<<"=================================="<<endl;
     cout<<"1. Calcular Penalizacion"<<endl;
     cout<<"2. Historial "<<endl;
     cout<<"0. Salir"<<endl;
     cout<<endl<<"Ingrese una opcion: ";cin>>opc;
     switch (opc){
            case 1:calcular();break;
            case 2:Histo();break;
            case 0:exit(0);
     }
    }while(opc!=0);
    return 0;
}
void calcular(){
	system("cls");
	ofstream out;
	Datosd e;
	out.open("Biometrico.bin",ios::app|ios::binary);
	cout<<"Codigo: ";
	cin>>e.Cod;
	cout<<"Ingrese la hora de entrada: ";
	cin>>e.Hore;
	cout<<"Ingrese los minutos de entrada: ";
	cin>>e.Mine;
	cout<<"Ingrese la hora de salida: ";
	cin>>e.Hors;
	cout<<"Ingrese los minutos de salida: ";
	cin>>e.Mins;
	e.Pena=biomeent(e.Hore,e.Mine)+biomesal(e.Hors,e.Mins);
	cout<<"Ingrese la fecha (DD/MM/AAAA): ";
	cin>>e.Fecha;
	cout<<"La penalizacion segun su entrada es de: "<<biomeent(e.Hore,e.Mine)<<endl;
	cout<<"La penalizacion segun su salida es de: "<<biomesal(e.Hors,e.Mins)<<endl;
	out.write((char*)&e,sizeof(e));
	system("pause");
	cin.clear();
	out.close();
}
int biomeent(int hor1,int min1){
	if(hor1==8)
	{
		if (min1<=10 and min1>=0)
		return 0;
		else 
		return min1;
	}	
	if(hor1<=7)
	return 0;	
}
int biomesal(int hor2,int min2){
	int x;
	if(hor2==16)
	return 0;
	if (hor2==15)
	{
		x=60-min2;
		return x;
	}
}
void Histo(){
	ifstream in;
	Datosd x;
	int i=1,z=13;
	in.open("Biometrico.bin",ios::binary);
	cout<<"    "<<"Codigo"<<setw(z)<<"Entrada"<<setw(z)<<"Salida"<<setw(z)<<"Penalizacion"<<setw(z)<<"Fecha"<<endl;
	while(in.read((char*)&x,sizeof(x))){
		cout<<i<<".- "<<x.Cod<<setw(z)<<x.Hore<<":"<<x.Mine<<setw(z);
		cout<<x.Hors<<":"<<x.Mins<<setw(z)<<x.Pena<<setw(z)<<x.Fecha<<endl;  
	}
	in.close();
	system("pause");
}

