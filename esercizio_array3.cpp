#include <iostream>
#include <ctime>
using namespace std;

int main() {
    const int DIM = 5;
    const int DIM_X = 7;
    const int DIM_Y = 10;

    srand(time(NULL));
    float t[DIM];

    int campo_battaglia[DIM_X][DIM_Y];


    for (int i = 0; i < DIM_X; i++) {
        for (int j = 0; j < DIM_Y; j++) {
            campo_battaglia[i][j] = rand();
        }
    }



    //inserimento dei dati di temperatura nell'array
    for (int i = 0; i < DIM; i++) {
        t[i] = rand() % 5;
    }

    //calcolo della temperatura massima
    float t_max = t[0];
    for (int i = 1; i < DIM; i++) {
        if (t[i]>t_max) {
            t_max = t[i];
        }
    }

    //calcolo della temperatura minima
    float t_min = t[0];
    for (int i = 1; i < DIM; i++) {
        if (t[i]<t_min) {
            t_min = t[i];
        }
    }

    //calcolo della temperatura media
    float somma = 0;
    float media;
    for (int i = 0; i < DIM; i++) {
        somma = somma + t[i];
    }
    media = somma / DIM;

    //stampa contenuto array
    for (int i = 0; i < DIM; i++) {
        cout<<t[i]<<" ";
    }
    cout<<endl;

    cout<<"la temperatura massima e': "<<t_max<<endl;
    cout<<"la temperatura minima e': "<<t_min<<endl;
    cout<<"la temperatura media e': "<<media<<endl;




}
