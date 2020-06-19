/* 11.- Escriba un programa para leer dos valores  enteros  distintos
 entre si, de tal forma que si el primer número es mayor al segundo, 
 genere una serie descendente, caso contrario muestre una serie ascendente, 
 el factor de incremento o decremento es la unidad. */
 #include <iostream>
 void pedir();
 void asce();
 void desce();
 void mensaj();
 using namespace std;
 int a,b;
 int main ()
 {
	pedir();
	if (a==b)
	mensaj();
	else 
	{
	if (a>b)
		desce();
	else 
		asce();
		}
 }
void pedir ()
 {
 	cout<<"Ingrese el primer numero: ";
 	cin>>a;
 	cout<<"Ingrese el segundo numero: ";
 	cin>>b; 
 }
void mensaj()
{
	cout<<"Los numeros son iguales ";
}
void asce()
{
	for (a;a<=b;a++)
	cout<<a<<", ";
}
void desce()
{
	for (a;a>=b;a--)
	cout<<a<<", ";
}
