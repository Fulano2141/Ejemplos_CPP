/* crear un archivo que contenga 
	- login
 	- Password
 	ademas 
	-crear el archivo
	-mostrar el archivo
	-simular el acceso al sistema en base al archivo que controle tal accion en no mas de 3 intentos	
*/
#include<iostream>
#include<fstream>
#include<cstdio>
#include<cstdlib>
#include<cstring>
void crear();
void lectura();
void Simular();
using namespace std;
struct Usuar{
	char User[30];
	char Pass[10];
};
int main(){
	int opc=10;
     do{
     system("cls");
     cout<<"===================="<<endl;
     cout<<"1. Agregar o crear nuevos datos"<<endl;
     cout<<"2. Mostrar datos"<<endl;
     cout<<"3. Acceder como un usuario"<<endl;
     cout<<"0. Salir"<<endl;
     cout<<endl<<"Ingrese una opcion: ";cin>>opc;
     switch (opc){
            case 1:crear();break;
            case 2:lectura();break;
            case 3:Simular();break;
            case 0:exit(0);
     }
    }while(opc!=0);
    return 0;
}
void crear(){
	ofstream out;
	Usuar e;
	out.open("Cuentasd.bin",ios::out|ios::binary|ios::app);
	int n;
	cout<<"Cuantos usuarios agregara al archivo: ";
	cin>>n;
	for(int i=0;i<n;i++){
    	cout<<"User:";
		cin>>e.User;
		cout<<"Password:";   
		cin>>e.Pass;
		out.write((char*)&e,sizeof(e));
	}
	out.close();
}
void lectura(){
	fstream in;
	Usuar x;
	in.open("Cuentasd.bin",ios::in|ios::binary);
	while(in.read((char*)&x,sizeof(x))){
        cout<<"User:"<<x.User<<endl;
        cout<<"Password:"<<x.Pass<<endl;
	}
	in.close();
	system("pause");
}
void Simular(){
	system("cls");
	fstream in;
	Usuar x;
	int i=3;
	char Usu[30];
	char passw[10];
	in.open("Cuentasd.bin",ios::in|ios::binary);
	cout<<"Ingrese el usuario y la contrasena "<<endl;
	while(i>0){
		cout<<"Tiene "<<i<<" intentos"<<endl;
    	cout<<"User:";cin>>Usu;
    	cout<<"Password:";cin>>passw;
		while(in.read((char*)&x,sizeof(x))){
        if(strcmp(Usu,x.User)==0 and strcmp(passw,x.Pass)==0){
        		cout<<"Acceso correcto!!"<<endl;
				i=-1;break;}
        else{
        	cout<<"Acceso incorrecto"<<endl;i--;break;}
		}
	}
	in.close();
	system("pause");
}
