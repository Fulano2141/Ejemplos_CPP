// 3.-  Leer el numero de cedula de varias personas en
//      el formato:
//           xxxxxxx-pr
//      Ej:
//           27349054-SC
//           28382394-OR
//           33834767-LP
//      y determinar la cantidad de personas que tienen
//      cedulas expedidas en el interior del pais

#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
using namespace std;
int main()
{
    int c = 0, p;
    int n;
    char cedula[50];
    char *num, *proced;
    cout << "Cuantas cedulas desea leer:";
    cin >> n;
    for (int i = 1; i < n + 1; i++)
    {
        cout << "Ingrese el CI (xxxxxxx.pr) : ";
        cin >> cedula;
        num = strtok(cedula, "-");
        proced = strtok(NULL, "-");
        cout << num << "  " << proced << endl;
        if (strcmp(proced, "LP") == 0)
            c++;
    }
    cout << "La cantidad de cedulas del interior del pais : " << c << endl;
    return 0;
}
