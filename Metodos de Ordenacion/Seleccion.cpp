#include<iostream>
using namespace std;
int main(){
    int i,j,k,cn,a;
    cout<<"Cantidad de numeros que desea Ingresar: ";
	cin>>cn;
	int n[cn];
    for(i=0;i<cn;i++){
        cout<<"Ingrese  numero "<<i+1<<" : ";
        cin>>n[i];
    }
    for(i=0;i<cn;i++){
    	int min = i;
    	for (int j = i + 1; j <cn; j++){
    		if (n[j] < n[min]){
    			min = j;
				}
               }
    	if (i != min){
    		int aux= n[i];
            n[i] = n[min];
            n[min] = aux;
               }
       }
    for(i=0;i<cn;i++){
        cout<<n[i]<<endl;
    }
	return 0;
}
