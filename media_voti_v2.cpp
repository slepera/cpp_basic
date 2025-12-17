#include<iostream>
using namespace std;
int main() {
    int numero_materie;
    float voto, somma_voti =0, media;
    cout<<"inserisci il numero di materie: ";
    cin>>numero_materie;

    for (int i = 0; i<numero_materie; i++) {
        cout<<"inserisci un voto: ";
        cin>>voto;
        somma_voti=somma_voti+voto;
    }
    media=somma_voti/numero_materie;
    cout<<"la tua media e': "<<media;
    return 0;
}
