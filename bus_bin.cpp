//Busqueda binaria en un arreglo lineal
#include <iostream>
using namespace std;
void mostrarArreglo(int[], int); //prototipo de funcion que recibe un arreglo constante
int busquedaBinaria(int[], int, int); //arreglo, tamano, clave
int main()
{
  int clave =0;
  int arreglo[10] = {15,27,33,46,51,62,73,87,95,99};
  int n=10;
  cout << "Elementos del arreglo: " << endl;
  mostrarArreglo(arreglo,n);
  cout << "Indique un valor a buscar y se le devolvera el indice: " << endl;
  cin >> clave;
  cout<< "Su valor se encuentra en arreglo["<<busquedaBinaria(arreglo,n,clave)<<"]" << endl;

}

void mostrarArreglo(int arreglo[], int tamano)
{
  for (int i = 0 ; i < tamano ; i++)
    cout << "arreglo[" << i << "]=" << arreglo[i] << endl;
}
int busquedaBinaria(int arreglo[], int n, int clave)
{
  int Iarriba = n-1;
  int Iabajo = 0;
  int Icentro;
  while (Iabajo <= Iarriba)
    {
      Icentro = (Iarriba + Iabajo)/2;
      if (arreglo[Icentro] == clave)
 return Icentro;
      else
 if (clave < arreglo[Icentro])
   Iarriba=Icentro;
 else
   Iabajo=Icentro;
    }
  return -1;
}
