// 6.- Efectuar la suma de una matriz tridimensional de orden n x n x n
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <ctime>
using namespace std;
int main()
{
    srand(time(NULL));
    int n;
    cout<<"Ingrese el tamano de la matriz "<<endl;
	cin>>n;
	int m3d[n][n][n], mat[n][n]={0};
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
            for (int k=0;k<n;k++)
            {
                m3d[i][j][k]=rand()%99+1;
            }
        }
    }
    cout<< "Matriz tridimensional:\n";
    for (int i=0;i<n;i++)
    {   cout<<endl<<"\nMatriz:"<<i+1<<endl;
        for (int j=0;j<n;j++)
        {   cout <<endl;
            for (int k=0;k<n;k++)
            {
                cout << setw(5)<<m3d[i][j][k]<<setw(5);
            }
        }
   }
   cout<<endl<<endl<< "Matriz resultante de la suma de la matriz nxn:\n";
    for (int i=0;i<n;i++)
    {
        for (int j=0;j<n;j++)
        {
        	int c=0;
            for (int k=0;k<n;k++)
            {
                c=c+m3d[k][j][i];
            } 
			mat[i][j]=c;
        }
    }
    for (int i=0;i<n;i++)
    {
    	cout<<endl;
        for (int j=0;j<n;j++)
        {
            cout<<setw(10)<<mat[i][j]<<setw(10);
        }
    }


 }
