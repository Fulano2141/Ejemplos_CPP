/* 5.- Generar la matriz para un orden nxn
	Sea n=5
			1    2    3    4    5 
			3    4    5    6    7
			5    6    7    8    9
			7    8    9   10   11
			9   10   11   12   13
*/
# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    int n,k=1, h=0; 
	cout<<" Ingrese el tamano de la matriz ";
	cin >> n;
    int u[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            u[i][j]=k++;
            if(j==(n/2))
            h=k-1;}k=h;

    }
    for (int i=0;i<n;i++){
        cout<<endl;
        for (int j=0;j<n;j++)
            cout << setw(3)<<u[i][j]<<setw(3);

    }
}
