#include <iostream>
#include "json.hpp"
#include <string>
#include "constants.h"
#include <fstream>
#include "veicolo.h"
using json = nlohmann::json;
using namespace std;
void scrivi_file(string nome_file, string data) {
    std::ofstream file(nome_file);
    if (file.is_open()) {
        file << data;
        file.close();
    }
}
void genera_csv(veicolo veicoli[DIM_MAX], int n_veicoli) {
    string output;

    for (int i = 0; i < n_veicoli; i++) {
        output.append(veicoli[i].targa).append(",");
        output.append(veicoli[i].ora_ingresso).append(",");
        output.append(veicoli[i].ora_uscita).append(",");
        output.append(to_string(veicoli[i].costo));
        output.append("\n");
    }
    scrivi_file("veicoli.csv",output);
}

void genera_json(veicolo veicoli[DIM_MAX], int n_veicoli) {
    json j;
    j["veicoli"] = json::array();
    for (int i = 0; i < n_veicoli; i++) {
        j["veicoli"].push_back({
            {"targa", veicoli[i].targa},
            {"tipo_veicolo", veicoli[i].tipo},
            {"ora_ingresso", veicoli[i].ora_ingresso},
            {"ora_uscita", veicoli[i].ora_uscita},
            {"costo", veicoli[i].costo},

        });

    }
    scrivi_file("veicoli.json", j.dump(4));
}

veicolo[] leggi_json(json j) {

}
