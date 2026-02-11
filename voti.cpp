#include <iostream>
using namespace std;
const int MAX_VOTI=100;
int posizione_libera=0;
float calcola_media(float voti[MAX_VOTI]) {
    float somma=0;
    for (int i=0; i<posizione_libera; i++) {
        somma=somma+voti[i];
    }
    return somma/posizione_libera;
}
void visualizza_voti(float voti[MAX_VOTI]) {
    cout<<"ci sono "<<posizione_libera<<" voti:"<<endl;
    for (int i=0; i<posizione_libera; i++) {
        cout<<voti[i]<<" ";
    }
    cout<<endl;
}
void inserisci_voto(float voto, float voti[MAX_VOTI]) {
    if (posizione_libera==MAX_VOTI) {
        cout<<"array pieno";
        return;
    }
    voti[posizione_libera]=voto;
    posizione_libera++;
}


int main() {
    float voti[MAX_VOTI];

    char scelta;
    do {
        cout<<"inserisci i per un nuovo voto"<<endl;
        cout<<"inserisci v per visualizzare i voti"<<endl;
        cout<<"inserisci a per media"<<endl;
        cout<<"inserisci m per minimo "<<endl;
        cout<<"inserisci M per massimo"<<endl;
        cout<<"inserisci e per uscire"<<endl;
        cin>>scelta;
        switch (scelta) {
            case 'i':
                float voto;
                cout<<"inserisci un voto:";
                cin>>voto;
                inserisci_voto(voto,voti);
                break;
            case 'v':
                visualizza_voti(voti);
                break;

            case 'a':
                cout<<"la media e' "<<calcola_media(voti)<<endl;
                break;


        }

    }while (scelta!='e');


}