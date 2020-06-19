#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main ()
{
	for (int a=1;a<=9;a++)
	{ 
	cout<<endl;
	for (int b=1;b<=9;b++)
	if (a<b+5 and (a+b)>=6 and (a+b)<=14 and a>=b-4  )
	cout<<"*";
	else 
	cout<<" ";
	}
}

// (a+b)>=6 and (a+b)<=14 and a>=b-4 
