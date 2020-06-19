/* 1.	Elabore un programa que lea una matriz de orden n x n y la cambie la fila 1 por la fina n.
		Por ejemplo, si la matriz que da el usuario es:

			4	7	1	3	5
			2	0	6	9	7
			3	1	2	6	4

		Entonces el programa debe escribir la matriz :

			3	1	2	6	4
			2	0	6	9	7
			4	7	1	3	5  */   
#include<iostream>
#include<stdlib.h>
#include<time.h>
#include<iomanip>
using namespace std;
int main(){
	srand (time(NULL));
	int n;
	cout<<"Ingrese el tamano de la matriz "<<endl;
	cin>>n;
	int CAD[n][n];
	for (int i=0;i<n;i++){
		for (int j=0;j<n;j++)
        CAD[i][j]=rand()%50+1;
	}
	for (int i=0;i<n;i++){
     	cout<<endl;
     	for (int j=0;j<n;j++){
        cout<<setw(10)<<CAD[i][j]<<setw(10);
    	}
     }
     for (int i=0;i<n;i++){
     	swap(CAD[0][i],CAD[n-1][i]);
	 }
	 cout<<endl;
	 for (int i=0; i<n;i++){
	 	cout<<endl;
	 	for(int j=0;j<n;j++){
	 		cout<<setw(10)<<CAD[i][j]<<setw(10);
		 }
	 }
}
