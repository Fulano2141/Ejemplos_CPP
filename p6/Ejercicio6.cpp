//6.-     Generar la secuencia:
//		4,  6 , 9 , 13 , 19 , 28 , 42, …. para n terminos
#include <iostream>
using namespace std;
int mcd(int, int);
int main(){
	int n,aux=4;
	cout<<"Ingrese un numero: "<<endl;
	cin>>n;
	for(int i=1;i<n+1;i++)
		cout<<mcd(i,aux);
	return 0;
}
int mcd(int a, int aux){
    if(a==1)
		return 4;
    else
    	return (aux/2)+mcd(aux,a);	
}
