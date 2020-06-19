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
    for(i=1;i<cn;i++){
    	a=n[i];
        for (j=i;j>0 and n[j-1]>a;j--){
            n[j]=n[j-1];
        }
        n[j]=a;
    }
    for(i=0;i<cn;i++){
        cout<<n[i]<<endl;
    }
	return 0;
}
