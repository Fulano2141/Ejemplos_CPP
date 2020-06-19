#include<string.h>
#include<iostream>
#include<conio.h>
#include<stdio.h>
using namespace std;
int main (){
	char name[20];
	cout<<"Ingrese el nombre"<<endl;
	gets(name);
	int t=strlen(name),d=0;
	for (int i=t-1;i>=0;i--){
		if (name[i]==name[t-i-1])
			d++;
	}
	if (d==t)
		cout<<"Es palindromo "<<endl;
	else
		cout<<"No es palindromo"<<endl;
	return 0;
}
