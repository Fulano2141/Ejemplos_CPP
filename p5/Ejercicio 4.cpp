/* 4.-   En la segunda temporada de The Walking Dead, los personajes llegaron a una 
c�rcel para refugiarse. La c�rcel estaba rodeada de vallas por lo que los muertos 
vivientes no pod�an entrar en ella. Sin embargo, dentro de las instalaciones aun 
exist�an muertos vivientes que amenazaban a los personajes. Por tanto, Rick y otros 
miembros del grupo decidieron ir a investigar las instalaciones con el fin de determinar 
cu�les eran los lugares seguros. Para lograr su objetivo construyeron un mapa basado 
en una matriz que indicaba las zonas seguras. Despu�s de un tiempo, tu grupo llega 
al mismo complejo y encuentra el mapa hecho por Rick. Para mantener a salvo a tus 
amigos decides dise�ar e implementar un programa que te ayude a determinar las zonas seguras. 
	a) Mostrar la matriz que describe el �rea. 
	b) Mostrar el n�mero de filas y columnas que no tienen un muerto viviente. 
	c) Determinar las coordenadas de los muertos vivientes en la matriz. 
	Utilice vectores paralelos para almacenar la posici�n de los muertos vivientes. 
	Un vector almacenara el �ndice de la fila y otro vector almacenara el �ndice de la columna. 
	d) La cantidad de muertos vivientes que existen en toda la matriz. 
	e) Determinar si dos o m�s muertos vivientes se encuentran en la primera columna. 
	Si es as� imprimir "no es posible entrar al complejo" de otro modo imprimir "es posible entrar al complejo".  */
# include <iostream>
# include <iomanip>
#include<stdlib.h>
#include<time.h>
using namespace std;
int main()
{
	srand (time(NULL));
    int a,b,c,con=0; 
    char u[4][3];
    for (int i=0;i<4;i++){
        for (int j=0;j<3;j++){
        	u[i][j]='O';
            c=1+rand()%2;
            if (c==1){
            a=rand()%2;
            b=rand()%3;
			u[a][b]='X';
			}
			}
    }
    for (int i=0;i<3;i++){
        cout<<endl;
        for (int j=0;j<4;j++){
            cout << setw(3)<<u[i][j]<<setw(3);
            if(u[i][j]=='X')
            con++;}
    }
    cout<<endl<<"Existen "<<con<<" Muertos vivientes"<<endl;
    return 0;
}
