#include <iostream>
using namespace std;
typedef double TNumero;
int main (){
    TNumero *pnumero1 = nullptr, *pnumero2 = nullptr;

    pnumero1 = new double;
    pnumero2 = new double;

    cout <<"Numero 1: "; cin >>*pnumero1;
    cout <<"Numero 2: "; cin >>*pnumero2;
    cout <<"\n";
    cout <<"La suma es: "<< *pnumero1 + *pnumero2 <<"\n";
    cout <<"La Diferencia es: "<< *pnumero1 - *pnumero2 <<"\n";
    cout <<"El producto es: "<< *pnumero1 * *pnumero2 <<"\n";
    delete pnumero1;
    delete pnumero2;
    pnumero1=nullptr;
    pnumero2= nullptr;


    return 0;
}
