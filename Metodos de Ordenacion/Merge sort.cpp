# include <iostream>
# include <conio.h>
void mergeSort(float A[], float aux[], int inicio, int final);
void merge(float A[],  float aux[], int inicio, int mitad, int final);
using namespace std;
int main(){
    int n, i;
	cout<<"Ingrese la dimension del arreglo:";
	cin>>n;
	float A[n], auxArray[n];
    cout<<endl;
	 for(i=0;i<=n-1;i++){
		  cout<<"Elemento "<<i+1<<":";
		  cin>>A[i];
	    }
     mergeSort(A,auxArray,0,n-1);
     cout<<endl;
     cout<<"Ordenando por Merge Sort:";
     cout<<endl;
     for(i=0;i<=n-1;i++){
		   cout<<endl<<A[i];
		  }
	return 0;
}
void mergeSort( float A[],  float aux[], int inicio, int final){
	int mitad;
	if(final > inicio){
		mitad = (final + inicio) / 2;
		mergeSort(A, aux, inicio, mitad);
		mergeSort(A, aux, mitad+1, final);
		merge(A, aux, inicio, mitad+1, final);
	}
}
void merge( float A[], float aux[], int inicio, int mitad, int final){
	int i, inicio_end, num_elementos, aux_pos;
	inicio_end = mitad - 1;
	aux_pos = inicio;
	num_elementos = final - inicio + 1;
    while((inicio <= inicio_end) && (mitad <= final)){
    	if(A[inicio] <= A[mitad]){
    		aux[aux_pos] = A[inicio];
			aux_pos = aux_pos + 1;
			inicio = inicio + 1;
		}
		else{
			aux[aux_pos] = A[mitad];
			aux_pos = aux_pos + 1;
			mitad = mitad + 1;
    	}
	}
	while(inicio <= inicio_end){
		aux[aux_pos] = A[inicio];
		inicio = inicio + 1;
		aux_pos = aux_pos + 1;
	}
	while(mitad <= final){
		aux[aux_pos] = A[mitad];
		mitad = mitad + 1;
		aux_pos = aux_pos + 1;
		}
        for(i=0; i <= num_elementos; i++){
        	A[final] = aux[final];
		    final = final - 1;
	        }
}
