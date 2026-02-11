#include <iostream>
#include <string>
#include <ctime>
#include <iomanip>
#include <sstream>
#include <cstdlib>
#include "utilities.h"
#include "constants.h"
#include "json_manager.h"
#include "veicolo.h"
using namespace std;


int numero_veicoli_entrati = 0;
int numero_veicoli_usciti = 0;



int posizione_libera = 0;

veicolo veicoli[DIM_MAX];

char menu_iniziale();
void check_in();
void check_out();
float costo_sosta(int, char);
void stampa_report();
void salva();

void check_out() {
    string targa;
    string ora_uscita;
    string ora_ingresso;
    float costo;
    int numero_ore;
    cout<<"inserisci la targa: ";
    cin>>targa;
    ora_uscita = current_time_hh_mm();
    for (int i = 0; i < posizione_libera; i++) {
        if (veicoli[i].targa == targa) {
            ora_ingresso = veicoli[i].ora_ingresso;
            veicoli[i].ora_uscita = ora_uscita;
            numero_ore = ore_trascorse(ora_ingresso, ora_uscita);
            costo = costo_sosta(numero_ore, veicoli[i].tipo);
            veicoli[i].costo = costo;
            numero_veicoli_usciti++;
        }
    }
}


int main() {
    char scelta;
    do {
        scelta = menu_iniziale();
        switch (scelta) {
            case 's':
                salva();
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
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
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

    veicoli[posizione_libera].targa = targa;
    veicoli[posizione_libera].tipo = tipo_veicolo;
    veicoli[posizione_libera].ora_ingresso = current_time_hh_mm();
    posizione_libera++;
    numero_veicoli_entrati++;
}


void stampa_report() {
    float incasso_totale = 0;
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif

    for (int i = 0; i < posizione_libera; i++) {
        if (veicoli[i].costo!=0) {
            incasso_totale += veicoli[i].costo;
        }
        cout<<"TARGA: "<<veicoli[i].targa<<" Tipo: "<<veicoli[i].tipo<<" Ora ingresso: "<<veicoli[i].ora_ingresso<<" Ora uscita: "<<veicoli[i].ora_uscita<<" costo: "<<veicoli[i].costo;
        cout<<endl;
    }

    cout<<"il numero totale di veicoli entrati e': "<<numero_veicoli_entrati<<endl;
    cout<<"il numero totale di veicoli usciti e': "<<numero_veicoli_usciti<<endl;
    cout<<"il numero totale di veicoli in garage e': "<<numero_veicoli_entrati-numero_veicoli_usciti<<endl;
    cout<<"l'incasso totale e' "<< incasso_totale << " euro"<<endl;

    press_enter_to_continue();

}

void salva() {
    genera_json(veicoli, posizione_libera);
    genera_csv(veicoli, posizione_libera);
    press_enter_to_continue();
}


char menu_iniziale() {
    #ifdef _WIN32
        system("cls");
    #else
        system("clear");
    #endif
    string scelta;
    do {
        cout<<"Cosa vuoi fare?"<<endl;
        cout<<"s per salvare"<<endl;
        cout<<"i per check-in"<<endl;
        cout<<"o per check-out"<<endl;
        cout<<"r per stampare il report degli incassi"<<endl;
        cout<<"x per terminare il programma"<<endl;
        cin>>scelta;
    }while (scelta != "s" && scelta != "i" && scelta != "o" && scelta != "r" && scelta!= "x");
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


