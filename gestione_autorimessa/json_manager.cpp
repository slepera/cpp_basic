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

string leggi_file(const string nome_file) {
    if (nome_file.empty()) {
        cerr << "Filename is empty!\n";
        return "";
    }
    ifstream file(nome_file);
    if (!file.is_open()) {
        cerr << "Cannot open file: " << nome_file << "\n";
        return "";
    }
    string contenuto;
    string linea;
    while (std::getline(file, linea)) {
        contenuto += linea + '\n';
    }
    return contenuto;
}


void genera_json(vector<veicolo> veicoli) {
    json j;
    j["veicoli"] = json::array();
    for (int i = 0; i < veicoli.size(); i++) {
        j["veicoli"].push_back({
            {"targa", veicoli[i].targa},
            {"tipo", veicoli[i].tipo},
            {"ora_ingresso", veicoli[i].ora_ingresso},
            {"ora_uscita", veicoli[i].ora_uscita},
            {"costo", veicoli[i].costo},

        });

    }
    scrivi_file("veicoli.json", j.dump(4));
}

void from_json(const json& j, veicolo& v) {
    j.at("targa").get_to(v.targa);
    j.at("tipo").get_to(v.tipo);
    j.at("ora_ingresso").get_to(v.ora_ingresso);
    j.at("ora_uscita").get_to(v.ora_uscita);
    j.at("costo").get_to(v.costo);
}

vector<veicolo> leggi_json(string s) {

    json j = json::parse(s);
    j = j.at("veicoli");

    vector<veicolo> veicoli;
    for (int i = 0; i < j.size(); i++) {
        veicolo v;
        v = j[i].get<veicolo>();
        veicoli.push_back(v);
    }
    return veicoli;
}
