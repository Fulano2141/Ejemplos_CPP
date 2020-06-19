// Encontrar numeros capicua
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));
    int n, num, a, b, c, j = 0;
    cout << "Ingrese el numero " << endl;
    cin >> n;
    do
    {
        num = 100 + (rand() % 899);
        j++;
        a = num;
        c = 0;
        b = 0;

        while (a != 0)
        {
            b = a % 10;
            a = a / 10;
            c = c * 10 + b;
        }
        if (c == num)
            cout << num << " Es capicua" << endl;
        //else
        //cout<<num << " No es capicua"<<endl;
    } while (n >= j);

    return 0;
}
