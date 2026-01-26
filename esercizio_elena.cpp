#include<iostream>
using namespace std;

const int MAX_CAPACITY = 100;
const int N_VOTI = 5;



float voti[MAX_CAPACITY];

void inserimento() {
    for (int i = 0; i < N_VOTI; i++) {
        cout<<"inserisci il voto n."<<i+1<<": ";
        cin>>voti[i];
    }
}

void stampa_voti() {
    for (int i = 0; i < N_VOTI; i++) {
        cout<<"voto in posizione "<<i + 1 <<": "<< voti[i]<<endl;
    }
}

float calcola_media() {
    float media;
    for (int i = 0; i < N_VOTI; i++) {
        media = media + voti[i];
    }
    media = media / N_VOTI;
    return media;
}

bool promosso(float media) {
    if (media >5) {
        cout<<"lo studente e' promosso";
    }
    else {
        cout<<"lo studente deve ripeter l'anno";
    }
}


int main () {
    float m;
    inserimento();
    stampa_voti();
    m = calcola_media();
    bool p = promosso(m);



    // double* da;
    // while(true){
    //     da = (double*) malloc(8000000);
    // }

}