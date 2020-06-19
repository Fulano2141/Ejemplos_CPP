/* 8.- Escriba un programa que verifique si un número es perfecto o no lo es. */
#include <cstdlib>  
#include <iostream>  
using namespace std; 
bool NumPer(int ); 
int main() {  
    int num;   
    cout<<"Ingrese el numero: ";  
    cin>>num;  
	if(NumPer(num))
	cout<<"Es perfecto";
	else
	cout<<"No es perfecto";   
    return 0;  
}  
bool NumPer(int num){  
    int sum=0,i=num-1;  
    while(i>0){  
        if(num%i==0) 
		sum+=i;  
        i--;  
    }  
    if (sum==num)
    return true;
	else
	return false;  
}  
