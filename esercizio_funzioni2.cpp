#include <iostream>
#include <optional>
using namespace std;
int secondi (int ore,int minuti,int sec) {
    int s;
    s=sec+minuti*60+ore*3600;
    return s;
}
int conta_divisori (unsigned int n) {
    int contatore=0;
    for (int i=2;i<n;i++) {
        if (n % i==0) {
            contatore ++;
        }
    }
    return contatore;
}

int main() {

    int numero,divisori;
    cout<<"inserisci un numero: ";
    cin>>numero;
    divisori=conta_divisori(numero);
    cout<<"il numero "<<numero<<" ha "<<divisori<<" divisori";

    // int ore,minuti,s;
    // cout<<"inserisci le ore: ";
    // cin>>ore;
    // cout<<"inserisci i minuti: ";
    // cin>>minuti;
    // cout<<"inserisci i secondi: ";
    // cin>>s;
    // int n_sec=secondi(ore,minuti,s);
    // cout<<"ci sono "<<n_sec<<" secondi";



}