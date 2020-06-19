 // Mediante el empleo de constructores determinar el volumen de una caja
# include <iostream>
using namespace std;
class Caja1 {
    double longitud, anchura, altura;
public:
    Caja1(double,double,double);
    double volumen();
};
Caja1::Caja1 (double longitud, double anchura, double altura) {
    this->longitud = longitud;
    this->anchura = anchura;
    this->altura = altura;
};
//:: OPERADOR DE AMBITO
double Caja1:: volumen () {
        return longitud * anchura * altura;
};
int main ()
{   double l1,a1,h1;
    cout << "Ingrese la longitud de una paralelepido:";cin >> l1;
    cout << "Ingrese el ancho un paralelepido:";cin >> a1;
    cout << "Ingrese la laltura de un paralelepido:";cin >> h1;
    Caja1 p(l1,a1,h1);
    //m(10,6,20),g(20,10,30);
    cout << "El volumen de la caja es: " << p.volumen()<< '\n';
    //cout << "El volumen de la caja mediana es: " << m.volumen()<< '\n';
    //cout << "El volumen de la caja grande es: " <<  g.volumen()<< '\n';
}
