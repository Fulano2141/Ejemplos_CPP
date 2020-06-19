//  Archivos Binarios
// Programa que escribe un archivo binario con numeros
// al azar y luego lee el mismo, se han creado dos funciones
// para las acciones respectivas
# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <time.h>
using namespace std;
void write(); // FUNCION PARA ESCRIBIR UN ARCHIVO BINARIO
void read();   // FUNCION PARA LEER UN ARCHIVO BINARIO
main()
{
   write();
   read();
   system("pause");
}

void write()
{
  fstream f1;
  srand(time(NULL));
  int r;  // variable donde se almacena el numero al azar
  int n;  // el numero de valores aleatorios
  // en la siguiente linea se abre el archivo con el nombre "azar.dat"
  // se indica que es de escritura (out) y tambien que es binario (binary)
  // opcionalmente se puede añadir mas datos con cada nueva ejecucion
  f1.open("azar1.bin",ios::out|ios::binary|ios::app);
  cout << "Cuantos nuevos registros:";cin >> n;
  for (int i=1;i<=n;i++)
  { r = rand()%999+100;
   // La orden (write)escribe el dato (r) en el archivo en formato binario
   // (char *) le indica que se debe guardar la direccion(&) 
   // del dato como cadena con el tamaño especificado por sizeof
    f1.write((char*)&r,sizeof(r)); 
  }
  f1.close();  // Se cierra el archivo
  cout << "Archivo creado"<<endl;
}
void read()
{ fstream f2;
  // Se abre el archivo para lectura
  f2.open("azar1.bin",ios::in|ios::binary);
  int c;  
  // en la variable c se guardara cada dato leido
  // El siguiente ciclo lee el valor del archivo
  // la orden read se ocupa de ello, y como en la escritura, 
  // el compilador debe saber que se lee una cadena (char *) 
  // de una direccion c y de un tamaño (en bytes) determinado
 //  hasta alcanzar EOF (End Of File)
   while (f2.read((char*)&c,sizeof(c)))
  {
      cout << c << endl;
  }
  cout << "Archivo leido"<<endl;
  f2.close();
 }
