#include <iostream>
#include <windows.h>
using namespace std;
void rotacion(int[],int);
void imprimir(int[],int);
main()
{
    int v[6]={14,25,18,39,10,45};
    int n=6;
    cout << "\n\nEl vector original:"<<endl;
    imprimir(v,n);
    cout << "\n\nEl vector rotado es:"<<endl;
    rotacion(v,n);
    imprimir(v,n);
}

void rotacion(int v[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        swap(v[i],v[(n-1)-i]);

       }
}

void imprimir(int v[],int n)
{
     for (int i=0;i<n;i++)
     {
        cout<<v[i]<<",";
     }
}
