#include <iostream>
using namespace std;

int main() {
    cout << "index" <<"\t" << "Value"<<"\t Mem adress"<<endl;
    int A[7] = {3, 45, 21, 8, 2, 6, 7};
    for(int i=0; i < 7 ; i++){
        cout<< i << "\t" << A[i] <<"\t"<<&A[i] <<endl;
    }
    return 0;
}