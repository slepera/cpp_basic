#include <iostream>
using namespace std;



int totale_veicoli;
float totale_incasso;

float costo_singola_sosta(int ore, char tipo_veicolo) {

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


char menu() {
    string scelta;
    do {
        cout<<"cosa vuoi fare? (i - s - x)";
        cin>>scelta;
    }while (scelta.length()!=1&&scelta!="i"&&scelta!="I"
            &&scelta!="s"&&scelta!="S"
            &&scelta!="x"&&scelta!="X");
    return tolower(scelta[0]);
}

void inserimento() {
    int ore;
    char tipo_veicolo;
    float prezzo_singolo;
    cout<<"Inserisci il tipo di veicolo (m moto, a auto, f furgone)";
    cin>>tipo_veicolo;
    if (tipo_veicolo!='m'&&tipo_veicolo!='a'&&tipo_veicolo!='f'){
        cout<<"tipo non ammesso";
        return;
    }
    cout<<"Inserisci la durata";
    cin>>ore;
    prezzo_singolo = costo_singola_sosta(ore, tipo_veicolo);
    cout<<"prezzo singola sosta = "<<prezzo_singolo<<endl;
    totale_incasso=prezzo_singolo+totale_incasso;
    totale_veicoli++;
}

void sommario() {
    cout<<"Totale veicoli: "<<totale_veicoli<<endl;
    cout<<"Totale incasso: "<<totale_incasso<<endl;
}

int main () {
    while (true) {
        char scelta = menu();
        switch (scelta) {
            case 'i':
                inserimento();
                break;
            case 's':
                sommario();
                break;
            case 'x':
                return 0;
        }
    }
}