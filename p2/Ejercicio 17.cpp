/* 17.- Una empresa efectua el control de asistencia de sus empleados mediante un lector biometrico, 
el horario en la entrada es a las 8:00 a.m y la salida es a las 16:00 p.m. El empleado tiene una 
tolerancia de 10 minutos en la entrada, si llega mas alla de los 10 minutos de tolerancia se penaliza 
todos los minutos de atraso (es decir si llega a las 8:12 se penalizan los 12 minutos). De igual 
forma no puede salir antes del horario establecido en la salida,  (si lo hace se penaliza los 
minutos faltantes), pero si el empleado entra antes o sale despues de sus horarios el sistema solo 
toma en cuenta las 8 horas laborales de trabajo. El problema consiste en determinar los minutos de 
penalizacion para el empleado en cualquier dia laboral, verifique el funcionamiento con los siguientes 
datos de prueba:
       Codigo Empleado      Hora Entrada         Hora Salida      Penalizacion        Fecha
			101045				7:55				16:15	           0		   	12/01/2011	
			223032				8:11				16:00	          11	  		12/01/2011
			334009				8:30				16:20	          30			12/01/2011
			443283	           	8:05                16:10              0			12/01/2011 */
#include <iostream>
using namespace std;
int biomeent(int, int);
int biomesal(int, int);
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
	cout<<"La penalizacion segun su entrada es de: "<<biomeent(hor1, min1)<<endl;
	cout<<"La penalizacion segun su salida es de: "<<biomesal(hor2,min2)<<endl;
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
