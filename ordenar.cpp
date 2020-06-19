#include <iostream>
#include <windows.h>
using namespace std;
void ordenar(int[],int);
void imprimir(int[],int);
main()
{
    int v[5]={14,25,18,39,10};
    int n=5;
    cout << "\n\nEl vector original:"<<endl;
    imprimir(v,n);
    cout << "\n\nEl vector ordenado por el metodo de la burbuja es:"<<endl;
    ordenar(v,n);
    imprimir(v,n);
}

void ordenar(int v[],int n)
{
    for(int i=0;i<n-1;i++)
    {
       for (int j=i+1;j<n;j++)
       {
           if (v[i]>v[j])
              swap(v[i],v[j]);

       }
}
}
void imprimir(int v[],int n)
{
     for (int i=0;i<n;i++)
     {
        cout<<v[i]<<",";
     }
}
