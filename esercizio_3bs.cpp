#include <iostream>
#include <ctime>
using namespace std;

float calcola_costo_sosta(int ore, char tipo_veicolo) {
    const float TARIFFA_M=5.0;
    const float TARIFFA_A=10.0;
    const float TARIFFA_F=15.0;
    float tariffa;
    float costo;
    switch (tipo_veicolo) {
        case 'm':
            tariffa = TARIFFA_M;
            break;
        case 'a':
            tariffa = TARIFFA_A;
            break;
        case 'f':
            tariffa = TARIFFA_F;
            break;
    }

    if (ore>3) {
        costo = 3 * tariffa + (ore - 3) * tariffa * 0.7;
    }else {
        costo = ore * tariffa;
    }
    return costo;
}


int main() {

    int numero_pizze;
    int numero_persone;

    float pizze_per_persona;

    cout<<"inserisci il numero di pizze"<<endl;
    cin>>numero_pizze;
    cout<<"inserisci il numero di persone";
    cin>>numero_persone;

    pizze_per_persona = (float)numero_pizze / numero_persone;

    cout<<"ad ognuno spettano "<<pizze_per_persona<<" pizze"<<endl;



}