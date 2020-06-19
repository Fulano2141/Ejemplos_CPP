// 14.- Leer dos números enteros y con una función determinar si son o no son amigos 
#include <iostream>
using namespace std;
int suma(int, int);
int main(){
    int n1,n2;
    int sum1=1,sum2=1;
    cout<<"Ingrese el primer numero"<<endl;
    cin>>n1;
    cout<<"Ingrese el segundo numero"<<endl;
    cin>>n2;
    sum1=suma(n1,sum1);
    sum2=suma(n2,sum2);
    if((sum1==n2) and (sum2==n1))
	{
        cout<<"Los numeros ingresados son numeros amigos";
    }
	else
	{
        cout<<"Los numeros ingresados no son numeros amigos";
    }
   return 0;
}
int suma(int n,int s){
    for(int i=2;i<n;i++)
	{
		if(n%i==0)
		s=s+i;
    }
    return s;
}
