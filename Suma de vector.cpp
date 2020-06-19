#include <iostream>
using namespace std;
int sumvec(int[5] ,int);
int main(){
	int vec[5]={1,2,3,4,5}, n=4;
	cout<<"Ingrese numero:"<<endl;
	for (int i=0; i<n+1;i++)
		cout<<vec[i]<<" ";
	cout<<endl<<"La suma del vector es: "<<sumvec(vec,n)<<endl;
	return 0;
}
int sumvec(int vec[5], int n){
	if (n==0)
		return vec[n];
	else{
		n--;
		return vec[n+1]+sumvec(vec,n);
	}
}
