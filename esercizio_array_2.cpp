#include <iostream>
using namespace std;


const int MAX_DIM = 500;

float calcola_max(float voti[MAX_DIM], int numero_voti) {
    float max;
    max = voti[0];
    for (int i = 1; i < numero_voti; i++) {
        if (voti[i]>max) {
            max = voti[i];
        }
    }
    return max;
}


float calcola_min(float voti[MAX_DIM], int numero_voti) {
    float min;
    min = voti[0];
    for (int i = 1; i < numero_voti; i++) {
        if (voti[i]<min) {
            min = voti[i];
        }
    }
    return min;
}



float calcola_media(float voti[MAX_DIM], int numero_voti) {
    float media = 0;
    for (int i = 0; i < numero_voti; i++) {
        media = media + voti[i];
    }
    media=media/numero_voti;
    return media;
}

void inserimento(float voti[MAX_DIM], int numero_voti) {
    for (int i = 0; i < numero_voti; i++) {
        cout<<"inserisci il voto numero "<<i+1<<": ";
        cin>>voti[i];
    }
}

int main() {
    float voti[MAX_DIM];
    int numero_voti;
    cout<<"quanti voti vuoi inserire?";
    cin>>numero_voti;

    inserimento(voti, numero_voti);

    float media = calcola_media(voti, numero_voti);
    float min = calcola_min(voti, numero_voti);
    float max = calcola_max(voti, numero_voti);

    cout<<"la media e': "<<media<<endl;
    cout<<"il minimo e': "<<min<<endl;
    cout<<"il massimo e': "<<max<<endl;

}