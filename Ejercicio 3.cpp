/* Leer un valor expresado en segundos y convertir en horas minutos y segundos. */
// 3665 segundos == 1hora, 1 minuto , 5 segundos
# include <iostream>
using namespace std;
void division(int, int&, int&, int&);
int main(){
	int seg1,hor,min,seg;
	cout<<"Ingrese los segundos "<<endl;
	cin>>seg1;
	division(seg1,hor,min,seg);
	cout<<hor<<" horas "<<min<<" minutos: "<<seg<<" segundos"<<endl;
}
void division(int seg1, int& hor, int& min, int& seg){
	int x;
	seg=seg1%60;
	min=(seg1/60)%60;
	hor=seg1/3600;
}

