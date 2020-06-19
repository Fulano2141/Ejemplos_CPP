// guardar en un archivo binario numeros de loteria
//   (1000-9999)
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
void crear();
void lectura();
using namespace std;
int main()
{
    crear();
    lectura();
}

void crear()
{
	ofstream out;
	out.open("loteria.bin",ios::out|ios::binary|ios::app);
	int n;
	cout<<"Cuantos numeros de loteria agregara al archivo";
	cin>>n;
	int LI=100,LS=999;
	for(int i=0;i<n;i++){

        int x=rand()%(LS-LI+1)+LI;
		out.write((char*)&x,sizeof(x));
	}
	out.close();
}

void lectura()
{
	fstream in;
	in.open("loteria.bin",ios::in|ios::binary);
	int x;
	cout<<"\nReporte\n"<<endl;
	while(in.read((char*)&x,sizeof(x)))
	{
        cout << x << endl;
	}
	in.close();
	system("pause");
}
