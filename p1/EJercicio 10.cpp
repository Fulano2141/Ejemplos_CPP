// 10.- Pedir números enteros hasta que se digite un 0, mostrar la suma de todos los números introducidos.
#include <iostream>
void pedir();
void sumatoria();
using namespace std;
int num,sum=0;
int main()
{	
	pedir();
	while (num!=0)
	{
		sum=sum+num;
		pedir();
	}
	sumatoria();
	return 0;
	}
void pedir()
{	
	cout<<"Ingregese el numero (cero para terminar) "<<endl;
	cin>>num; 	
	}
void sumatoria()
{
	cout<<"La sumatoria de los numeros dados son: "<<sum<<endl;
}
