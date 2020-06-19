#include <iostream>
using namespace std;
int invertirnumero(int ,int);
int main(){
	int numero, b=0;
	cout<<"Ingrese numero:"<<endl;
	cin>>numero;
	cout<<"el numero invertido es:"<<endl;
	invertirnumero(numero,b);
}
int invertirnumero( int a, int b=0){
	if(a==0)
		return 0;
	else{
		b=a%10;
		a=a/10;
		cout<<b;
		return invertirnumero(a,b);
	}
}
