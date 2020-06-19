/*examen*/
#include <iostream>
#include <stdlib.h>
#include <time.h>
#include <iomanip>
using namespace std;
void crear(int [][5],int);
void imprimir(int [][5],int);
int main(){
	int n;
	cin>>n;
	int m[][5]={0};
	cout<<"introduzca el numero de estudiantes";
  	crear(int m[][5],int n);
   	imprimir(int m[][5],int n);
	return 0;
}
void crear(int m[][5],int n){
	for (int f=0;f<n;f++){
	 	for(int c=0;c<5;c++){
	 		m[f][c]=rand()%100+0;
		}
	}

}
void imprimir(int m[][5],int n){
	for (int f=0;f<n;f++){
		cout<<endl;
		for (int c=0;c<5;c++){
        	cout<<m[f][c]<<",";
    	}
    }
}

