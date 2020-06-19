// 2.- Almacenar en un vector de 10 posiciones numeros al azar y que luego el programa
//     muestre cuantos pares existen

# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
int main()
{
    srand(time(NULL)); // randomizacion
    int vec[50];
    int n=50,cp=0;
    for (int i=0;i<n;i++)
    {   vec[i]=rand()%99;
        if (vec[i]%2==0)
            cp++;
    }
    cout << "/nEl arreglo es:\n";
    for (int f=0;f<n;f++)
    {
        cout << vec[f]<<" ";

    }
    cout << "\nExisten "<<cp<<" pares en el arreglo\n";
}
