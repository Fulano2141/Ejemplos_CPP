/* Determinar el mayor numero de 3 numeros obtenidos */
#include <iostream>
using namespace std;
int numeros(int,int,int);
int main()
{	int may,num1,num2,num3;
	cout<<"Ingregese los numeros "<<endl;
	cin>>num1>>num2>>num3; 
	may=numeros(num1,num2,num3);
	cout<<"El mayor es: "<<may<<endl;
	return 0;}
int numeros(int num1, int num2, int num3)
{
	if (num1>num2 and num1>num3)
		return num1;
	else 
		if (num2>num1 and num2>num3)
			return num2;
		else
			return num3;
	}
