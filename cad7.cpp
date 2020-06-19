// Ejemplo uso cadenas
# include <iostream>
# include <cstring>
using namespace std;
main()
{
   /*
    char u[40]="Universidad Catolica Boliviana";
  int t;
  system("color 4f");
  // Strlen determina la longitud de una cadena
  t=strlen(u);
  //cout << "Longitud de la cadena: ";
  //cout << t << endl;

  char a[30]="Ciencias Exactas";
  char b[30]="Ingenieria";
  char d[30]="Facultad";
  // strcat permite unir cadenas
  strcat(d," de ");
  cout << d << endl;
  strcat(d,a);
  cout << d << endl;
  strcat(d," e ") ;
  cout << d << endl;
  strcat(d,b);
  cout << d << endl;
  char c='E';
  char *p;
  // strchr busca un caracter en una cadena
  // strstr busca una cadena dentro de otra
  p=strchr(a,c);
  // muestra la cadena restante
  cout << p << endl;
  // determina el lugar en el que esta el caracter buscado
  cout << p-a << endl;  // Casting
  char c1[]="Juanito",c2[]="Juanito Perez";
  // strcmp permite comparar cadenas
  if (strcmp(c1,c2)==0)
     cout << "las cadenas son iguales\n";
  else
    cout << "las cadenas no son iguales\n";
  // strtok es un fragmentador de cadenas
  char email[]="jorgito001@hotmail.com";
  char *p1,*p2; // Cadenas de tipo apuntador
  p1=strtok(email,"@"); // Fragmenta cadenas token
  cout << "p1=" << p1<<endl;
  p2=strtok(NULL,"@");
  cout << "p2=" << p2<<endl;
  */
  // strstr busca una cadena en otra y retorna lo restante
  char ejemplo[]="Universidad,Catolica,Boliviana";
  char busca[20]=",";
  char r1[20],r2[20];
  r1=strstr(ejemplo,busca);
  cout << r1 <<endl;
  r2=strstr(r1,busca);
  cout << r2 <<endl;
  cout << "Esta en el lugar:"<<resul << endl;
  //  atoi convierte cadenas en numeros
  //char he[]="17:30";
  //char *h;
  //system("Color b3");
  //cout << he << " hora como cadena" << endl;
  /*
  int hora;
  hora=atoi(he); // convertir una cadena en numero
  cout << hora << " hora como numero" << endl;
  hora=hora+1;
  cout << hora << " esta es la prueba"<<endl;
  */
//  system("pause");
  }
