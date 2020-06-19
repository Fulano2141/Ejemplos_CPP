/* 5.       Diseñar una función recursiva para determinar el Máximo Común Divisor 
		(mcd) de dos números enteros positivos m, n usando la siguiente indicación:
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
	
