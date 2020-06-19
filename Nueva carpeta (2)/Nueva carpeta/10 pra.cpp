// 10.- Escribir un programa para determinar la cantidad de vocales que tiene un texto leído desde el teclado.
# include <iostream>
# include <cstring>
using namespace std;
main()
{
  int c1=0;
  char u[40];
  cout<<"Ingrese el texto "<<endl;
  gets(u);
  for (int i=0;i<strlen(u);i++)
 {


  switch (u[i])

  {
      case 'a': c1++;break;
      case 'e': c1++;break;
      case 'i': c1++;break;
      case 'o': c1++;break;
      case 'u': c1++;break;


  }
 }
  cout <<"El texto tiene vocales: "<<c1<<endl;
  return 0;
}
