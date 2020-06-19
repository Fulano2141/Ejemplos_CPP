//2.- Leer un numero entero y obtenga la suma de los divisores pares
# include <iostream>
using namespace std;
int sumadivisores(int);
int main()
{
    int n,r;
    cout << "Ingrese un numero entero:";
    cin >> n;
    r=sumadivisores(n);
    cout << "Suma divisores pares:"<<r<<"\n";
    return 0;

}
int sumadivisores(int n)
{   int sum=0;
    for (int i=1;i<=n/2;i++)
    {   if (n%i==0)
            if (i%2==0)
                sum=sum+i;
    }
    return sum;
}
