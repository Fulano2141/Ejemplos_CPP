/* 1.- generar 
		1	2	3	4	5	6 .... n */
#include<iostream>
int cadena(int);
using namespace std;
int main(){
	cout<<"Ingrese un numero: ";
	int n;
	cin>>n;	
	for(int i=1;i<=n;i++)
		if(i<n)	
		cout<<cadena(i)<<", ";
		else
		cout<<cadena(i);
}
int cadena(int n){
	if(n==1)
		return n;
	else {
		return cadena(n-1)+1;
		}
}
