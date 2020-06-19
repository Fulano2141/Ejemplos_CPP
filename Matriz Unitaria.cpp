#include<iostream>
#include<iomanip>
using namespace std;
class Matriz{
    int x, unit[10][10];
    public:
    Matriz();
    friend istream& operator >> (istream &,Matriz &);
    friend ostream& operator << (ostream &,Matriz);
};
Matriz::Matriz(): x(0){}
istream& operator >> (istream &in,Matriz &q){
    cout<<"Ingrese la dimension: ";
    in>>q.x;
    for(int i=0;i<q.x;i++)
        for(int j=0;j<q.x;j++){
            if(i==j){
                q.unit[i][j]=1;
            }else
                q.unit[i][j]=0;
        }
 return in;
}
ostream& operator << (ostream &out,Matriz s){
    for (int i=0;i<s.x;i++){
        out<<endl;
        for (int j=0;j<s.x;j++){
            out<<s.unit[i][j];
        }
    }
    return out;
}
int main(){
    Matriz z;
    cin >>z;
    cout << "Matriz nxn: "<<z<<endl;
}
