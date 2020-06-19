/* 3.- Generar una matriz de orden n que contenga

            Sea n=5
                        1 0 0 0 0
                        1 1 0 0 0
                        1 1 1 0 0
                        1 1 1 1 0
                        1 1 1 1 1

                        u11 u12 u13 u14 u15
                        u21 u22 u23 u24 u25
                        u31 u32 u33 u34 u35
                        .....
*/

# include <iostream>
//# include "milib.h"
using namespace std;
int main()
{
    int n; cout << "Orden:";cin >> n;
    char u[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            if(i>=j)
                u[i][j]='a';
            else
                u[i][j]='b';
    }
    for (int i=0;i<n;i++){
        cout << "\n";
        for (int j=0;j<n;j++)
            cout << u[i][j]<<" ";

    }
}
