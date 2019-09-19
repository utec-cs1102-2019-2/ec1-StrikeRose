#include <iostream>
using namespace std;

int varGlobal=20;

int main(){
    cout<<"Ejercicio 2"<<endl;
    int* ptrmonton=nullptr;
    int* ptrVar= nullptr;
    int var=20;
    ptrVar=&var;
    ptrmonton= new int;
    *ptrmonton=10;
    delete ptrmonton;
    cout<<*ptrmonton<<endl;
    return 0;}

