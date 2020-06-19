// 1.-
// Escribir un programa que mediante una función calcule el tiempo de vuelo de una aeronave
// considerando como datos de entrada la hora de salida, el minuto de salida, la hora de llegada
// y el minuto de llegada. (Considere que ningún vuelo dura mas de 24 horas)

//Ejecute su programa con los siguientes casos:

//	Nº vuelo	Hora  	Minuto	 Hora  	  Minuto   Tiempo       Tiempo
//              Salida 	Salida	 llegada  llegada  vuelo horas  vuelo minutos
//=====================================================================
//  190		    10	    15	        12		20		    2	         5
//  783		    11	    30	        13		10		    1	        40
//	875		    23	    10	         3		15		    4	         5
//	345		    23	    40	         2		30		    2	        50


# include <iostream>
using namespace std;
void vuelo(int,int,int,int,int,int&,int&);
main()
{
    int nv,hs,ms,hll,mll,tvh,tvm;
    cout << "Numero de vuelo:";cin >> nv;
    cout << "Hora de salida:";cin >> hs;
    cout << "Hora de salida:";cin >> ms;
    cout << "Hora de llegada:";cin >> hll;
    cout << "Minuto de llegada:";cin >> mll;
    vuelo(nv,hs,ms,hll,mll,tvh,tvm);
    cout << "Tiempo de vuelo en horas:"<<tvh<<endl;
    cout << "Tiempo de vuelo en minutos:"<<tvm<<endl;


}
void vuelo(int nv,int hs,int ms,int hll,int mll,int&tvh,int&tvm)
{
    int ts,tll,dif,factor=0;
    if (hs>hll)
        factor=24;

    ts=hs*60+ms;
    tll=(factor+hll)*60+mll;
    dif=tll-ts;
    tvh=dif/60;
    tvm=dif % 60;
    cout <<tvh<<":"<<tvm<<endl;


}
