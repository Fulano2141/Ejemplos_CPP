/* 2.- Dada una medida de tiempo expresada en horas, minutos y segundos 
con valores arbitrarios, transforme dicha medida en una expresión correcta. 
Por ejemplo, dada la medida 3h 118m 195s, el programa deberá obtener como 
resultado 5h 1m 15s. */
# include <iostream>
# include <math.h>
using namespace std;
void leer();
void conver();
void salida();
int hor,minu,seg,hor1,minu1,seg1;
int main (){
	leer();	
	conver();
	salida();
	return 0;
}
void leer(){
	cout<<"Ingrese las horas"<<endl;
	cin>>hor;
	cout<<"Ingrese los minutos"<<endl;
	cin>>minu;
	cout<<"Ingrese los segundos"<<endl;
	cin>>seg;
}
void conver(){
	int nuseg,numin,num1,nuhor;
		nuseg=trunc(seg%60);
		num1=minu+trunc(seg/60);
		numin=num1%60;
		nuhor=hor+trunc(num1/60);
		hor1=nuhor;
		minu1=numin;
		seg1=nuseg; 
}
void salida(){
	cout<<hor1<<" Horas "<<minu1<<" Minutos "<<seg1<<" Segundos "<<endl;
}
