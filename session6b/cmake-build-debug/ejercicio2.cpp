#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int calcular_promedio(int n, int notas[]);
int calcular_mayor(int n, int notas[]);
void imprimir_notas(int n, int notas[], int prom);
int main(){
    srand(time(nullptr));
    int n = 0;
    do{
        cout<<"Ingrese la cantidad de alumnos:";
        cin>>n;
    } while (n<=15);

    int *notas = new int[n];
    for(int i=0; i<n; i++){
        //cin>>notas[i];
        notas[i] = rand()%21;
    }
    int prom = calcular_promedio(n, notas);
    cout<<"Promedio:"<< prom<<endl;
    cout<<"Nota mayor"<<calcular_mayor(n, notas)<<endl;
    //imprimir_notas(n, notas, prom);
    delete []notas;
    notas = nullptr;
    return 0;
}

int calcular_promedio(int n, int notas[]){
    int suma = 0;
    for(int i=0; i<n; i++){
        suma = suma + notas[i];
    }
    return suma/n;
}

int calcular_mayor(int n, int notas[]){
    int mayor = 0;
    for(int i=0 ; i<n; i++){
        if(notas[i] > mayor){
            mayor = notas[i];
        }
    }
    return mayor;
}


void imprimir_notas(int n, int notas[], int prom){
    for(int i=0; i<n; i++){
        if(notas[i] > prom){
            cout<<notas[i]<<endl;
        }
    }
}