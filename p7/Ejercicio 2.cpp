/* 2.- Un archivo de texto contiene la cedula, el apellido paterno y el nombre de un grupo de personas 
	(separados por un token), realizar mediante funciones:
-	Añadir nuevos datos al archivo
-	Lectura del archivo 
-	Copiar a un segundo archivo los datos de las personas que tienen cedulas que provienen del interior del país
-	Buscar a una persona por número de cedula y desplegar sus datos. */
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
#include<iomanip>
void crear();
void lectura();
void lectura2();
void nacionales();
void buscar();
using namespace std;
struct Datosd{
	char CI[15];
	char Pro[5];
	char AP[20];
	char AM[20];
	char Nom[20];
};
int main(){
	int opc=10;
     do{
     system("cls");
     cout<<"===================="<<endl;
     cout<<"1. Agregar o crear nuevos datos"<<endl;
     cout<<"2. Mostrar datos"<<endl;
     cout<<"3. Mostrar solo personas nacionales"<<endl;
     cout<<"4. Buscar una persona "<<endl;
     cout<<"0. Salir"<<endl;
     cout<<endl<<"Ingrese una opcion: ";cin>>opc;
     switch (opc){
            case 1:crear();break;
            case 2:lectura();break;
            case 3:nacionales();lectura2();break;
            case 4:buscar();break;
            case 0:exit(0);
     }
    }while(opc!=0);
    return 0;
}
void crear(){
	ofstream out;
	Datosd e;
	out.open("DatosPers.bin",ios::app|ios::binary);
	int n;
	cout<<"Cuantos usuarios agregara al archivo: ";
	cin>>n;
	for(int i=0;i<n;i++){
    	cout<<"Celula de identidad: ";
		cin>>e.CI;
		cout<<"Procedencia en siglas: ";
		cin>>e.Pro;		
		cout<<"Apellido Paterno: ";   
		cin>>e.AP;		
		cout<<"Apellido Materno: ";   
		cin>>e.AM;
		cout<<"Nombres:";   
		cin>>e.Nom;
		out.write((char*)&e,sizeof(e));
		cin.clear();
	}
	out.close();
}
void lectura(){
	ifstream in;
	Datosd x;
	int i=1,z=19;
	in.open("DatosPers.bin",ios::binary);
	cout<<" "<<setw(z)<<"Celula de identidad"<<setw(z)<<"Apellido Paterno"<<setw(z)<<"Apellido Materno"<<setw(z-3)<<"Nombre"<<endl;
	while(in.read((char*)&x,sizeof(x))){
		cout<<i<<setw(z)<<x.CI<<"-"<<x.Pro<<setw(z)<<x.AP<<setw(z)<<x.AM<<setw(z)<<x.Nom<<endl;  
		i++; 
	}
	in.close();
	system("pause");
}
void nacionales(){
	ifstream G;
	G.open("DatosPers.txt",ios::binary);
	ofstream F;
	F.open("Nacionales.bin",ios::binary);
	Datosd e;
	int z=19,i=1;
	char Y;
	while  (G.read((char*)&Y,sizeof(Y))){
		if(strtok(e.Pro,"LP")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"OR")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"PT")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"BN")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"SC")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"CB")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"TJ")==0)
			F.write((char*)&e,sizeof(e));
		if(strtok(e.Pro,"CQ")==0)
			F.write((char*)&e,sizeof(e));
	}
	G.close();
	F.close();
}
void lectura2(){
	ifstream F;
	F.open("Nacionales.bin",ios::binary);
	Datosd e;
	int z=19,i=1;
	cout<<" "<<setw(z)<<"Celula de identidad"<<setw(z)<<"Apellido Paterno"<<setw(z)<<"Apellido Materno"<<setw(z-3)<<"Nombre"<<endl;
	while(F.read((char*)&e,sizeof(e))){
		cout<<i<<setw(z)<<e.CI<<"-"<<e.Pro<<setw(z)<<e.AP<<setw(z)<<e.AM<<setw(z)<<e.Nom<<endl;  
		i++; 
	}
	F.close();
	system("pause");
}
void buscar(){
	ifstream a;   
    a.open("DatosPers.bin",ios::binary);  // append
    char telefbuscar[20];
    cout << "Carnet de identidad a buscar:";
    cin >> telefbuscar;
    Datosd e;
    int aux=0,z=19,i=1;
    while (a.read((char*)&e,sizeof(e))){
        if (strcmp(e.CI,telefbuscar)==0){ 
		cout << "Dato encontrado\n";
        cout<<" "<<setw(z)<<"Celula de identidad"<<setw(z)<<"Apellido Paterno"<<setw(z)<<"Apellido Materno"<<setw(z-3)<<"Nombre"<<endl;
        cout<<i<<setw(z)<<e.CI<<"-"<<e.Pro<<setw(z)<<e.AP<<setw(z)<<e.AM<<setw(z)<<e.Nom<<endl;  
        aux=20;
        break;
    	}
    }
    if (aux==0)
        cout << "Persona inexistente\n";
    system("pause");
    a.close();
}
