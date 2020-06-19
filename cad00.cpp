// Ejemplo uso cadenas
# include <iostream>
# include <cstring>
using namespace std;
int main()
{



  int c1=0;
  char u[100];
  gets(u);
  for (int i=0;i<strlen(u);i++)
 {


  switch (u[i])

  {
      case 'a': c1++;break;

  }
 }
  cout << c1;
}
