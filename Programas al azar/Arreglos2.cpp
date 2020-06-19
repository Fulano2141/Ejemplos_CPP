/*  3.- Hallar la sumatoria de 
		5	+	10	+	15	+	20	+	25.....n */

#include<iostream>
int suma(int);
using namespace std;
int main(){
	cout<<"Ingrese un numero: ";
	int n, sum=0;
	cin>>n;
	cout<<endl;
	for(int i=1;i<=n;i++){
		cout<<suma(i)<<endl;
		sum=sum+suma(i);}
	cout<<"---"<<endl;
	cout<<sum;
} 
int suma(int n){
	if(n==1)
		return 5;	
	else{
		return	suma(n-1)+5;}
}
