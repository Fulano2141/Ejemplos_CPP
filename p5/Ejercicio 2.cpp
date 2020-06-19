/* 2.- Generar la matriz espiral para un orden n :
		Sea n=3:
		1	2   3    
		8   9   4         
        7   6   5
	*/
#include <iostream> 
#include <vector>
void rotar(int &, int&);
using namespace std;  
int main(){
	int n; 
	cout<<"Ingrese el tamano de la matriz "<<endl;
	cin>> n; 
    vector<vector<int> > v (n, vector<int>(n, 0)); 
    int x=-1, y=0, dx=1, dy=0; 
    for(int i=1;i<=n*n;++i){
	    if(x+dx==n or y+dy==n or x+dx==-1 or y+dy==-1 or v[x+dx][y+dy]!=0) 
        rotar(dx, dy); 
        x+=dx; 
        y+=dy; 
        v[x][y]=i; 
    }
    for(int i=0;i<n;i++){ 
        for(int j=0;j<n;j++) 
            cout<<v[j][i]<<'\t'; 
        cout<<endl; 
    } 
} 
void rotar(int &dirx, int &diry) { 
    if(dirx==1 and diry==0) { 
        dirx=0; 
        diry=1; 
    } else if(dirx==0 and diry==1){ 
        dirx=-1; 
        diry=0; 
    } else if(dirx==-1 and diry==0){ 
        dirx=0; 
        diry=-1; 
    } else if(dirx==0 and diry==-1){ 
        dirx=1; 
        diry=0; 
    } 
} 
