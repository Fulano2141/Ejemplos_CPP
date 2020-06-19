// 4.- Escriba un algoritmo para leer dos valores  enteros
// distintos entre si, de tal forma que si el primer n�mero es
// mayor al segundo, genere una serie descendente, caso contrario
// muestre una serie ascendente, el factor de incremento o
// decremento es la unidad.
#include <iostream>

using namespace std;
int main()
{
	int m, n, h;
	cout << "Ingrese el primero numero " << endl;
	cin >> n;
	cout << "ingrese el segundo numero " << endl;
	cin >> m;
	h = n;
	if (n > m)
	{
		for (n; n >= m; n = n - m)
			cout << n << endl;
	}
	else
	{
		for (m; n <= m; n = n + h)
			cout << n << endl;
	}
	return 0;
}
