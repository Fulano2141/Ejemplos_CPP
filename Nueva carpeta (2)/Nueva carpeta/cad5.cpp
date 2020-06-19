// 5.- Leer los numeros de celular de varias personas y determinar
//     el porcentaje de celulares que comienzan con:
//               6 y 7
//     emplear centinela (0 para terminar la lectura)

# include <iostream>
# include <string.h>
using namespace std;


int main()
{
    char n[30]="";
    int c1=0,c2=0;
    do
    {
        cout << "Ingrese el numero de celular:";
        cin >> n;
        if (strcmp(n,"0")==0)
            break;
        if (n[0]=='6')
            c1++;
        if (n[0]=='7')
            c2++;

    }
    while (strcmp(n,"0")!=0);
    cout << c1 << " Telefonos comienzan con 6"<<<endl;
    cout << c2 << " Telefonos comienzan con 7"<<<endl;
    return 0;
 }


