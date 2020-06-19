// 3. Simular el lanzamiento de un dado n veces y determinar
//    la frecuencia de repeticion de caras pares


# include <iostream>
# include <ctime>
# include <cstdlib>
using namespace std;
int dado(int);
main()
{
    srand(time(NULL));
    int n;
    cout << "Cuantos lanzamientos:";
    cin >> n;
    cout << "\nFrecuencia de repeticionde caras pares:"<<dado(n)<<"\n";
    return 0;
}
int dado(int n)
{   int m,cp=0;
    for (int k=1;k<=n;k++)
    {
        m=rand()%6+1;
        cout << m << " ";
        if (m%2==0)
            cp++;

    }
    return cp;

}

