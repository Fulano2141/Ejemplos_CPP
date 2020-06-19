/* 	2-. Dados 2 arreglos constantes de igual tamaño, 
obtener el producto escalar de ambos arreglos  */

#include<iostream>
int producto(int[], int[] );
using namespace std;
int main(){
	int n, A[5]={1,2,3,4,5},B[5]={5,4,3,2,1};
	n=producto(A,B);
	cout<<"El producto escalar es: "<<n;
} 
int producto(int A[5], int B[5]){
	int n = 0;
	for(int i = 0; i<5 ; i++){
		n = n + (A[i] * B[i]);
	}
	return n;
}	
