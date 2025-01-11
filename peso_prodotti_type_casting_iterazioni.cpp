#include <iostream>
using namespace std;

int main() {
    float intervallo;
    int tolleranza, valorenominale, errori = 0, contatoretot = 0, pesata, percentualerorri;
    cout << "Inserisci il peso nominale: ";
    cin >> valorenominale;
    cout << "Inserisci la percentuale di tolleranza: ";
    cin >> tolleranza;
    intervallo = (float)valorenominale * tolleranza / 100;
    while (errori < 5) {
        cout << "Inserisci il peso misurato: ";
        cin >> pesata;
        contatoretot++;
        if ((pesata < valorenominale - intervallo) ||
            (pesata > valorenominale + intervallo)) {
            errori++;
        }
    }
    percentualerorri =  (float)errori / contatoretot * 100;
    cout << "la percentuale di pesate fuori norma e' di " << percentualerorri;
    return 0;
}


