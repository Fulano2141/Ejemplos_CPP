/*  A un trabajador  si hort>40 la tarifa se invrementa 50% el salario es menos 10% por inpuestos	- el pago total		- el total descueto 	- el pago neto
	ht  th    pg  des   pagnt
	40  20   800  80    720
	42  50  2150  215   1935 */
# include <iostream>
using namespace std;
void division(int, int, int&, int&, int&);
int main(){
	int ht,th,pagto,des,pagnet;
	cout<<"Ingrese las horas trabajadas y la tarifa horaria "<<endl;
	cin>>ht>>th;
	division(ht,th,pagto,des,pagnet);
	cout<<pagto<<" pago total "<<endl<<des<<" descuento "<<endl<<pagnet<<" pago neto"<<endl;}
void division(int ht, int th, int& pagto, int& des, int& pagnet){
	if (ht<=40){
		pagto=ht*th;
		des=(pagto*0.1);
		pagnet=pagto-des;}
	else{
		pagto=(th*40)+((ht-40)*(th+th*0.5));
		des=(pagto*0.1);
		pagnet=pagto-des;}
		}
