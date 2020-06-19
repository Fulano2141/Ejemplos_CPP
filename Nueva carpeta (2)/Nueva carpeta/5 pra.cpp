//  5.-Hallar el factorial de un numero entero positivo
# include <string.h>
# include <iostream>
using namespace std;
int main()
{
	int n,h=1,c=1;
	cout<<"Ingrese el numero a determinar su factorial ";
	cin>>n;
	do
	{
		c++;
		h=h*c;
	}
	while(c<n);
	cout<<"Su factorial es: "<<h<<endl;
	return 0;
}
