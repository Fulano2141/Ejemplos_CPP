//10.- Escribir un programa que obtenga el valor de la serie:
//
// 4  -  4/3 + 4/5  -  4/7 + ......... para n términos
#include <iostream> 
using namespace std; 
double pi(int);
int main(){
	int num;
	cout<<"Ingrese el numero para el termino"<<endl;
	cin>>num;
	cout<<"El resultado es: "<<pi(num)<<endl;
	return 0;
}
double pi(int num){
	double xd=0;
	int con1=1;
    for (int con=1;con<=num;con+=2)
    {
      con1++;
      if (con1%2==0)
        xd=xd+4.0/con;
      else 
        xd=xd-4.0/con;
    } 
    return xd;
}
