/* 9.- En base al salario b�sico y la antig�edad de un empleado (en a�os) y 
determinar mediante un algoritmo el total ganado. El bono de antig�edad se 
calcula en base a las siguientes condiciones:
	Si la antig�edad < 5 a�os:  		          10 % del Salario b�sico
	Si la antig�edad >=5 pero es menor a 10:        15 % del Salario b�sico
	Si la antig�edad >=10 pero es menor a 15:      25 % del Salario b�sico
	Si la antig�edad >= 15:	  			50 % del Salario b�sico
El total ganado es la suma del salario b�sico m�s el bono de antig�edad. */  
#include <iostream>  
using namespace std; 
double bono(int,int);
int main() {  
    int ant,sal;   
    cout<<"Ingrese la antiguedad: "<<endl;  
    cin>>ant;  
    cout<<"Ingrese el salario basico: "<<endl;  
    cin>>sal;  
	cout<<"Su bono de antiguedad es "<<bono(ant,sal)<<endl;
	cout<<"Su nuevo salario es "<<sal+bono(ant,sal)<<endl; 
	return 0;
}  
double bono(int ant, int sal){
	double x;
	if (ant<5){
		x=(sal*0.10);
		return x;
	}
	else
	{
		if (ant>=5 and ant<10){
			x=(sal*0.15);
			return x;
		}
		else
		{
			if(ant>=10 and ant<15){
				x=(sal*0.25);
				return x;
			}
			else
			{
				x=(sal*0.50);
				return x;	
			}
		}		
	}
}
