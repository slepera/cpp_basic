#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include "utilities.h"
using namespace std;

float incasso_totale = 0;
int numero_veicoli = 0;

const int DIM_MAX = 100;

int ultima_posizione = 0;

string veicoli[4][DIM_MAX];

char menu_iniziale();
void check_in();
float check_out();
float costo_sosta(int, char);
void stampa_report();


float check_out() {
    string targa;
    string ora_uscita;
    string ora_ingresso;

    int numero_ore;
    cout<<"inserisci la targa: ";
    cin>>targa;
    ora_uscita = current_time_hh_mm();
    for (int i = 0; i < ultima_posizione; i++) {
        if (veicoli[0][i] == targa) {
            ora_ingresso = veicoli[2][i];
            veicoli[3][i] = ora_uscita;
            numero_ore = ore_trascorse(ora_ingresso, ora_uscita);
            return costo_sosta(numero_ore, veicoli[1][i][0]);
        }
    }
    return -1;
}


int main() {
    char scelta;
    do {
        scelta = menu_iniziale();
        switch (scelta) {
            case 'i':
                check_in();
                break;
            case 'o':
                check_out();
                break;
            case 'r':
                stampa_report();
                break;
        }
    }while (scelta != 'x');
}

void check_in() {
    char tipo_veicolo;
    string targa;
    do {
        cout<<"inserisci tipo veicolo(m,a,f): ";
        cin>> tipo_veicolo;
    }while (tipo_veicolo!='m'&&tipo_veicolo!='a'&&tipo_veicolo!='f');
    do {
        cout<<"inserisci la targa: ";
        cin>>targa;
    }while (targa.size()<1);

    veicoli[0][ultima_posizione]  = targa;
    veicoli[2][ultima_posizione] = current_time_hh_mm();
    ultima_posizione++;
    numero_veicoli++;
}


void stampa_report() {

    for (int i = 0; i < ultima_posizione; i++) {
        cout<<"TARGA: "<<veicoli[0][i]<<" Ora ingresso: "<<veicoli[2][i]<<" Ora uscita: "<<veicoli[3][i];
        cout<<endl;
    }
    cout<<"il numero totale di veicoli e': "<<numero_veicoli<<endl;
    cout<<"l'incasso totale e' "<< incasso_totale << " euro"<<endl;

}


char menu_iniziale() {
    string scelta;
    do {
        cout<<"Cosa vuoi fare?"<<endl;
        cout<<"i per check-in"<<endl;
        cout<<"o per check-out"<<endl;
        cout<<"r per stampare il report degli incassi"<<endl;
        cout<<"x per terminare il programma"<<endl;
        cin>>scelta;
    }while (scelta != "i" && scelta != "o" && scelta != "r" && scelta!= "x");
    return scelta[0];
}


float costo_sosta(int durata_sosta, char tipo_veicolo) {
    const float TARIFFA_M=5.0, TARIFFA_A=10.0, TARIFFA_F=15.0;
    float tariffa_applicata;
    float costo_sosta;
    switch (tipo_veicolo) {
        case 'm':
            tariffa_applicata=TARIFFA_M;
            break;
        case 'a':
            tariffa_applicata=TARIFFA_A;
            break;
        case 'f':
            tariffa_applicata=TARIFFA_F;
            break;
    }
    if (durata_sosta<=3) {
        costo_sosta=durata_sosta*tariffa_applicata;
    }
    else {
        costo_sosta=(tariffa_applicata*3)+(durata_sosta-3)*tariffa_applicata*0.8;
    }
    return costo_sosta;
}


