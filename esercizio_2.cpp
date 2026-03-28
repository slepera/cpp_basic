// Ogni anno in banca sui conti deposito si accumula un interesse
// rispetto al saldo iniziale, l’interesse accumulato si somma
// al saldo precedente e concorrerà al calcolo dell’interesse
// sull’anno successivo. Dato un saldo iniziale,
// la percentuale di interesse, una soglia, stabilire dopo quanti anni si raggiunge la soglia prefissata
#include <iostream>
using namespace std;
int main() {
    float saldo, tasso, importo_maturato, soglia;
    int anni=0;
    cout<<" inserisci il tasso ";
    cin>> tasso;
    cout<<" inserisci il saldo ";
    cin>> saldo;
    cout<<" inserisci la soglia ";
    cin>> soglia;
    do {
        importo_maturato= saldo*tasso/100;
        saldo= importo_maturato+saldo;
        anni++;
        cout<<saldo<<endl;
    }while (saldo<soglia);
    cout<<" dopo "<<anni <<" anni il tuo saldo e' di "<<saldo;








}