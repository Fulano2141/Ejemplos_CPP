// 3.- 	Mediante funciones recursivas generar dos vectores A y B con números aleatorios, 
// luego multiplicar los elementos correspondientes de los dos vectores y almacenar en un 
// tercer vector C. Mostrar en pantalla los tres vectores.
#include<iostream>
#include<stdlib.h>
#include<time.h>
using namespace std;
int multi(int , int);
int main(){
	srand(time(NULL));
	int A[6],B[6],C[6],n=6,a,b;
	for(int i=0;i<n;i++){
		A[i]=rand()%10;
		B[i]=rand()%10;
	}cout<<"Vector A: "<<endl;
	for(int i=0;i<n;i++)
		cout<<A[i]<<"\t";
	cout<<endl<<"Vector B: "<<endl;
	for(int i=0;i<n;i++)
		cout<<B[i]<<"\t";
	cout<<endl<<"Vector resultante C: "<<endl;
	for(int i=0;i<n;i++){
		a=A[i];b=B[i];
		C[i]=multi(a,b);}
	for(int i=0;i<n;i++)
		cout<<C[i]<<"\t";
}
int multi(int a, int b){
	if(b==0 or a==0)
		return 0;
	else
		return multi(b-1,a)+a;
}
