#include <iostream>
#include <ctime>
#include <vector>
using namespace std;
void print(vector<int> v);
void clean(vector<int> &v);
vector<int> create(int n);

int main(){
    srand(time(nullptr));
    int n = 0;
    cout<<"Ingrese n";cin>>n;
    vector<int> v = create(n);
    print(v);
    clean(v);
    print(v);
}

vector<int> create(int n){
    vector<int> v(n, 0);
    for(int i=0; i<v.size();i++){
        v[i] = rand()%31;
    }
    return v;
}

void clean(vector<int> &v){
    for(int i=0; i<v.size(); i++){
        if(v[i]%3 == 0){
            v.erase(v.begin()+i);
        }
    }
}

void print(vector<int> v){
    cout<<endl;
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<",";
    }
}





    return 0;
}






















//
// Created by Hyunmi on 3/10/2019.
//

