/* 1.- Una clase denominada vector 3d contiene las coordenadas x,y,z.
 Aplicando sobrecarga de operadores, obtener. 

	-La Suma de dos o mas vectores 
	-El producto escalar entre 2 o mas vectores 
	- ademas se debe sobrecargar cin y cout */ 
#include<iostream>
#include<iomanip>
using namespace std;
class vector3d{
	public:
 double x,y,z;
 
 vector3d();
 vector3d operator + (vector3d &);
 vector3d operator * (vector3d &);
 friend istream& operator >> (istream &,vector3d &);
 friend ostream& operator << (ostream &,vector3d);
};
vector3d::vector3d(): x(0),y(0),z(0) {}
istream& operator >> (istream &in,vector3d &x){
 cout<<"Ingrese x: ";
 in>>x.x;
 cout<<"Ingrese y: ";
 in>>x.y;
 cout<<"Ingrese z: ";
 in>>x.z;
 return in;
}
ostream& operator << (ostream &out,vector3d x){
 out<<setw(5)<<x.x;
 out<<setw(5)<<",";
 out<<setw(5)<<x.y;
 out<<setw(5)<<",";
 out<<setw(5)<<x.z;
 return out;
}
vector3d vector3d::operator + (vector3d &q){
 vector3d aux;
 aux.x=x+q.x;
 aux.y=y+q.y;
 aux.z=z+q.z;
 return aux;
}
double operator % (vector3d &q, vector3d &s){
	double aux=q.x*s.x+q.y*s.y+q.z*s.z;
	return aux;
}
int main(){
	vector3d c1,c2,m;
	cin>>c1>>c2;
	m=c1+c2;
	cout<<m<<endl;
	double	n=c1%c2;
	cout<<n;
}
