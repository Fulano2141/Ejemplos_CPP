/* 4.- Generar una matriz de orden n que contenga

            Sea n=5
                        1  2  3  4  5
                        2  4  6  8 10
                        3  6  9 12 15
                        4  8 12 16 20
                        5 10 15 20 25

                        u11 u12 u13 u14 u15
                        u21 u22 u23 u24 u25
                        u31 u32 u33 u34 u35
                        .....
*/

# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    int n; cout << "Orden:";cin >> n;
    int u[n][n];
    for (int i=n-1;i>=0;i--){
        for (int j=n-1;j>=0;j--)
            u[i][j]=(i+1)*(j+1);

    }
    for (int i=n-1;i>=0;i--){
        cout << "\n";
        for (int j=n-1;j>=0;j--)
            cout << setw(3)<<u[i][j]<<setw(3);

    }
}
