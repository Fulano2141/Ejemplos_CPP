#include <iostream>

using namespace std;

int main()
{
    double a[20];
for(int i=0;i<20;i++){
a[i]=i+1;
cout<<"dato ["<<i<<"]="<<a[i]<<"direccion"<<&a[i]<<endl;

}
    return 0;
}
