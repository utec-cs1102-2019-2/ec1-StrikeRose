#include <iostream>
#include <ctime>
#include <vector>
using namespace std;

int main(){
    int n=0;
    cout<<"Ingrese la cantidad de numeros:";cin>>n;
    vector<int> v(n,0);
    for(int i=0; i<n;i++){
        cout<<"ingrese el elemento "<<i<<" :";cin>>v[i];
    }

    for(int i=n-1; i>=0; i-- ){
        cout<<v[i]<<",";
    }
}