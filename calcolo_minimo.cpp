#include <iostream>
using namespace std;
int main() {
    const int MAX_VOTO=10;
    float voto, voto_minore;
    int voti_totali=0;
    voto_minore=MAX_VOTO;
    do {
        voti_totali++;
        cout<<"inserisci un voto ( inserisci -1 se vuoi terminare la serie): ";
        cin>>voto;
        if (voto<voto_minore and voto>=0) {
            voto_minore=voto;
        }
    } while (voto>=0);
    if (voti_totali==1) {
        cout<<"non hai inserito voti";
    }else {
        cout<<"il voto minore e' "<<voto_minore;
    }
}
// Created by Salvatore on 09/12/2025.
//