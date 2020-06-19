// 7.-  Simular el juego del "craps"
#include <iostream> 
#include <cstdlib>
#include<ctime>
using namespace std;
int tirarDados()
{
	int suma,dado1,dado2;
	dado1=1+rand()%6;
	dado2=1+rand()%6;
	suma=dado1+dado2;
	cout<<"El jugador tiro "<<dado1<<"+"<<dado2<<" = "<<suma<<endl;
  return suma;
}
int main()
{
string estado="";
int miPunto, numeroaleatorio,sumaDeDados;
srand(time(0));
sumaDeDados=tirarDados();
numeroaleatorio = (1 + rand() % 100);
switch(sumaDeDados)
{
case 7:
case 11:   
estado="gano";
break;
case 2:
case 3:
case 12:
estado="perdio";
break;
default:
estado="continuar";
miPunto=sumaDeDados;
cout<<"El punto es "<<miPunto<<endl; 
}
do
{
sumaDeDados=tirarDados();  
if(sumaDeDados==miPunto)
{      
estado="gano"; } 
else
if(sumaDeDados==7)
{ estado="perdio";
 }} while(estado=="continuar");
if(estado=="gano")
{
cout<<"El jugador gana"<<endl;
}else{cout<<"El jugador pierde"<<endl;}
}
