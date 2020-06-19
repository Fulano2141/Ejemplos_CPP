/* 12.- Elabore un programa en el que dado un entero n > 1, calcule e imprima los elementos
 correspondientes a la conjetura de Ullman (en honor al matem�tico  Ullman) que consiste en
 lo siguiente:
 - Empiece con cualquier entero positivo.
 - Si es par, div�dalo entre 2; si es impar multipl�quelo por 3 y agr�guele 1.
 - Obtenga enteros sucesivamente repitiendo el proceso.
 Al final se obtendr� el n�mero 1, independientemente del entero inicial. Por ejemplo, cuando 
 el entero inicial es 26, la secuencia ser�:
          26	13		40		20		10		5		16		8		4		2		1   */
#include <iostream>
using namespace std;
int par(int);
int impar(int);
int main (){
	int n;
	cout<<"Ingrese un numero entero positivo "<<endl;
	cin>>n;
	if (n>0)
	{
		cout<<n<<", ";
	while (n!=1)
	{
		if (n%2==0)
		{
		n=par(n);
		cout<<n<<", ";}
		else 
		{n=impar(n);
		cout<<n<<", ";}
	}}
	else 
	cout<<"El numero no es positivo "<<endl;
}
int par(int n){
	int no;
	no=n/2;
	return no;
}
int impar(int n){
	int no;
	no=(n*3)+1;
	return no;
}
