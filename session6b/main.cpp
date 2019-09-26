#include <iostream>
using namespace std;

void tabla(int n, string codigo[], string nombre [], int edad [], char sexo []);
int main() {
    int n=0;
    cout <<"Ingrese la cantidad de alumnos:\n";
    cin >> n;
    string *codigo = new string[n];
    string *nombre = new string[n];
    int *edad = new int [n];
    char *sexo = new char [n];
    for(int i=0; i<n; i++){
        cin >>codigo[i];
        cin >>nombre[i];
        cin >>edad[i];
        cin >>sexo[i];
    }
    tabla(n, codigo, nombre, edad, sexo);

    return 0;
}
void tabla(int n, string codigo[], string nombre [], int edad [], char sexo []){
    for(int i=0; i<n; i++){
        cout<<codigo[i]<<"\t";
        cout<<nombre[i]<<"\t";
        cout<<edad[i]<<"\t";
        cout<<sexo[i]<<"\t";

    }
}