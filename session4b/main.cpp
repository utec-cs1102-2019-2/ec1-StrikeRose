#include <iostream>
using namespace std;

int main() {
    int a = 5;
    int *ptr=&a;
    a=8;
    *ptr=10;
    cout<<a<<endl;
    return 0;

}