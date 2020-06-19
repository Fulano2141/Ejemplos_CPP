// Sobrecarga de operadores
// Caso Operaciones con fracciones
#include<iostream>
#include<iomanip>
using namespace std;
class fraccion
{
 int den,num;
 public:
 fraccion();
 fraccion operator + (fraccion &);
 fraccion operator * (fraccion &);
 friend istream& operator >> (istream &,fraccion &);
 friend ostream& operator << (ostream &,fraccion);
};

fraccion::fraccion(): den(0),num(0) {} // Lista de inicializacion

istream& operator >> (istream &in,fraccion &x)
{
 cout<<"Ingrese el numerador: ";
 in>>x.num;
 cout<<"Ingrese el denominador: ";
 in>>x.den;
 if(x.den==0)
    {cout << "Error"<<endl;exit(1);}
  // x.den=1;
  // cout<<endl;}
 return in;
}

ostream& operator << (ostream &out,fraccion x)
{
 out<<setw(5)<<x.num<<endl;
 out<<setw(7)<<"____"<<endl;
 out<<setw(5)<<x.den<<endl;
 return out;
}

fraccion fraccion::operator + (fraccion &x)
{
 fraccion aux;
 int m;
 aux.den=m=den*x.den;
 aux.num=((m/den)*num)+((m/x.den)*x.num);
 return aux;
}

fraccion fraccion::operator * (fraccion &x)
{
 fraccion aux;
 aux.num=num*x.num;
 aux.den=den*x.den;
 return aux;
}

int main()
{
 fraccion a,b,c,d,m,s;
 cout<<"Un maximo de 4 fracciones\n";
 int menu;
 cout<<"Cuantas fracciones desea operar?"<<endl<<"Ingrese 0 para salir"<<endl;
 cin>>menu;
 switch(menu)
  { case 0: exit(1);
   case 1: cin>>a>>b;
    s=a+b;
    m=a*b;
    cout<<"\nLa suma es "<<endl<<s<<"\n\n"<<"La multiplicacion es "<<endl<<m;
    break;
   case 2:
    cin>>a>>b>>c;
    s=(a+b)+c;
    m=(a*b)*c;
    cout<<"\nLa suma es "<<endl<<s<<"\n\n"<<"La multiplicacion es "<<endl<<m;
    break;
   case 3:
    cin>>a>>b>>c>>d;
    s=(a+b)+c+d;
    m=(a*b)*c*d;
    cout<<"\nLa suma es "<<endl<<s<<"\n\n"<<"La multiplicacion es "<<endl<<m;
    break;
  }
 system("pause");
}









