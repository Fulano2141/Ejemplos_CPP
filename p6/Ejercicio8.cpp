// 8.- 	Leer una cadena y verificar si es un palíndromo
#include<string.h>
#include<iostream>
using namespace std;
char cadenaf[50]; int len, n=0;
bool palin(int c){
    if(cadenaf[c]==cadenaf[len-1-c]){
        n++;
        if(n==len/2)
            return true;
        return palin(c+1);
    }
    else
        return false;
}
int main(){
    char cadena[50],*parte;
    cout<<"Introduce un palindromo: "; gets(cadena);
    parte=strtok(cadena," ");                
    strcat(cadenaf,parte);                   
    while((parte=strtok(NULL," "))!= NULL) 
        strcat(cadenaf,parte);               
    len=strlen(cadenaf);
    if(palin(0))
    	cout<<"Es palindromo";
    else 
    	cout<<"No es palindromo";
}
