#include <iostream>
#include <windows.h>
using namespace std;
int  busquedaseq(int[],int,int);
void imprimir(int[],int);
main()
{
    int v[6]={14,25,18,39,10,45};
    int n=6,e;
    cout << "\n\nEl vector:"<<endl;
    imprimir(v,n);
    cout << "\nElemento a buscar:";cin >> e;
    int p=busquedaseq(v,n,e);
    if (p<0)
        cout << "\nElemento inexistente"<<endl;
    else
        cout << "\nElemento:"<<e<<" esta en la posicion:"<<p+1<<endl;


}

int busquedaseq(int v[],int n,int e)
{
    int pos=-1;
    for(int i=0;i<n;i++)
    {
        if (v[i]==e)
        {
           pos=i;
           break;
        }

     }
     return pos;
}

void imprimir(int v[],int n)
{
     for (int i=0;i<n;i++)
     {
        cout<<v[i]<<",";
     }
}
