#include "veicolo.h"

#ifndef GESTIONE_AUTORIMESSA_JSON_MANAGER_H
#define GESTIONE_AUTORIMESSA_JSON_MANAGER_H
void genera_json(vector<veicolo>);
vector<veicolo> leggi_json(string j);
string leggi_file(string file_name);
void scrivi_file(string, string);
#endif //GESTIONE_AUTORIMESSA_JSON_MANAGER_H