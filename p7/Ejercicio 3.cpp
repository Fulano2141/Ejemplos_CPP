/* 3.-  Un archivo de texto contiene los datos de productos que comercializa una empresa farmacéutica, estos son:
-	El código del producto, el nombre del medicamento, el tipo, el stock, el precio unitario de venta, 
	la fecha de expiración (emplear tokens para separar campos)
	Ejemplo:
	191274 ; Paracetamol ; Gotas ; 100 ;  45.5 ; 12/10/2015
	Realizar mediante funciones:
		"	Añadir nuevos productos al archivo
		"	Reporte de todos los productos
		"	Dar de baja a los productos que hayan vencido 
		"	Reporte del precio total de los productos almacenados
		Código		Nombre Tipo		Precio de venta	Stock							Precio total por producto
		129819		Ibuprofeno			Jarabe	    60.0                            50                     300.0
        191274		Paracetamol  		Gotas		45.5		    				100                     455.0
		Total General:																						755.0 */		
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
void crear();
void lectura();
void eliminar();
struct Datosd{
	float Cod;
	char Nombre[20];
	char Tipo[20];
	float Precio;
	float Stock;
	char Fecha[10];
};
using namespace std;
int main(){
	int opc=10;
     do{
     system("cls");
     cout<<"=================================="<<endl;
     cout<<"1. Agregar o crear nuevos datos"<<endl;
     cout<<"2. Mostrar datos"<<endl;
     cout<<"3. Borrar los productos vencidos"<<endl;
     cout<<"0. Salir"<<endl;
     cout<<endl<<"Ingrese una opcion: ";cin>>opc;
     switch (opc){
            case 1:crear();break;
            case 2:lectura();break;
            case 3:eliminar();break;
            case 0:exit(0);
     }
    }while(opc!=0);
    return 0;
}
void crear(){
	system("cls");
	ofstream out;
	Datosd e;
	out.open("Productos.bin",ios::app|ios::binary);
	int n;
	cout<<"Cuantos usuarios agregara al archivo: ";
	cin>>n;
	for(int i=0;i<n;i++){
    	cout<<"Codigo: ";
		cin>>e.Cod;
		cout<<"Nombre del producto: ";
		cin>>e.Nombre;		
		cout<<"Tipo: ";   
		cin>>e.Tipo;		
		cout<<"Precio: ";   
		cin>>e.Precio;
		cout<<"Stock: ";   
		cin>>e.Stock;
		cout<<"Fecha de caducidad (DD/MM/AA):";
		cin>>e.Fecha;
		out.write((char*)&e,sizeof(e));
		cin.clear();
	}
	out.close();
}
void lectura(){
	ifstream in;
	Datosd x;
	int i=1,z=13,w,v=0;
	in.open("Productos.bin",ios::binary);
	cout<<"   "<<"Codigo"<<setw(z)<<"Nombre"<<setw(z)<<"Tipo"<<setw(z)<<"Precio"<<setw(z)<<"Stock"<<setw(z)<<"Total"<<endl;
	while(in.read((char*)&x,sizeof(x))){
		w=x.Precio*x.Stock;
		cout<<i<<".-"<<x.Cod<<setw(z)<<x.Nombre<<setw(z)<<x.Tipo<<setw(z)<<x.Precio<<setw(z)<<x.Stock<<setw(z)<<w<<endl;  
		i++;
		v+=w; 
	}
	cout<<setw(z)<<"Total General"<<setw(61)<<v<<endl;
	in.close();
	system("pause");
}
void eliminar(){
    ifstream a;
    ofstream b;
    Datosd x;
    a.open("Productos.bin");  // append
    b.open("auxiliar.bin");  // append
    char telim[20],telef[20];
    int dia,mes,ano;
    cout<<"Fecha actual:";
    cout<<"Dia: ";cin>>dia;cout<<"Mes: ";cin>>mes;cout<<"Anio: ";cin>>ano;
    int aux=0;
    while (a.read((char*)&x,sizeof(x))){
        char *d=strtok(x.Fecha,"/");
        int di=atoi(d);
        char *m=strtok(NULL,"/");
        int me=atoi(m);
        char *ang=strtok(NULL," ");
        int an=atoi(ang);
        if (an>=ano and me>=mes){
        	if(di>=dia)
              b.write((char*)&x,sizeof(x));
            }   
    }
    a.close();
    b.close();
    system("del Productos.bin");
    system("ren auxiliar.bin Productos.bin");
    system("pause");
}

