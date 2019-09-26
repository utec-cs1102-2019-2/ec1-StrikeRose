#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

void imprimir(int filas, int columnas, int *matrix[]);
int main(){
    srand(time(nullptr));
    int filas = 0;
    int columnas =0;
    cin>>filas;
    cin>>columnas;
    int **matrix = nullptr;
    matrix = new int*[filas];
    for(int i=0; i<filas; i++){
        matrix[i] = new int[columnas];
        for(int j=0; j<columnas; j++){
            matrix[i][j] = rand()%100;
        }
    }
    imprimir(filas, columnas, matrix);
    delete []matrix;
    matrix = nullptr;
    return 0;
}

void imprimir(int filas, int columnas, int *matrix[]){
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            cout<<matrix[i][j]<<"\t";
        }
        cout<<endl;
    }
}