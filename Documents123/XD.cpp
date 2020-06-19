/* Hallar al area de un cubo */
#include <iostream>
using namespace std;
int arecu(int);
int main()
{	int ar, h;
	cout<<"Ingregese la altura de uno de los lados del cubo "<<endl;
	cin>>h; 
	ar=arecu(h);
	cout<<"Area del cubo: "<<ar<<endl;
	return 0;}
int arecu(int h)
{
	int x;
	x=h*h*6;
	return x;}
