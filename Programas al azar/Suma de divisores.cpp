#include <iostream>
using namespace std;
int sumad(int);
int main()
{
	int num;
	cout << "Ingrese el numero " << endl;
	cin >> num;
	cout << "La suma de sus divisores pares es: " << sumad(num) << endl;
	return 0;
}
int sumad(int num)
{
	int x = num, c = 0;
	for (int i = 1; x > i; i++)
	{
		if (i % 2 == 0 and x % i == 0)
			c = c + i;
	}
	num = c;
	return c;
}
