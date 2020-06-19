
      5.- Una matriz contiene los resultados
      de un proceso eleccionario, en donde
      las filas representan a los departamentos del pais
      y las columnas a los partidos politicos.

          int votos[4][3]

          a) Determinar el total de votos de c/dep
          b) Determinar el total de votos que consiguio cada pp
          c) Nombre del ganador absoluto (si lo hubiera)
          d) Nombre del ganador relativo
          e) En que departamento se voto mas
          f) En que departamento de voto menos

                        abc xyz qpr nulos blancos total
                    LP  10  20  30    0     0       60
                    SC  33  14  35
                    CB  18  18  16
                    OR  78  23  63


# include <iostream>
# include <iomanip>
using namespace std;
int main()
{
    String dep[4]={"LP","SC","CB","OR"};
    String partidos[5]={"abc","bsd","dkf","nul","bla"};

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
