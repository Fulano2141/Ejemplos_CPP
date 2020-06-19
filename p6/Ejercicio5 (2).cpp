/* 5.       Dise�ar una funci�n recursiva para determinar el M�ximo Com�n Divisor 
		(mcd) de dos n�meros enteros positivos m, n usando la siguiente indicaci�n:
			     |   n   si n<=m y mod n=0
//		mcd(m,n)=|	 mcd(n,m)     si m<n
				 |	 mcd(n,m mod n)  en otro caso  */
#include <iostream>
using namespace std;
int mcd(int, int);
int main(){
	int a,b;
	cout<<"Ingrese dos numeros: "<<endl;
	cin>>a;cin>>b;
	cout<<"\nEl maximo comun divisor es: "<<mcd(a,b)<<endl;
	return 0;
}
int mcd(int a, int b){
    if(b==0)
		return a;
    else
    	return mcd(b,a%b);	
}
	
