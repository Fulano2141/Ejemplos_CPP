#include<conio.h>
#include<iostream>
#include<iomanip>
using namespace std;
int main(){
	int jona[50],i,izq,der,k,aux,n;
	cout<<"INGRESE Nro DE ELEMENTOS A ORDENAR :";
	cin>>n;
	cout<<"\n";
	for(i=0;i<n;i++){
		cout<<"["<<(i+1)<<"]=";
		cin>>jona[i];
	}
 	izq=1;
 	der=n;
 	k=n;
	do{
		for(i=der;i>=izq;i--){
			if(jona[i-1]>jona[i]){
				aux=jona[i-1];
				jona[i-1]=jona[i];
        		jona[i]=aux;
        		k=i;
        	}
        }
       izq=k+1;
       for(i=izq;i<=der;i++){
       	if(jona[i-1]>jona[i]){
       		aux=jona[i-1];
            jona[i-1]=jona[i];
            jona[i]=aux;
            k=i;
	        }
        }
       der=k-1;
    }while(izq<=der);
   cout<<"\n*****ELEMENTOS ORDENADOS*****\n\n";
   for(i=0;i<n;i++){
	cout<<jona[i]<<endl;
   }
   return 0;
}

