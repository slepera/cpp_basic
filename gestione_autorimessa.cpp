#include <iostream>
using namespace std;

int main() {
    const float TARIFFA_M=5.0, TARIFFA_A=10.0, TARIFFA_F=15.0;
    float tariffa_applicata;
    float costo_sosta;
    int durata_sosta;
    char tipo_veicolo;
    bool veicolo_elettrico;
    cout<<"durata sosta: ";
    cin>> durata_sosta;
    cout<<"inserisci tipo veicolo(m,a o f): ";
    cin>> tipo_veicolo;
    if (tipo_veicolo=='m') {
        tariffa_applicata=TARIFFA_M;
    } else if (tipo_veicolo=='a') {
        tariffa_applicata=TARIFFA_A;
    }else if (tipo_veicolo=='f') {
        tariffa_applicata=TARIFFA_F;
    }else {
        cout<<"veicolo non ammesso";
        return 0;
    }
    if (durata_sosta<=3) {
        costo_sosta=durata_sosta*tariffa_applicata;
    }
    else {
        costo_sosta=(tariffa_applicata*3)+(durata_sosta-3)*tariffa_applicata*0.8;
    }
    cout<<"il costo finale e' "<< costo_sosta << " euro";



}