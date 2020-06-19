//  Archivos Binarios
// Programa para escribir un archivo binario 
// que contiene:
// Codigo del producto, nombre , precio por unidad, stock

# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <time.h>
using namespace std;
void write(); // FUNCION PARA ESCRIBIR UN ARCHIVO BINARIO
void read();   // FUNCION PARA LEER UN ARCHIVO BINARIO
//void buscar();
main()
{
   write();
   read();
  // buscar();
   system("pause");
}

void write()
{
  int n;
  int cod;
  char nom[30];
  double pu; long stock;  
  fstream f1("producto1.bin",ios::out|ios::binary|ios::app);
  cout << "Cuantos nuevos productos:";
  cin >> n;
  for (int i=1;i<=n;i++)
  { cout << "Codigo:"; cin >> cod;
    cout << "Nombre:"; cin >> nom;
    cout << "Precio unitario de compra:"; cin >> pu;
    cout << "Stock:"; cin >> stock;
   // La orden (write)escribe el dato (r) en el archivo en formato binario
   // (char *) le indica que se debe guardar la direccion(&) 
   // del dato como cadena con el tamaño especificado por sizeof
    f1.write((char*)&cod,sizeof(cod)); 
    f1.write((char*)&nom,sizeof(nom)); 
    f1.write((char*)&pu,sizeof(pu)); 
    f1.write((char*)&stock,sizeof(stock)); 
  }
  f1.close();  // Se cierra el archivo
  cout << "Archivo creado"<<endl;
}
void read()
{ 
  // Se abre el archivo para lectura
  fstream f2("producto1.bin",ios::in);
  int cod;
  char nom[30];
  double pu; long stock;  
  while (f2.read((char*)&cod,sizeof(cod)))
  {  f2.read((char*)&nom,sizeof(nom));
     f2.read((char*)&pu,sizeof(pu));
     f2.read((char*)&stock,sizeof(stock));
     cout << "Codigo: "<<cod<<endl;
     cout << "Nombre: "<<nom<<endl;
     cout << "Precio: "<<pu<<endl;
     cout << "Stock: "<<stock<<endl;
  
  }
  cout << "Archivo leido"<<endl;
  f2.close();
 }
