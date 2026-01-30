#include <iostream>
#include "json.hpp"
#include <string>
#include "constants.h"
using json = nlohmann::json;
using namespace std;
string genera_json(string veicoli[DIM_MAX][COLUMS], int n_veicoli) {
    json j;
    j["veicoli"] = json::array();
    for (int i = 0; i < n_veicoli; i++) {
        j["veicoli"].push_back({
            {"targa", veicoli[0][i]},
        });

    }
    return  j.dump(4);
}
