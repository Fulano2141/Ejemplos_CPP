/*1.- Un archivo de texto contiene la siguiente informacion:
                Item;Nombre;Salario
     se debe crear el archivo mediante una funcion, luego
     el archivo debe ser desplegado y finalmente crear un
     segundo archivo que contenga incrementos salariales
     segun la escala:

                Salario < 2000 ...... 10%
                Salario >=2000 pero menor a 5000 .... 7.5%
                Salario >=5000 pero menor a 7500 .... 5%
                Salario > 7500 .............. 2%
*/
# include <fstream>
# include <iostream>
# include <cstring>
# include <cstdio>
# include <cstdlib>
# include <cmath>
using namespace std;
void escribir(char file[]);
void leer(char []);
void incremento(char [],char[]);
int main()
{
    char file1[]="salarios.txt";
    char file2[]="salariosnuevos.txt";
    escribir(file1);
    leer(file1);
    incremento(file1,file2);
    cout << "\nArchivo con incrementos:\n";
    leer(file2);
}
void escribir(char file1[])
{
    fstream out;
    out.open(file1,ios::app|ios::out);
    int n;
    cout << "Cuantos empleados:";
    cin >> n;
    //char total[60],item[8],nombre[30],salario[10];
    string  total,item,nombre,salario;
    for (int i=0;i<n;i++)
    {
        cout <<"Item:";cin >> item;
        cout <<"Nombre:";cin >> nombre;
        cout << "Salario:";cin>> salario;
//        strcat(item,";");
  //      strcat(nombre,";");
    //    strcat(salario,";");
        total=item+";"+nombre+";"+salario+"\n";
        out << total;
        //srtcat(item,";");
        //srtcat(item,";");
        //srtcat(item,";");
    }
    out.close();

}
void leer(char file1[])
{
    fstream in;
    in.open(file1,ios::in);
    string  total;
    //,item,nombre,salario;
    while (in>>total)
    {
        cout <<total<<endl;

    }
    in.close();
}
void incremento(char file1[],char file2[])
{
    fstream in,out;
    in.open(file1,ios::in);
    out.open(file2,ios::out);
    char total[50];
    char *item,*nombre,*salario;
    while (in>>total)
    {
        item=strtok(total,";");
        nombre=strtok(NULL,";");
        salario=strtok(NULL,";");
        float auxsal=atof(salario);
        float inc;
        if (auxsal<2000)
            inc=0.10;
        else
             if (auxsal<5000)
                inc=0.075;
            else
                if (auxsal<7500)
                    inc=0.05;
                else
                    inc=0.02;
       float saln=auxsal+auxsal*inc;
       out <<item<<";"<<nombre<<";"<<saln<<endl;

    }
    in.close();
    out.close();
}
