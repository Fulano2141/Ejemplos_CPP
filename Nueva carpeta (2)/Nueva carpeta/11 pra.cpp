/* 11.- Leer una cadena que contiene:

	Nombre, Apellido Paterno, Apellido Materno

Para convertir al formato:
	
	Apellido Paterno, Apellido Materno, Nombre
*/
#include <iostream>
#include <string.h>

using namespace std;
int main ()
{ 
int t;
char fe[30],*DD,*MM,*AA;

cout<<"Ingrese el nombre"<<endl;
gets(fe);
DD=strtok(fe," ");
MM=strtok(NULL," ");
AA=strtok(NULL," ");
cout<<MM<<AA<<DD<<endl;

return 0;
}
