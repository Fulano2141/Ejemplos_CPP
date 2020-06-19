// nuumero 4
# include <iostream>
using namespace std;
int main()
{
	int n,m;
	cout<<"Ingrese el primer numero  "<<endl;
	cin>>n;
	cout<<"ingrse el segundo numero "<<endl;
	cin>>m;
	if (n>m)
		{ for (n;n>=m;n--)
			cout<<n<<endl; //serie descendente
		}
	else 
		{ for (m;n<=m;n++)
		cout <<n<<endl; // serie ascendente
		}
	return 0;
}



