#include<iostream>
#include<conio.h>
#include<iomanip>
void quicksort(double [],int, int);
void escribir(double [],int );
using namespace std;
int main(){
	int i,nro;
 	cout<<"Ingrese la diomension del arreglo"<<endl;
 	cin>>nro;
 	double B[nro];
 	cout<<"Ingrese elementos del arreglo"<<endl;
 	for(i=0;i<nro;i++){
 		cout<<"Elemento "<<i+1<<": ";
      	cin>>B[i];
    }
    cout<<"ARREGLO ORIGINAL"<<endl;
	for(i=0;i<nro;i++){
		cout<<B[i]<<endl;
    }
 	quicksort(B,0,nro-1);
 	escribir(B,nro);
 	return 0;
}
void quicksort(double A[],int primero,int ultimo){
	int central,i,j;
	double pivote;
  	central=(primero+ultimo)/2;
  	pivote=A[central];
  	i=primero;
  	j=ultimo;
  	do{
  		while(A[i]<pivote) i++;
    	while(A[j]>pivote) j--;
    	if(i<=j){
    		double temp;
      		temp=A[i];
      		A[i]=A[j]; /*intercambia A[i] con A[j] */
      		A[j]=temp;
      		i++;
      		j--;
     	}
   	}while(i<=j);
   if(primero<j)
   quicksort(A,primero,j); /*mismo proceso con sublista izquierda*/
   if(i<ultimo)
   quicksort(A,i,ultimo); /*mismo proceso con sublista derecha*/
}
void escribir(double A[], int n){
	int i;
	cout<<endl<<"ARREGLO ASCENDENTE"<<endl;
   	for(i=0;i<n;i++){
   		cout<<A[i]<<endl;
    }
   	cout<<endl<<endl;
}

