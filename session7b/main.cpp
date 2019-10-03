#include <iostream>
#include <ctime>
using namespace std;
typedef int type_n;
void nuevo(int filas, int columnas, type_n altura, type_n ***matrix);
void imprimir(int filas, int columnas, type_n altura, type_n ***matrix);
int main(){
    srand(time(nullptr));
    type_n i,j,k;
    cin>>i;
    cin>>j;
    cin>>k;
    type_n ***matrix=new type_n**[i];
    nuevo(i,j,k,matrix);
    imprimir(i,j,k,matrix);

}
void nuevo(int filas, int columnas, type_n altura, type_n ***matrix){
    for(int i=0; i < filas; i++){
        matrix[i] = new type_n*[columnas];
        for(int j=0; j < columnas; j++){
            matrix[i][j] = new type_n[altura];
            for (size_t k=0; k<altura; k++){
                matrix[i][j][k]=rand ()%10;
            }
        }
    }
}
void imprimir(int filas, int columnas, type_n altura, type_n ***matrix){
    cout<<endl;
    for(int j=0; j<columnas; j++){
        cout<<"\t  "<<j;
    }
    cout<<endl;
    for(int i=0; i<filas; i++){
        cout<<i<<"|\t";
        for(int j=0; j<columnas; j++){
            for (size_t k=0; k<altura;k++){
                cout<<matrix[i][j][k]<<",";
            }
            cout<<"\t";
        }
        cout<<endl;
    }
}
