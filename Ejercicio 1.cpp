/* Obtener el cociente y el residuo a partir de 2 numeros enteros. */
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
	int x=a,aux=b;
	a=x/aux;
	b=(x%aux);
}
