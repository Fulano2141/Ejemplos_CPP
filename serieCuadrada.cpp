//2.- Mediante una funci�n obtener la suma de la serie:

//		1 - 4 + 9 - 16 + 25 - 36 + �� para n t�rminos

# include <iostream>
using namespace std;
int serie(int);
main()
{
    int n;
    cout << "Limite:";cin >> n;
    cout << "Valor resultante="<<serie(n)<<endl;
    return 0;
}
int serie(int n)
{   int term,sum=0,sig=1;
    for (int k=1;k<=n;k++)
    {
        term=k*k;
        sum=sum+term*sig;
        sig=-sig;

    }
    return sum;

}

