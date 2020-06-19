/* Calcular el promedio de 3 numeros obtenidos */
#include <iostream>
#include <math.h>
using namespace std;
float prome(float, float, float);
int main()
{
	float num1, res, num2, num3;
	cout << "Ingregese los numeros a promediar " << endl;
	cin >> num1 >> num2 >> num3;
	res = prome(num1, num2, num3);
	cout << "Promedio de los numeros es: " << res << endl;
	return 0;
}
float prome(float num1, float num2, float num3)
{
	float x;
	x = (num1 + num2 + num3) / 3;
	return x;
}
