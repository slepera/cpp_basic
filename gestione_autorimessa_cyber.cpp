#include <iostream>
using namespace std;

char veicolo_elettrico;
int durata_sosta;
char tipo_veicolo;
float incasso_totale = 0;
int numero_veicoli = 0;

char menu_iniziale();
void inserimento_dati_veicolo();
float costo_sosta();
void stampa_report();

int main() {

    int l = 3;



    float f = 3.14;

    double d = 3.14554554334;



    char scelta;
    float costo_singola_sosta;
    while (true) {
        scelta = menu_iniziale();
        switch (scelta) {
            case 'i':
                inserimento_dati_veicolo();
                costo_singola_sosta = costo_sosta();
                incasso_totale = incasso_totale + costo_singola_sosta;
                cout<<"il costo della sosta e' "<< costo_singola_sosta << " euro"<<endl;
                numero_veicoli++;
                break;
            case 'r':
                stampa_report();
                break;
            case 'x':
                return 0;
        }
    }
}


void stampa_report() {
    cout<<"il numero totale di veicoli e': "<<numero_veicoli<<endl;
    cout<<"l'incasso totale e' "<< incasso_totale << " euro"<<endl;
}


char menu_iniziale() {
    string scelta;
    do {
        cout<<"Cosa vuoi fare?"<<endl;
        cout<<"i per inserire un nuovo veicolo"<<endl;
        cout<<"r per stampare il report degli incassi"<<endl;
        cout<<"x per terminare il programma"<<endl;
        cin>>scelta;
    }while (scelta != "i" && scelta != "r" && scelta!= "x");
    return scelta[0];
}




float costo_sosta() {
    const float TARIFFA_M=5.0, TARIFFA_A=10.0, TARIFFA_F=15.0;
    float tariffa_applicata;
    float costo_sosta;
    switch (tipo_veicolo) {
        case 'm':
        case 'M':
            tariffa_applicata=TARIFFA_M;
            break;
        case 'a':
        case 'A':
            tariffa_applicata=TARIFFA_A;
            break;
        case 'f':
        case 'F':
            tariffa_applicata=TARIFFA_F;
            break;
    }

    if (durata_sosta<=3) {
        costo_sosta=durata_sosta*tariffa_applicata;
    }
    else {
        costo_sosta=(tariffa_applicata*3)+(durata_sosta-3)*tariffa_applicata*0.8;
    }
    if (veicolo_elettrico=='s') {
        costo_sosta = costo_sosta / 2;
    }
    return costo_sosta;
}



void inserimento_dati_veicolo() {

    do {
        cout<<"il veicolo e' elettrico? (s/n)";
        cin>>veicolo_elettrico;
    }while (veicolo_elettrico!='s'&&veicolo_elettrico!='n');

    cout<<"durata sosta:";
    cin>> durata_sosta;
    do {
        cout<<"inserisci tipo veicolo(m,a,f): ";
        cin>> tipo_veicolo;
    }while (tipo_veicolo!='m'&&tipo_veicolo!='a'&&tipo_veicolo!='f');
}