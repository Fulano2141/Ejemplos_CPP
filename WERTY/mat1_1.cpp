// 1.- Generar una matriz unitaria de orden n
/*
            Sea n=3
                        1 0 0
                     u= 0 1 0
                        0 0 1

                        u11 u12 u13
                        u21 u22 u23
                        u31 u32 u33
*/
# include <iostream>
using namespace std;
int main()
{
    int n; cout << "Orden:";cin >> n;
    int u[n][n];
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++)
            if(i==j)
                u[i][j]=1;
            else
                u[i][j]=0;
    }
    for (int i=0;i<n;i++){
        cout << "\n";
        for (int j=0;j<n;j++)
            cout << u[i][j]<<" ";

    }
}
