/* 2.- Generar:

			1 2 3 4 5
			5 4 3 2 1
			1 2 3 4
			5 4 3 2
			1 2 3
			5 4 3
			1 2
			5 4
			1
			5
*/
#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
	int n, h, u, j, naux;
	n = 5;
	naux = n;
	h = 1;
	int x = 5;

	while (x >= h)
	{
		cout << endl;

		for (j = 1; n >= j; j++) // J=J+1;
		{
			cout << j;
		}
		cout << endl;
		for (j = naux; j >= h; j--) // J=J-1;
		{
			cout << j;
		}
		n--;
		h++;
	}
}
