#include <iostream>
using namespace std;
int main() {
    int mese;
    int prezzo;
    cout<<"inserisci un mese:"<<endl;
    cin>>mese;
    if (mese < 1 or mese>12) {
        cout<<"Mese non valido";
        return 0;
    }
    if (mese>=1 and mese<=6) {
        prezzo=26;
    }
    else if (mese>=7 and mese<=8) {
        prezzo=54;
    }
    else if (mese>=9 and mese<=11) {
        prezzo=21;
    }
    else {
        prezzo=48;
    }
    cout<<"il prezzo del biglietto e': "<<prezzo;
    return 0;
}