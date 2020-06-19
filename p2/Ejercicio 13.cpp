//13.- Mediante una función booleana con retorno determine si un número leído desde el teclado es capicúa.
#include <iostream>
#include <cstdlib>
using namespace std;
bool capicua(int);
int main()
{
int num;
cout << "Ingrese el numero mayor a 9: ";
cin >> num;
if(capicua (num))
cout<<"El numero "<<num<<" es capicua"<<endl;
else
cout<<"El numero "<<num<<" no es capicua"<<endl;
return 0;
}
bool capicua(int num){
	int a,b,c;
	a=num;
	c=0;
	b=0;
	while(a!=0)
	{
	b=a%10;
	a=a/10;
	c=c*10+b;
	}
	if(c==num)
	return true;
	else 
	return false;
}
