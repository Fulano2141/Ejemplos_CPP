// Sirve para identificar cuantas vocales A hay
//
#include <stdio.h>
#include <iostream>
#include <string.h>
using namespace std;
int main ()
{

int c1=0,i=0,t;
char u[40]="Cosme Fulan";
t=strlen(u);
for (i;i<t;i++)
{
	switch(u[i])
	{
		case 'c':c1++;break;
		case 'C':c1++;break;
	}
}
cout<<c1<<endl;
	return 0;
}
