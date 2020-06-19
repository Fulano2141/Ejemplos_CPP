/* obtener la division de dos numeros enteros con recursividad */
#include<iostream>
int divic(int, int);
using namespace std;
int main(){
	int dividendo,divisor;
	cout<<"Ingrese el dividendo: ";
	cin>>dividendo; 
	cout<<"Ingrese el divisor: ";
	cin>>divisor;
	cout<<"------"<<endl<<"El resultado es: ";
	cout<<divic(dividendo,divisor)<<endl;		
} 
int divic(int dividendo, int divisor){
	if (divisor>dividendo)
		return(0);
	else
		return 1+divic(dividendo-divisor,divisor);
}
