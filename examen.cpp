# include <iostream>
# include <cstdlib>
# include <ctime>
# include <iomanip>
using namespace std;
void notas(double[][5],double);
void mostrar(double[][5],double);
void promedio(double[][5],double);
void encima(double[][5],double);
void nota_alta(double[][5],double);
void nota_baja(double[][5],double);
int main()
{
    double n;
    double m=5;
    cout<<"Ingrese el numero de estudiantes "<<endl;
    cin>>n;
    double ma[50][5];
    notas(ma,n);
    mostrar(ma,n);
    promedio(ma,n);
    encima(ma,n);
    nota_alta(ma,n);
    nota_baja(ma,n);




}
void notas(double ma[][5],double n)
{
    double a=0;
    double f=0;
    srand(time(NULL));
    for(int f=0;f<n;f++)
        {
        for(int c=0;c<5;c++)
        {
            if(c==4)
            {
                ma[f][c]=((ma[f][0]*0.25)+(ma[f][1]*0.20)+(ma[f][2]*0.05)+(ma[f][3]*0.50));
            }
            else
            {
            ma[f][c]=1+rand()%50;

            }
        }
    }
}
void mostrar(double ma[][5],double n)
{
    for(int f=0;f<n;f++)
    {
        cout<<endl;
        for(int c=0;c<5;c++)
        {

           cout<<setw(7)<< ma[f][c]<<setw(7);
        }

    }
    cout<<endl;


}
void promedio(double ma[][5],double n)
{
    double prom=0;
    double s=0;
    for(int f=0;f<n;f++)
    {
        for(int c=4;c<5;c++)
        {
            s=s+ma[f][c];
        }
    }
    prom=s/n;
    cout<<" el promedio "<<prom<<endl;
}
void encima(double ma[][5],double n)
{
    double prom=0;
    double s=0;
    for(int f=0;f<n;f++)
    {
        for(int c=4;c<5;c++)
        {
            s=s+ma[f][c];
        }
    }
    prom=s/n;


    double por=0;
    for(int f=0;f<n;f++)
    {
        for(int c=4;c<5;c++)
        {
            if(ma[f][c]>prom)
            {
                por++;
            }
        }
    }
    double porcentaje=((por/n)*100);
    cout<<porcentaje<<" % "<<" estan por encima del promedio "<<endl;
}
void nota_alta(double ma[][5],double n)
{
    double m=0;
    for(int f=0;f<n;f++)
    {
        for(int c=3;c<4;c++)
        {
            if(ma[f][c]>m)
            {
                m=ma[f][c];
            }
        }
    }
    cout<<"la nota mas alta del examen mensual fue "<< m <<endl;

}
void nota_baja(double ma[][5],double n)
{
    double mn=100;
    for(int f=0;f<n;f++)
    {
        for(int c=4;c<5;c++)
        {
            if(ma[f][c]<mn)
            {
                mn=ma[f][c];
            }
        }
    }
    cout<<"la nota mas baja de la calificacion mensual fue "<<mn<<endl;
}



