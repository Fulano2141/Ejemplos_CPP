/*1.- Generar las secuencias:
	
			1 3 5 7 9 ……. para n términos
			1 3 5 7 9
			1 3 5 7
			1 3 5 7
			1 3 5
			1 3 5
			1 3
			1 3
			1
			1
*/
#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
int main() 
{
	int n,h,u,j;
		n=5;
		h=1;
		int x=5;
		while (x>=h)
		{	
		cout<<endl;
		for(j=1;n>=j;j++)
		{	
			cout<<j;
			for(u=5;0<u;u--)
			{
			cout<<u;
			}
		}
		n--;
		h++;
		}
}
