// 2. Mediante una función obtener la suma de la serie:

//		4 + 6 + 9 + 13 + 19 + 28 + 42 …… para n términos

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
{   int term=4,sum=0;
    for (int k=1;k<n+1;k++)
    {
        sum=sum+term;
        cout << term<<" ";
        term=(term/2)+term;

    }
    return sum;

}

