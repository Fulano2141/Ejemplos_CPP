 // Mediante el empleo de constructores determinar el volumen de una caja
# include <iostream>
using namespace std;
class Caja {
    double longitud, anchura, altura;
public:
    Caja(double,double,double);
    double volumen();
};
Caja::Caja (double longitud, double anchura, double altura) {
    this->longitud = longitud;
    this->anchura = anchura;
    this->altura = altura;
};
//:: OPERADOR DE AMBITO
double Caja:: volumen () {
        return longitud * anchura * altura;
};
int main ()
{
    Caja p(5,4,10),m(10,6,20),g(20,10,30);
    cout << "El volumen de la caja pequeña es: " << p.volumen()<< '\n';
    cout << "El volumen de la caja mediana es: " << m.volumen()<< '\n';
    cout << "El volumen de la caja grande es: " <<  g.volumen()<< '\n';
}
