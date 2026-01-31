#include <cstring>
using namespace std;

#ifndef GESTIONE_AUTORIMESSA_VEICOLO_H
#define GESTIONE_AUTORIMESSA_VEICOLO_H
struct  veicolo {
    string targa;
    char tipo;
    string ora_ingresso;
    string ora_uscita;
    float costo;
};
#endif //GESTIONE_AUTORIMESSA_VEICOLO_H