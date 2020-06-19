#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
      int a[5][3][4]={};
      for(int i=0;i<5;i++){
      	for(int j=0;j<3;j++){
      		for(int k=0;k<4;k++)
      			  cout<<"dato= "<<i<<","<<j<<","<<k<<"\tdireccion = "<<&a[i][j][k]<<" bytes"<<endl;
		  }
	  }           
      system("pause");
}

