#include <iostream>
using namespace std;
void insertar(int[],int&,int,int);
void imprimir(int [],int);
main()
{
int v[5]={10,20,30,40,50};
int n=5;
imprimir(v,n-1);
int valor,lugar;
cout<<"\nIngrese el valor que desea insertar: ";
cin>>valor;
cout<<"\nEn que posicion la insertara? ";
cin>>lugar;
insertar(v,n,valor,lugar);
imprimir(v,n);

}

void insertar(int v[],int &n,int valor,int lugar)
{
int x;
for(int r=n;r>=lugar-1;r--){
    v[r]=v[r-1];
}
v[lugar-1]=valor;

}
void imprimir(int v[],int n)
{
     for (int i=0;i<=n;i++)
    {
        cout<<v[i]<<",";
    }
}
