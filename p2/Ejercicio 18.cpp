// 18.- Obtener la suma de la serie de Fibonacci para n términos
# include <iostream>
using namespace std;
int fibo(int);
int main()
{
    int num;  
    cout<<"Ingrese un numero para el termino n de la serie: ";
    cin>>num;
    for(int i=0;i<num;i++)
    {
       if(fibo(i)!=0)
       cout<<", ";  
       cout<<fibo(i);       
    }
    return 0;
}
int fibo(int num)
{
	int x;
    if(num==0 or num==1)
    	return num;
    else{
	    x=fibo(num-2)+fibo(num-1);
       return x;}
}
