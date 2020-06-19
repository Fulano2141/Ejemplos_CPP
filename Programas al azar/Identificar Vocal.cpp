// 12.- Leer varios apellidos y muestre aquellos que terminan con una vocal.//
/// CERO para Terminar
#include <iostream>
#include <string.h>

using namespace std;
int main()
{

	string nombre = "";
	int y, h, j;

	do
	{
		cout << "Ingrese el Apellido ";
		cin >> nombre;
		char n[nombre.length()] = "";
		strcpy(n, nombre.c_str());
		j = nombre.length() - 1;
		if (strcmp(n, "0") == 0)
			break;
		if (n[j] == 'a')
			cout << n << endl;
		if (n[j] == 'e')
			cout << n << endl;
		if (n[j] == 'i')
			cout << n << endl;
		if (n[j] == 'o')
			cout << n << endl;
		if (n[j] == 'u')
			cout << n << endl;
	} while (true);
}
