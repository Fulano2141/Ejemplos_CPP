/*Almacenar en un archivo binario los siguentes datos de un empleado:

		item
		nombre
		cargo
		salario

        100   Pepe   Jefe de personal   6700
        101   Pepa   Secretaria         7900
        ...........



empleando las funciones:

		adicionar nuevos empleados
		generar un reporte del archivo
		crear un segundo archivo con salarios incrementados:

		salario<1800....            20% de incremento
		1800<=salario< 4500  ...... 15% de incremento
		salario > 4500.......       10% de incremento

generar un reporte que contenga :

			          Planilla
	item	nombre	salario actual 	salario incrementado	diferencia
	123		pepe		2000			2300					300
*/
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
using namespace std;
void adicionar();
void lectura();
void lectura2();
void incrementos();
void planilla();
struct Empleado
{
	int item;
	char nombre[30];
	char cargo[20];
	double salario;
};
int main()
{

     int opc=0;
     do{
     system("cls");
     cout<<"GESTION DE EMPLEADOS"<<endl;
     cout<<"===================="<<endl;
     cout<<"1. Agregar nuevos datos"<<endl;
     cout<<"2. Mostrar datos"<<endl;
     cout<<"3. Crear archivo de incrementos salariales"<<endl;
     cout<<"4. Mostrar archivo de incrementos salariales"<<endl;
     cout<<"5. Desplegar Planilla"<<endl;
     cout<<"5. Salir"<<endl;
     cout<<endl<<"Ingrese una opcion: ";cin>>opc;
     switch (opc)
     {
            case 1:adicionar();break;
            case 2:lectura();break;
            case 3:incrementos();break;
            case 4:lectura2();break;
            case 5:planilla();break;
            case 6:exit(0);
     }

    }while(opc!=5);

	return 0;
}

void adicionar()
{
	ofstream out;
	Empleado e;
	out.open("salarios.bin",ios::out|ios::binary|ios::app);
	int n;
	cout<<"Cuantos empleados agregara al archivo";cin>>n;
	for(int i=0;i<n;i++){
		cout<<"Item:";
		cin>>e.item;     //4 bytes
		cout<<"Nombre:";   // 30 bytes
		cin>>e.nombre;
		cout<<"Cargo:";     //20 bytes
		cin>>e.cargo;
		cout<<"Salario:";
		cin>>e.salario;      // 8 bytes
		out.write((char*)&e,sizeof(e));
	}
	out.close();
	system("pause");
}
void lectura()
{
	fstream in;
	Empleado e;
	in.open("salarios.bin",ios::in|ios::binary);
	int n;
	cout<<"\nReporte"<<endl;
	while(in.read((char*)&e,sizeof(e)))
	{
		cout<<"Item:"<<e.item<<endl;
		cout<<"Nombre:"<<e.nombre<<endl;
		cout<<"Cargo:"<<e.cargo<<endl;
		cout<<"Salario:"<<e.salario<<endl;
		cout << "--------------------\n";

	}
	in.close();
	system("pause");
}
void incrementos()
{
    fstream a,b;
    Empleado k;
    double inc,aux;
    a.open("salarios.bin",ios::in);
    b.open("incrementos.bin",ios::out|ios::binary);
    while(a.read((char*)&k,sizeof(k))){
        if(k.salario<1800){
            inc=0.20;
        }
        else{
            if(k.salario>=1800 && k.salario<4500){
                inc=0.15;
            }
            else{
                inc=0.10;
            }
       }
       aux=k.salario+(k.salario*inc);
       k.salario=aux;
       b.write((char*)&k,sizeof(k));
    }
    a.close();
    b.close();
    system("pause");
}
void lectura2()
{
	fstream in;
	Empleado e1;
	in.open("incrementos2.bin");
	int n;
	cout<<"\nReporte"<<endl;
	while(in.read((char*)&e1,sizeof(e1)))
	{
		cout<<"Item:"<<e1.item<<endl;
		cout<<"Nombre:"<<e1.nombre<<endl;
		cout<<"Cargo:"<<e1.cargo<<endl;
		cout<<"Salario:"<<e1.salario<<endl;

	}
	in.close();
	system("pause");
}


void planilla()
{
    fstream a,b;
    Empleado e1,e2;
    double dif;
    double sum1=0,sum2=0,sum3=0;
    a.open("salarios2.bin",ios::in);
    b.open("incrementos2.bin",ios::in);
    cout<<"===================="<<endl;
    cout<<"Item\tNombre\tSalario actual\t\tSalario nuevo\tDiferencia"<<endl;
    cout<<"====================================================================="<<endl;
    while(a.read((char*)&e1,sizeof(e1)) && b.read((char*)&e2,sizeof(e2)))
    {
        dif=e2.salario-e1.salario;
        cout<<e1.item<<"\t"<<e1.nombre<<"\t\t"<<e1.salario<<"\t\t\t"<<e2.salario<<"\t\t"<<dif<<endl;
        sum1+=e1.salario;
        sum2+=e2.salario;
        sum3+=dif;
    }
    cout<<"===================================================================="<<endl;
    cout<<"Totales\t\t\t"<<sum1<<"\t\t\t"<<sum2<<"\t\t"<<sum3<<endl;

    a.close();
    b.close();
    system("pause");
}

