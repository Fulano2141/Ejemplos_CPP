// 12.  Obtener la suma de la serie:
//		1 + 2 + 4 + 7 + 11 + 16 + 22 + ……. para n términos
#include <iostream>
using namespace std;
int serie(int);
int main(){
    int num;  
    cout<<"Ingrese un numero para la serie: ";
    cin>>num;
    for(int i=1;i<num;i++)
    {
    	cout<<serie(i); 
		if(serie(i)!=0)
		cout<<", ";  
      
    }
    return 0;
}
int serie(int num){
	int x;
    if(num==0 or num==1)
    	return num;
    else{
	    x=serie(num+2)+serie(num-1);
       return x;}
}
