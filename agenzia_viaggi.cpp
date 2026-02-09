#include <iostream>
using namespace std;

const float PREZZO = 100;

int main() {
    int mese, numero_biglietti;
    float prezzo_singolo_finale, prezzo_totale;

    cout<<"in che mese vuoi partire? ";
    cin>>mese;
    cout<<"quanti biglietti vuoi acquistare? ";
    cin>>numero_biglietti;

    if (mese < 1 or mese > 12) {
        cout<<"ERRORE: hai inserito un mese non valido!!!"<<endl;
        return 0;
    }

    if (mese >=1 && mese <=4) {
        prezzo_singolo_finale = PREZZO * 0.9;
    }else if (mese >=5 and mese <=8) {
        prezzo_singolo_finale = PREZZO;
    }else {
        prezzo_singolo_finale = PREZZO * 1.1;
    }

    prezzo_totale = prezzo_singolo_finale * numero_biglietti;

    if (prezzo_totale>=1000) {
        prezzo_totale = prezzo_totale * 0.95;
    }

    cout<<"il prezzo totale e' di "<<prezzo_totale<<" euro"<<endl;

}