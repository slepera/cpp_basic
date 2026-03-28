#include<iostream>
using namespace std;
int main() {
    const int DIM=10;
    int numeri[DIM];
    for (int i=0; i<DIM; i++) {
        cout<<"Inserire un numero";
        cin>>numeri[i];
    }
    for (int i=0; i<DIM; i++) {
        if (numeri[i]!=numeri[DIM-i-1]) {
            cout<<"Sequenza non palindroma";
            return 0;
        }
    }
    cout<<"Sequenza palindroma";
    return 0;
}