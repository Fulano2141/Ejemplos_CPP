#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
      int a[10][10][10][10]={};
      for(int i=0;i<10;i++){
      	for(int j=0;j<10;j++){
      		for(int k=0;k<10;k++){
      			for(int l=0;l<10;l++){
				  cout<<"dato= "<<i<<","<<j<<","<<k<<","<<l<<"\tdireccion = "<<&a[i][j][k][l]<<" bytes"<<endl;
				}
			}
		  }
	  }           
      system("pause");
}

