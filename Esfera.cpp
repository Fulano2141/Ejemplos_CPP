// 2.- Obtener el volumen de una esfera
# include <bits/stdc++.h>
# define pi 3.14159
using namespace std;
class Esfera {
    double radio;
public:
    Esfera(double);
    double volumen();
};
Esfera::Esfera(double radio) {
    this->radio=radio;
};
double Esfera:: volumen () {
        return (4.0/3.0)*radio*radio*pi;
};
int main ()
{   double radio;
    cout << "Ingrese el radio de la esfera:";cin >> radio;
    Esfera obj(radio);
    printf("%.2f",obj.volumen());
    //cout << "El volumen de la esfera es: " <<fixed()<<setprecision(2)<<obj.volumen()<< '\n';

}
