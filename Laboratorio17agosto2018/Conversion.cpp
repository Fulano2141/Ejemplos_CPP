// 3.- Convertir minutos en dias, horas y minutos
# include <bits/stdc++.h>
using namespace std;
class Conversion {
    int minutos;
public:
    Conversion(int);
    int fdias();
    int fhoras();
    int fminutos();
};
Conversion::Conversion(int minutos) {
    this->minutos=minutos;
};
int Conversion::fdias() {
        return minutos/1440;
}
int Conversion::fhoras(){
        return (minutos%1440)/60;
}
int Conversion::fminutos() {
        return (minutos%1440)%60;
};

int main ()
{   int m;
    cout << "Ingrese la cantidad de minutos a convertir:";cin>>m;
    Conversion obj(m);
    cout << "Dias:"<<obj.fdias()<<endl;
    cout << "Horas:"<<obj.fhoras()<<endl;
    cout << "Minutos:"<<obj.fminutos()<<endl;

}
