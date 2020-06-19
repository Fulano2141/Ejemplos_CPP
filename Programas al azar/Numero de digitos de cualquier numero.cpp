/* Determinar la cantidad de digitos de un numero obtenido */
#include <iostream>
#include <cstdlib>
using namespace std;
int digitos(int);
int main()
{
	int num, dig;
	cout << "Ingregese el numero " << endl;
	cin >> num;
	dig = digitos(num);
	cout << "Los digitos que tiene el numero son: " << dig << endl;
	return 0;
}
int digitos(int num)
{
	int s = 0;
	while (num >= 1)
	{
		s++;
		num = num / 10;
	}
	return s;
}
