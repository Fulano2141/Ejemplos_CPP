// 11.- Obtener el factorial de un n�mero sin emplear la operaci�n de multiplicaci�n.
#include <iostream> 
using namespace std; 
int facto(int);
int main(){
	int num;
	cout<<"Ingrese el numero"<<endl;
	cin>>num;
	cout<<"El factorial es: "<<facto(num)<<endl;
    return 0;
}
int facto(int num){
	int c=1;
	for (num;num>=1;num--)
    {
    	c=c*num;
    } 
    return c;
}
