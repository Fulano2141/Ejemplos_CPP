// 14.- Leer la fecha de un producto farmacéutico y verificar si el producto esta vencido.
#include <iostream>
#include <string.h>

using namespace std;
int main ()
{ 
int t;
char fe[30],*DD,*MM,*AA;
cout<<"Hoy 26-05-17"<<endl;
cout<<"Ingrese la fecha (DD-MM-AA)"<<endl;
gets(fe);
t=strlen(fe);
DD=strtok(fe,"-");
MM=strtok(NULL,"-");
AA=strtok(NULL,"-");
if (strcmp(DD,"26")<=0)
	cout<<"El producto caduco ";
	else	
	if (strcmp(MM,"05")<=0)
		cout<<"El producto caduco ";
		else 
		if (strcmp(AA,"17")<=0)
			cout<<"El producto caduco ";
		else 
			cout<<"El producto Esta en buen estado ";
return 0;
}
