/* 3.- Generar una matriz con números al azar entre 1 y 9999, y determinar:
	-	La suma de la última columna
	-	El producto total de la última fila
	-	Obtener el mayor valor y su posicion
	-	Obtener la desviación estándar de todos los elementos de la matriz
 */
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
#include<math.h>
using namespace std; 
void sumacolumna(int [5][5]);
void productocolumna(int[5][5]);
void posimayor(int [5][5]);
void desviacion(int [5][5]); 
int main(){
	srand (time(NULL));
	int MAT[5][5];
	char Num[6]={' ','1','2','3','4','5'};
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++)
        MAT[i][j]=rand()%9999+1;
	}
	cout<<"\t------------- La Matriz 5x5 es -------------"<<endl;
		for (int i=0;i<6;i++){
		cout<<setw(10)<<Num[i]<<setw(10);
	} cout<<endl;
	for (int i=0; i<5;i++){
		cout<<Num[i+1];
	 	for(int j=0;j<5;j++){
	 		cout<<setw(10)<<MAT[i][j]<<setw(10);
		 }cout<<endl;
	 }
	cout<<endl<<"\t--------------------------------------------"<<endl;
	sumacolumna(MAT);
	cout<<endl<<"\t--------------------------------------------"<<endl;
	productocolumna(MAT);
	cout<<endl<<"\t--------------------------------------------"<<endl;
	posimayor(MAT);
	cout<<endl<<"\t--------------------------------------------"<<endl;
	desviacion(MAT);
	return 0;
}
void sumacolumna(int MAT[5][5]){
	int c=0;
	for (int i=0; i<5;i++){
	 	c+=MAT[i][4];
	 }
	cout<<"\tLa suma de la ultima columna es: "<<c<<endl;
}
void productocolumna(int MAT[5][5]){
	int e=1;
	for (int i=0;i<5;i++){
	 	e*=MAT[4][i];
	}
	cout<<"\tEl producto de la ultima fila es: "<<e<<endl;
}
void posimayor(int MAT[5][5]){
	int mayor=0,a,b;
	for (int i=0;i<5;i++){
		for (int j=0;j<5;j++)
		if(MAT[i][j]>mayor){
			mayor=MAT[i][j];
			a=i;b=j;
		}
	}
	cout<<"\tEl mayor numero de la matriz es: "<<MAT[a][b]<<endl;
	cout<<"\tEn posicion "<<a+1<<","<<b+1<<endl;
}
void desviacion(int MAT[5][5]){
	float c=0, med=0, des=0;
	for (int i=0; i<5;i++){
		for(int j=0;j<5;j++){
	 	c+=MAT[i][j];}
	}med=c/25; c=0;
	for (int i=0; i<5;i++){
		for(int j=0;j<5;j++){
			c+=pow((MAT[i][j]-med),2);
		}
	}des=sqrt(c/24);
	cout<<"\tLa desviacion estandar es: "<<des<<endl;
}
