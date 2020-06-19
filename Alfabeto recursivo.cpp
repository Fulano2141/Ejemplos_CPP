#include<iostream>
#include<stdlib.h>
using namespace std;
void A(int);
void B(int);
int main(){
	A('z'); // Z si se requiere en mayusculas
	cout<<endl;
	return 0;
}
void A (int c){
	if(c>'a') // A si se requiere en mayusculas
		B(c);
	putchar(c);
	if(c<'z')
		cout<<", ";
	else
		cout<<".";
}
void B(int c){
	A(--c);
}
