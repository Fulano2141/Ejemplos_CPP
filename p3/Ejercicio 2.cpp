/* 2.- Escribir un programa que lea el salario de un empleado y mediante una función efectué un incremento salarial en base a la siguiente escala:

Si el salario es menor < 1000 Bs. incremente en un 20%
Si el salario es mayor o igual a 1000 pero es menor a 3000 Bs. Incremente en un 15%
Si el salario es mayor o igual a 3000 pero es menor a 6000 Bs. Incremente en un 10%
Si el salario es mayor o igual a 6000 Bs.   Incremente en un 5%

La función debe obtener el incremento y el nuevo salario. */ 
#include <iostream>
using namespace std;
void funcion(int&, int&);
int main(){
	int sal,incr=0;
	cout<<"Ingrese el salario para determinar su aumento "<<endl;
	cin>>sal;
	funcion(sal, incr);
	cout<<incr<<"Bs. bono "<<endl<<sal<<"Bs. pago neto"<<endl;}
void funcion(int& sal, int& incr){
	int x=sal;
	if (sal<1000)
		{
		incr=x*0.20;
		sal=x+incr;
		}
	if (sal>=1000 and sal<3000)
		{
		incr=x*0.15;
		sal=x+incr;
		}
	if (sal>=3000 and sal<6000)
		{
		incr=x*0.10;
		sal=x+incr;
		}
	if (sal>=6000)
		{
		incr=x*0.05;
		sal=x+incr;
		}
}
