#include <iostream>
#include <windows.h>
using namespace std;
void eliminar(int[],int,int);
void imprimir(int[],int);
main()
{
    int v[5]={14,25,38,49,50};
    int n=5;
    imprimir(v,n);
    int valor;
    cout<<"\nIngrese el valor que desea eliminar: ";
    cin>>valor;
    eliminar(v,n,valor);
    imprimir(v,n-1);
}

void eliminar(int v[],int n,int a)
{
    int x=-1;
    for(int r=0;r<n;r++)
    {
        if (v[r]==a)
        {   x=r;
            break;
        }
    }
    if(x<0)
    {
      cout<<"el numero ingresado no existe!";
      exit(1);
    }

    for(int s=x;s<n;s++)
    {
        v[s]=v[s+1];
    }
}

void imprimir(int v[],int n)
{
     for (int i=0;i<n;i++)
     {
        cout<<v[i]<<",";
     }
}
