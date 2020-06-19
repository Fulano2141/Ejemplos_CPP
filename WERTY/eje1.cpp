/* 1.- Una matriz contiene las calificaciones de un grupo de 30 estudiantes
 estas calificaciones se clasifican en :

            notas de practicas     20%
            notas de laboratorios  20%
            control                10%
            examen parcial         50%

   a) Obtener la calificacion de cada estudiante
   b) Obtener el porcentaje de calificaciones
      que estan por debajo de la nota promedio
   c) La mayor nota
   d) La menor nota
*/
# include <iostream>
# include <iomanip>
# include <cstdlib>
# include <ctime>
# include "milib1.h"
using namespace std;
void notas_por_estudiante(int[30][5],int,int);
float porcentaje_promedio(int[30][5],int);
int mayor_nota(int[30][5],int);
int menor_nota(int[30][5],int);
int main()
{
    srand(time(NULL));
    int nf=5,nc=5;
    int notas[30][5]={0};
    almacenar_matriz(notas,nf,nc);
    //vaciar_matriz(notas,nf,nc);
    notas_por_estudiante(notas,nf,nc);
    vaciar_matriz(notas,nf,nc);
    float p=porcentaje_promedio(notas,nf);
    cout << "\nEl % de notas por debajo del promedio="<<p<<endl;
    int maxi=mayor_nota(notas,nf);
    int mini=menor_nota(notas,nf);
    cout << "\nLa mayor nota es="<<maxi<<endl;
    cout << "\nLa menor nota es="<<mini<<endl;
    return 0;
}
void notas_por_estudiante(int notas[30][5],int nf,int nc)
{
    for (int f=0;f<nf;f++)
    {
        for (int c=0;c<nc-1;c++)
        {
            notas[f][4]=notas[f][0]*0.20+notas[f][1]*0.20+notas[f][2]*0.1+notas[f][3]*0.5;
        }
    }
}

float porcentaje_promedio(int notas[30][5],int nf)
{   float suma=0;
    for (int f=0;f<nf;f++)
    {
         suma=suma+notas[f][4];

    }
    float prom=suma/nf;
    cout << "\nPromedio="<<prom<<endl;
    int c=0;
    for (int f=0;f<nf;f++)
    {
            if (notas[f][4]<prom)
                c++;

    }
    return c*100.0/nf;
}
int mayor_nota(int notas[30][5],int nf)
{   int aux=notas[0][4];
    for (int f=1;f<nf;f++)
    {
         if (aux<notas[f][4])
         {
             aux=notas[f][4];
         }

    }

    return aux;
}
int menor_nota(int notas[30][5],int nf)
{   int aux=notas[0][4];
    for (int f=1;f<nf;f++)
    {
         if (aux>notas[f][4])
         {
             aux=notas[f][4];
         }

    }

    return aux;
}
