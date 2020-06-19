// 3. Simular el lanzamiento de una moneda n veces y determinar
//    el porcentaje de caras y el porcentaje de sellos


# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
void moneda(int,int&,int&);
main()
{
    srand(time(NULL));
    int n,caras,sellos;
    cout << "Cuantos lanzamientos:";
    cin >> n;
    moneda(n,caras,sellos);
    cout << "Porcentaje de caras:"<<caras<<"\n";
    cout << "Porcentaje de sellos:"<<sellos<<"\n";
    return 0;
}
void moneda(int n,int &caras,int &sellos)
{   int m,cc=0;
    for (int k=1;k<=n;k++)
    {
        m=rand()%2;
        cout << m << " ";
        if (m==0)
            cc++;

    }
    caras=cc*100/n;sellos=100-caras;

}

