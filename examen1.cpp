# include <iostream>
# include <cstdlib>
# include <ctime>
# include <iomanip>
using namespace std;
void cargar(int [10][10],int); // (matriz,filas,columnas)
void vaciar(int [10][10],int); //
int menor(int[10][10],int);
int main()
{
        srand(time(NULL));
        int nf;
        cout << "Ingrese numero de estudiantes:\n";cin >> nf;
        int m[10][10];
        cargar(m,nf);
        vaciar(m,nf);
        int min=menor(m,nf);
        cout << "\n\nLa calificacion mensual mas baja es = "<<min<<"\n";
        return 0;
}

void cargar(int m[10][10],int nf)
{
    int nc=5;
    for (int f=0;f<nf;f++)
    {
        for (int c=0;c<(nc-1);c++)
            m[f][c]=rand()%100;
    }

}
void vaciar(int m[10][10],int nf)
{
    cout<<endl;
    string depa[5]={"P","L","C","E","C"};
    int nc=5;
    cout << setw(5)<<depa[0]<<setw(5)<<depa[1]<<setw(5)<<depa[2]<<setw(5)<<depa[3]<<setw(5)<<depa[4]<<endl;
    for (int f=0;f<nf;f++)
    {   cout << endl;
        for (int c=0;c<(nc-1);c++)
            cout << setw(5)<<m[f][c]<<setw(5);
    }

}
int menor(int m[10][10],int nf)
{   int nc=5;
    int aux=m[0][0];
    for (int f=0;f<nf;f++)
    {
        for (int c=0;c<(nc-1);c++)
        if (nc==4)
        {
            if (aux>m[f][c])
                aux=m[f][c];
        }
    }
    return aux;
}
void pond(int mat[10][10],int nf)
{
    cout<<endl;
    string depa[5]={"P","L","C","E","C"};
    int nc=5;
    cout << setw(5)<<depa[0]<<setw(5)<<depa[1]<<setw(5)<<depa[2]<<setw(5)<<depa[3]<<setw(5)<<depa[4]<<endl;
    for (int f=0;f<nf;f++)
    {   cout << endl;
        for (int c=0;c<nc;c++)
            cout << setw(5)<<mat[f][c]<<setw(5);
    }

}
