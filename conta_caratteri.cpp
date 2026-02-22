#include <iostream>
using namespace std;

int main() {
    string parola;
    char c;
    int contatore=0;
    cout<<"inserisci una frase: "<<endl;
    cin>>parola;
    cout<<"inserisci un carattere: "<<endl;
    cin>>c;

    for (int i=0; i<parola.length(); i++ ) {
        if (parola[i]==c) {
            contatore++;
        }
    }
    cout<<"il carattere "<<c<<" e' contenuto "<<contatore<<" volte in "<<parola;
}