// Ejemplo uso cadenas
#include <iostream>
#include <cstring>
using namespace std;
main()
{

  int c1 = 0;
  char u[40] = "Universidad Catolica Boliviana";
  for (int i = 0; i < strlen(u); i++)
  {

    switch (u[i])

    {
    case 'a':
      c1++;
      break;
    }
  }
  cout << c1;
}
