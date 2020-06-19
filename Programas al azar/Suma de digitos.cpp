/* 4.-dado un arreglo constante de numeros enteros obtenga un segundo arreglo
que contenga la suma de digitos que tiene cada numero de primero recursivamente */ 
#include<iostream>
int suma(int);
using namespace std;
int main(){
	int n, sum=0, A[5]={212,231,423,234,513},B[5]={0,0,0,0,0};
	for(int i=0;i<5;i++)
		B[i]=suma(A[i]);

	for(int i=0;i<5;i++){
		cout<<"La suma de digitos de: "<<A[i]<<" es "<<B[i]<<endl;		
		}
	
} 
int suma(int n){
	if (n==0)
		return(0);
	else
		return ((n%10) + suma(n/10));
}
