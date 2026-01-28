#include<iostream>
using namespace std;
int main () {
    int m, prezzo, numero_biglietti ,prezzo_totale;

    cout<<"Inserisci il mese";
    cin>>m;
    cout<<"inserisci il numero di biglietti";
    cin>>numero_biglietti;

    if (numero_biglietti<1 or numero_biglietti>100) {
        cout<<"Il numero di bigietti inserito non è valido";
        return 0;
    }
    if (m<1 || m>12) {
        cout<<"Il mese inserito non è valido";
        return 0;
    }

    if (m>=1 and m<=4) {
        prezzo=20;
    }
    else if (m>=5 && m<=6) {
        prezzo=50;
    }
    else if (m>=7 && m<=8) {
        prezzo=70;
    }
    else if (m>=9 && m<=10) {
        prezzo=30;
    }
    else {
        prezzo=40;
    }
    prezzo_totale=prezzo * numero_biglietti;
    if (prezzo_totale>=100) {
        float sconto = (float)prezzo_totale/100*10;
        prezzo_totale=prezzo_totale-sconto;
    }
    cout<<" Il prezzo del biglietto e' "<<prezzo<<" euro ";
    cout<<" Il prezzo totale è "<<prezzo_totale<<" euro ";

    return 0;
}