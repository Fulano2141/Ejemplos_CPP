// 15.- Leer un número y obtener la suma de sus dígitos
#include<iostream>
#include<cstdlib>
using namespace std;
int sumdig(int);
int main ()
{
	int num;
	cout<<"Ingrese Numero de una o varias cifras "<<endl;
	cin>>num;
	cout<<"La suma de sus digitos es: "<<sumdig(num);
	return 0;
}
int sumdig(int num){
	int r,s;
	s=0;
	while(num>0)
	{
		r=num%10;
		s=s+r;
		num=num/10;
	}
	return s;
}
