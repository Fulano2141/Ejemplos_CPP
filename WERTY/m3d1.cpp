//2.- Generar una matriz en 3 dimensiones

# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int m3d[3][10][10]; //  3 matrices de orden 10 x 10
    int nm=3,nf=5,nc=5;
    for (int i=0;i<nm;i++)
    {
        for (int j=0;j<nf;j++)
        {
            for (int k=0;k<nc;k++)
            {
                m3d[i][j][k]=rand()%99+1;
            }
        }
    }
    cout << "Matriz tridimensional:\n";
    for (int i=0;i<nm;i++)
    {   cout << "\nMatriz:"<<i+1<<endl;
        for (int j=0;j<nf;j++)
        {   cout <<endl;
            for (int k=0;k<nc;k++)
            {
                cout << setw(3)<<m3d[i][j][k]<<setw(3);
            }
        }
   }

    cout << "Mayores de cada matriz:\n";
    for (int i=0;i<nm;i++)
    {   cout << "\nMatriz:"<<i+1<<endl;
        int may=0;
        for (int j=0;j<nf;j++)
        {
            for (int k=0;k<nc;k++)
            {
                if (may<m3d[i][j][k])
                    may=m3d[i][j][k];
            }
        }
        cout << may << endl;
   }


 }
