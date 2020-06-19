// 7.- 	Dado un arreglo de valores constantes con valores únicos,
// escriba una función recursiva que halle la posición de un valor buscado.
#include <iostream>
using namespace std;
int busqueda(int[] ,int, int);
int main(){
	int vec[9]={1,22,20,24,15,3,23,11,61},bus,n=8;
	cout<<endl<<"Vector: "<<endl;
	for (int i=0; i<9;i++)
		cout<<vec[i]<<"\t";
	cout<<endl<<"Ingrese el valor a buscar:"<<endl;
	cin>>bus;
	cout<<"La posicion es: "<<1+busqueda(vec,n,bus)<<endl;
	return 0;
}
int busqueda(int vec[] ,int n, int bus){
    if(n==0)
    	return bus;
    else{ 
    	if(vec[n]==bus)
			bus=n;    
    	return busqueda(vec,n-1,bus);
    }   
}
