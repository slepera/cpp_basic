#include <iostream>
using namespace std;

int main() {
    int base, altezza;
    cout<<"inserisci la base: ";
    cin>>base;
    cout<<"inserisci l'altezza: ";
    cin>>altezza;

    for (int i = 0; i < altezza; i++) {
        for (int j = 0; j < base; j++) {
            cout<<" * ";
        }
        cout<<endl;
    }
}