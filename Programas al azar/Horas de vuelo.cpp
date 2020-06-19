#include <iostream>
using namespace std;
void funcion(int, int, int, int, int &, int &);
int main()
{
	int hor0, min0, hor1, min1, hor2, min2;
	cout << "Ingrese la hora de vuelo de salida" << endl;
	cin >> hor0;
	cout << "Ingrese los minutos de vuelo salida" << endl;
	cin >> min0;
	cout << "Ingrese la hora de vuelo de llegada" << endl;
	cin >> hor1;
	cout << "Ingrese los minutos de vuelo llegada" << endl;
	cin >> min1;
	funcion(hor0, min0, hor1, min1, hor2, min2);
	cout << hor2 << ":" << min2 << " Es el tiempo de vuelo " << endl;
	return 0;
}
void funcion(int hor0, int min0, int hor1, int min1, int &hor2, int &min2)
{
	if (hor1 >= hor0)
	{
		int aux1, aux, aux2, aux3, aux0;
		aux0 = hor0 * 60;
		aux1 = min0 + aux0;
		aux2 = hor1 * 60;
		aux3 = min1 + aux2;
		aux = aux3 - aux1;
		hor2 = aux / 60;
		min2 = aux % 60;
	}
	else
	{
		if (hor0 > 12)
			hor0 = hor0 - 12;
		if (hor1 < 12)
			hor1 = hor1 + 12;
		int aux, aux0, aux1, aux2, aux3;
		aux0 = hor0 * 60;
		aux1 = min0 + aux0;
		aux2 = hor1 * 60;
		aux3 = min1 + aux2;
		aux = aux3 - aux1;
		hor2 = aux / 60;
		min2 = aux % 60;
	}
}
