// 4.- 	Escribir una función recursiva para determinar la 
// posición del menor elemento contenido  en el vector.
#include <iostream>
using namespace std;
int minimo(int[] ,int, int);
int main(){
	int vec[5]={6,2,0,4,5},min=vec[0],n=5;
	cout<<endl<<"Vector: "<<endl;
	for (int i=0; i<5;i++)
		cout<<vec[i]<<"\t";
	cout<<endl<<"\n\nEl menor valor del vector es: "<<minimo(vec,n,min)<<endl;
	return 0;
}
int minimo(int vec[] ,int n, int min){
    if(n==0)
    	return min;
    else{ 
    	if(vec[n]<min)
			min=vec[n];    
    	return minimo(vec,n-1,min);
    }   
}
