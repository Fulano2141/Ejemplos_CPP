// Archivos Binarios
// Programa para escribir un archivo binario
// que contiene:
// Codigo del producto, nombre , precio por unidad, stock
# include <stdlib.h>
# include <iostream>
# include <fstream>
# include <time.h>
using namespace std;
struct Producto
{
  int cod;
  char nom[30];
  double pu;
  long stock;
};

void write(); // FUNCION PARA ESCRIBIR UN ARCHIVO BINARIO
void read();   // FUNCION PARA LEER UN ARCHIVO BINARIO
void buscar(); // por codigo
void copiar(); // copiar un archivo de texto productos
// con stocks iguales a 0
// de la forma: codigo;nombre;......

main()
{
  int opc=0;
  for (;;)
  {
  system("cls");
  cout << "     MENU PRINCIPAL DE OPCIONES"<<endl;
  cout << "===================================="<<endl;
  cout << "1.- Añadir nuevos productos"<<endl;
  cout << "2.- Leer productos archivados"<<endl;
  cout << "3.- Buscar algun producto por su codigo"<<endl;
  cout << "4.- Crear archivo con productos con stock agotado"<<endl;
  cout << "5.- Fin"<<endl;
  cout << "Que opcion desea operar: ";cin >> opc;
  switch (opc)
  {
      case 1: write();break;
      case 2: read();break;
      case 3: buscar();break;
      case 4: copiar();break;
      case 5: exit(0);
  }
   cout << "\n";
   system("pause");
  }
}

void write()
{
  Producto p;  // Declaracion de una variable tipo estructura
  int n;
  fstream f1("producto2.bin",ios::out|ios::binary|ios::app);
  cout << "Cuantos nuevos productos:";
  cin >> n;
  for (int i=1;i<=n;i++)
  { cout << "Codigo:"; cin >> p.cod;
    cout << "Nombre:"; cin >> p.nom;
    cout << "Precio unitario de compra:"; cin >> p.pu;
    cout << "Stock:"; cin >> p.stock;
   // La orden (write)escribe el dato (r) en el archivo en formato binario
   // (char *) le indica que se debe guardar la direccion(&)
   // del dato como cadena con el tamaño especificado por sizeof
    f1.write((char*)&p,sizeof(p));

  }
  f1.close();  // Se cierra el archivo
  cout << "Archivo creado"<<endl;
}
void read()
{
  // Se abre el archivo para lectura
  Producto p;
  fstream f2("producto2.bin",ios::in);
  int cod;
  char nom[30];
  double pu;
  long stock;
  while (f2.read((char*)&p,sizeof(p)))
  {  cout << "Codigo: "<<p.cod<<endl;
     cout << "Nombre: "<<p.nom<<endl;
     cout << "Precio: "<<p.pu<<endl;
     cout << "Stock: "<<p.stock<<endl;
     cout <<"-----------------------------"<<endl;
  }
  cout << "Archivo leido"<<endl;
  f2.close();
 }
void buscar()
{

  Producto p;
  fstream f2("producto2.bin",ios::in);
  int codigo;
  cout << "Codigo a buscar:";cin >> codigo;
  int flag=0;

  while (f2.read((char*)&p,sizeof(p)))
  {
     if (codigo==p.cod)
     {
        cout << "Codigo: "<<p.cod<<endl;
        cout << "Nombre: "<<p.nom<<endl;
        cout << "Precio: "<<p.pu<<endl;
        cout << "Stock: "<<p.stock<<endl;
        flag=1;break;
     }
  }
  if (flag==0)
    cout << "\nProducto inexistente";


  f2.close();
 }
void copiar()
{

  Producto p;
  fstream f1("producto2.bin",ios::in);
  fstream f2("stock0.txt",ios::out|ios::app);

  while (f1.read((char*)&p,sizeof(p)))
  {
     if (p.stock==0)
     {
        f2<<p.cod<<";"<<p.nom<<";"<<p.pu<<";"<<p.stock<<endl;
      }
  }

  cout << "\nArchivo de stock 0 ha sido creado";
  f1.close();
  f2.close();
 }
