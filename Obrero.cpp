/*
3.- Una empresa paga a sus obreros semanalmente en funcion
a las horas trabajadas por cada uno de ellos y una tarifa
por hora trabajada. Se debe obtener el pago total, considerando
ademas que si existen horas extras (horas > 40) se paga el
50% mas de la tarifa normal.
Agregar finalmente un descuento del 5% para impuestos
al obrero que tiene un total ganado > 3000 Bs.
Mostrar:

            - Codigo
            - Nombre
            - Pago total
            - Descuentos
            - Pago neto  :   Pago total - descuentos
*/
# include <bits/stdc++.h>
using namespace std;
class Obrero{
    int cod;
    string nombre;
    int horast;
    double tarifah;
public:
   Obrero(int,string,int,double);
   double pagototal();
   double descuentos();
   double pagoneto();
   void imprimir();
};

Obrero::Obrero(int cod,string nombre,int horast,double tarifah)
{   this->cod=cod;
    this->nombre=nombre;
    this->horast=horast;
    this->tarifah=tarifah;
}
double Obrero::pagototal()
{
    if (horast>40)
    {   return (horast-40)*tarifah*1.5+40*tarifah;}
     else
     {
        return horast*tarifah;
     }

}

double Obrero::descuentos()
{
    double pt=pagototal();
    if (pt>3000){
        return pt*0.05; }
     else{
        return 0;}
}
double Obrero::pagoneto()
{
    return pagototal()-descuentos();

}
void Obrero::imprimir(){
    cout << "Codigo:"<<cod<<endl;
    cout << "Nombre:"<<nombre<<endl;
    cout << "Pago total:"<<pagototal()<<endl;
    cout << "Descuentos:"<<descuentos()<<endl;
    cout << "Pago neto:"<<pagoneto()<<endl;

}

int main()
{
    Obrero obj1(12345,"Pepe",45,100);
    Obrero obj2(12346,"Carlos",40,50);
    obj1.imprimir();
    obj2.imprimir();
    return 0;
}
