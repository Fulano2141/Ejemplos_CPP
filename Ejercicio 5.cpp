/*  leer el salario basico y la antiguedad de un empleado en años
	si la  antiguedad <5   +10% 
	si la  antiguedad >=5 y <10    +15%
	si la  antiguedad >=10 y <15    +25%
	si la  antiguedad >=15  +50% */
# include <iostream>
using namespace std;
void funcion(int&, int&);
int main(){
	int sal,an;
	cout<<"Ingrese el salario basico y la antiguedad "<<endl;
	cin>>sal>>an;
	funcion(sal,an);
	cout<< sal<<" bono "<<endl<<an<<" pago neto"<<endl;}
void funcion(int& sal, int& an){
	int x=sal;
	if (an<5)
		{
		sal=x*0.10;
		an=x+sal;
		}
	if (an>=5 and an<10)
		{
		sal=x*0.15;
		an=x+sal;
		}
	if (an>=10 and an<15)
		{
		sal=x*0.25;
		an=x+sal;
		}
	if (an>=15)
		{
		sal=x*0.50;
		an=x+sal;
		}
}
