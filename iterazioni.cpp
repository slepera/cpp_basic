#include <iostream>
using namespace std;
int main() {
    int numero, somma=0;
    const int CONTENITORE = 100;
    while (somma<CONTENITORE){
        cout<<"Inserisci un numero: ";
        cin>>numero;
        if (somma+numero <= CONTENITORE) {
            somma+=numero;
        }
        cout<<"il contenitore e' pieno fino a "<<somma<<endl;
    }
    cout<<"il contenitore e' pieno fino a "<<somma;
}