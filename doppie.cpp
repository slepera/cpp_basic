#include <iostream>
#include <pstl/execution_defs.h>
using namespace std;

int main() {
    string parola;
    int contatore = 0;
    cout<<"inserisci una parola:";
    cin>>parola;
    for (int i = 0; i < parola.size()-1; i++) {
        if (parola[i]==parola[i+1]) {
            cout<<parola[i]<<" e' una doppia!!!"<<endl;
            contatore++;
        }
    }
    cout<<"nella parola "<<parola<<" ci sono "<<contatore<<" doppie";
}