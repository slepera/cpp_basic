#include <iostream>
using namespace std;

const float TARIFFA_M = 5.0;
const float TARIFFA_A = 10.0;
const float TARIFFA_F = 20.0;

int main() {
    char tipo_veicolo, veicolo_elettrico;
    int numero_ore;
    float costo_sosta, tariffa_applicata;

    cout<<"inserisci il tipo di veicolo (m, a, f): ";
    cin>>tipo_veicolo;
    tipo_veicolo = tolower(tipo_veicolo);
    if (!(tipo_veicolo=='m' or tipo_veicolo == 'a' or tipo_veicolo == 'f')) {
        cout<<"ERRORE: veicolo non ammesso!!!";
        return 0;
    }

    cout<<"inserire la durata della sosta in ore: ";
    cin>>numero_ore;

    cout<<"il veicolo e' elettrico? (s/n): ";
    cin>>veicolo_elettrico;

    if (tipo_veicolo=='m'){
        tariffa_applicata = TARIFFA_M;
    }else if (tipo_veicolo=='a') {
        tariffa_applicata = TARIFFA_A;
    }else if (tipo_veicolo=='f') {
        tariffa_applicata = TARIFFA_F;
    }
    costo_sosta = tariffa_applicata * numero_ore;


    if (tolower(veicolo_elettrico)=='s') {
        costo_sosta = costo_sosta * 0.7;
    }

    cout<<"il costo della sosta e': "<<costo_sosta<<" euro."<<endl;


}