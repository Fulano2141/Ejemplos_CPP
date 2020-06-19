// MEDIANTE FUNCIONES MANIPULAR UN ARCVHIVO DE TEXTO
// QUE CONTIENE NUMEROS TELEFONICOS y nombres de varias personas
//    - AÑADIR DATOS AL ARCHIVO
//    - MOSTRAR (LEER) EL CONTENIDO DEL ARCHIVO
//    - BUSCAR UN TELEFONO EN PARTICULAR

# include <iostream>
# include <fstream>
# include <windows.h>
# include <string.h>
using namespace std;
void adicionar();
void mostrar();
void buscar();
void eliminar();
int main()
{
    int op,z;
    cout <<"dd";
    for (;;)
    {
        system("cls");
        cout<<"OPERACIONES BASICAS CON ARCHIVO DE TEXTO"<<endl;
        cout<<"========================================"<<endl;
        cout<<"1. Adicionar nuevos datos"<<endl;
        cout<<"2. Listar datos"<<endl;
        cout<<"3. Buscar telefono"<<endl;
        cout<<"4. Eliminar algun dato"<<endl;
        cout<<"5. Salir"<<endl;
        cout<<"Ingrese una opcion: ";
        cin>>op;
        switch (op)
        {
            case 1:adicionar();
                   break;
            case 2:mostrar();
                   break;
            case 3:buscar();
                   break;
            case 4:eliminar();
                   break;
            case 5:exit(0);break;
        }
    }
    return 0;
}

void adicionar()
{

    fstream a;
    a.open("personas.txt",ios::out|ios::app);
    string fono,nomb;
    int n;
    cout << "Cuantos datos desea añadir al archivo:";
    cin >> n;
    for (int i=1;i<=n;i++)
    {
        cout << "Telefono a ingresar:";
        cin >> fono;
        cout << "Nombre a ingresar:";
        cin >> nomb;
        a<<fono<<";"<<nomb<<endl;  // escribe un nuevo telefono
    }
    system("pause");
    a.close();
}
void mostrar()
{
    fstream a;
    a.open("personas.txt",ios::in|ios::out);  // append
    string dato;
    cout << "\nDatos contenidos en el archivo\n";
    while (a>>dato)
    {
        cout << dato <<endl;
    }
    system("pause");
    a.close();
}


void buscar()
{
    ifstream a;   // input file stream
    a.open("personas.txt");  // append
    char telefbuscar[20],telef[20];
    cout << "Telefono a buscar:";
    cin >> telefbuscar;
    int aux=0;
    while (a>>telef)
    {
        char *t=strtok(telef,";");
        char *n=strtok(NULL,";");
        if (strcmp(t,telefbuscar)==0)
            { cout << "Dato encontrado\n";
              cout << "El nombre corresponde a :"<< n <<endl;
              aux=true;
              break;
            }
    }
    if (aux==0)
        cout << "Telefono inexistente\n";
    system("pause");
    a.close();
}
void eliminar()
{
    ifstream a;
    ofstream b; // input file stream
    a.open("personas.txt");  // append
    b.open("auxiliar.txt");  // append
    char telim[20],telef[20];
    cout << "Telefono a eliminar:";
    cin >> telim;
    int aux=0;
    while (a>>telef)
    {
        char *t=strtok(telef,";");
        char *n=strtok(NULL,";");
        if (strcmp(t,telim)!=0)
            {
              b<<t<<";"<<n<<endl;
            }
    }
    a.close();
    b.close();
    system("del personas.txt");
    system("ren auxiliar.txt personas.txt");
    system("pause");
}



