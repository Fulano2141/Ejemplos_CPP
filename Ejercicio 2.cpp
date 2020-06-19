/* Resolver el ejercicio 1 con restas sucesivas */
# include <iostream>
using namespace std;
void division(int&,int&);
int main(){
	int a;
	int b;
	cout<<"Ingrese 2 numeros enteros "<<endl;
	cin>>a>>b;
	division(a,b);
	cout<<"El cociente es: "<<a<<" El residuo es: "<<b;
}
void division(int& a,int& b){
	int x=a,i;
	for (i=0;x>=b;i++)
	{
		x=x-b;
	} a=i;
	b=x;
	
	
}
