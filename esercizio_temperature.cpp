#include <iostream>
using namespace std;

const int N = 30;

// void bubble_sort(float temperature[N]) {
//     float temp;
//     for(int i = 0; i < n-1; i++) {
//         for(int j = 0; j < n-i-1; j++) {
//             if(temperature[j] > temperature[j+1]) {
//                 temp = temperature[j];
//                 temperature[j] = temperature[j+1];
//                 temperature[j+1] = temp;
//             }
//         }
//     }
// }

int inserimento_temperature(float temperature[N]) {
    srand(time(NULL));
    int numero_temperature;
    cout<<"quante temperature vuoi inserire (max. 30) ? ";
    cin>>numero_temperature;
    if (numero_temperature>N || numero_temperature<=0) {
        cout<<"ERRORE: numero di temperature invalido!!!";
        return -1;
    }
    for (int i = 0; i < numero_temperature; i++) {
        temperature[i] = rand() % 100 -50;
    }
    return numero_temperature;
}




float calcola_media(float temperature[N], int numero_elementi) {
    float media = 0, somma = 0;
    for (int i = 0; i < numero_elementi; i++) {
        somma = somma + temperature[i];
    }
    media = somma / numero_elementi;
    return media;
}

float calcola_min(float temperature[N], int numero_elementi) {
    float min;
    min = temperature[0];
    for (int i = 1; i < numero_elementi; i++) {
        if (temperature[i] < min) {
            min = temperature[i];
        }
    }
    return min;
}

float calcola_max(float temperature[N], int numero_elementi) {
    float max;
    max = temperature[0];
    for (int i = 1; i < numero_elementi; i++) {
        if (temperature[i] > max) {
            max = temperature[i];
        }
    }
    return max;
}

void stampa_risultati(float media, float min, float max, int gsm) {
    cout<<"temperatura media = "<<media<<endl;
    cout<<"temperatura minima = "<<min<<endl;
    cout<<"temperatura massima = "<<max<<endl;
    cout<<"giorni sopra t.m. = "<<gsm<<endl;
}

int giorni_sopra_media(float temperature[N], int n_el, float media) {
    int contatore = 0;
    for (int i = 0; i < n_el; i++) {
        if (temperature[i] > media) {
            contatore++;
        }
    }
    return contatore;
}

void stampa_temperature(float arr[], int num_elem) {
    for (int i = 0; i<num_elem; i++) {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main() {
    float temperature[N];
    float media, min, max;
    int numero_temperature, g_s_m;
    numero_temperature = inserimento_temperature(temperature);
    media = calcola_media(temperature, numero_temperature);
    min = calcola_min(temperature, numero_temperature);
    max = calcola_max(temperature, numero_temperature);
    g_s_m = giorni_sopra_media(temperature, numero_temperature, media);
    stampa_temperature(temperature, numero_temperature);
    stampa_risultati(media, min, max, g_s_m);
}
