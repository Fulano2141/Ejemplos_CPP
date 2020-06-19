/* 3.- Una empresa efectúa el control de asistencia de sus empleados mediante un lector biométrico, 
el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. 
El empleado tiene una tolerancia de 10 minutos en la entrada, si llega más allá de los 10 minutos 
de tolerancia se penaliza todos los minutos de atraso (es decir si llega a las 8:12 se penalizan 
los 12 minutos). De igual forma no puede salir antes del horario establecido en la salida,  (si lo hace 
se penaliza los minutos faltantes), pero si el empleado entra antes o sale después de sus horarios 
el sistema solo toma en cuenta las 8 horas laborales de trabajo. 
El problema consiste en determinar el tiempo trabajado y los minutos de penalización para el empleado 
en cualquier día laboral.
Resolver este problema para los siguientes casos:
   Empleado   Hora Entrada   Hora Salida     Tiempo Trabajado   Penalización
   	  1		 	 7:55			16:15	         8:20		 	     0
	  2		 	 8:11			16:00      	     7:49			    11
	  3			 8:30			16:20      	     7:50			    30
	  4	  	 	 8:05      		16:10      	     8:05 	  	         0
Se sugiere leer las horas y minutos de entrada y las horas y minutos de salida. */
#include <iostream>
using namespace std;
int biomeent(int&, int);
int biomesal(int&, int);
int main (){
	int hor1,hor2,min1,min2;
	cout<<"Ingrese la hora de entrada"<<endl;
	cin>>hor1;
	cout<<"Ingrese los minutos de entrada"<<endl;
	cin>>min1;
	cout<<"Ingrese la hora de salida"<<endl;
	cin>>hor2;
	cout<<"Ingrese los minutos de salida"<<endl;
	cin>>min2;
	biomeent(hor1, min1);
	biomesal(hor2, min2);
	cout<<"La penalizacion segun su entrada es de: "<<hor1<<endl;
	cout<<"La penalizacion segun su salida es de: "<<hor2<<endl;
}
int biomeent(int& hor1,int min1){
	if(hor1==8)
	{
		if (min1<=10 and min1>=0)
		hor1=0;
		else 
		hor1=min1;
	}	
	if(hor1<=7)
	hor1=0;	
}
int biomesal(int& hor2,int min2){
	int x;
	if(hor2==16)
		hor2=0;
	if (hor2==15)
	{
		x=60-min2;
		hor2=x;
	}
}
