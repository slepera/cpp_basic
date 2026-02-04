#include <iostream>
#include <cstring>
using namespace std;

const int N_MATERIE = 4;
const int N_MAX_VOTI = 10;

struct votazione {
    string materia;
    float punteggi[N_MAX_VOTI];
};

votazione voti[N_MATERIE];

void init_voti(string materie[N_MATERIE]) {
    for (int i = 0; i < N_MATERIE; i++) {
        voti[i].materia = materie[i];
        for (int j = 0; j < N_MAX_VOTI; j++) {
            voti[i].punteggi[j] = -1;
        }
    }
}

int trova_prima_colonna_libera(int i) {
    for (int j = 0; j < N_MAX_VOTI; j++) {
        if (voti[i].punteggi[j]==-1) {
            return j;
        }
    }
}

int trova_materia(string materia) {
    for (int i = 0; i < N_MATERIE; i++) {
        if (voti[i].materia == materia) {
            return i;
        }
    }
    return -1;
}

float calcola_media(string materia) {
    float voto, somma, media;
    int indice_materia = trova_materia(materia);
    int indice_ultimo_voto = trova_prima_colonna_libera(indice_materia)-1;
    if (indice_ultimo_voto==-1) {
        return -1;
    }
    for (int j = 0; j <= indice_ultimo_voto; j++) {
        voto = voti[indice_materia].punteggi[j];
        somma = somma + voto;
    }

    media = somma / (indice_ultimo_voto+1);

    return media;

}


bool cancella_voto(string materia, int indice) {
    int indice_riga = trova_materia(materia);
    if (indice_riga==-1) {
        cout<<"non e' possibile eliminare il voto: "<<materia<<" non trovata!!!"<<endl;
        return false;
    }
    int i;
    for (i = indice+1; voti[indice_riga].punteggi[i]!=-1; i++) {
        voti[indice_riga].punteggi[i-1] = voti[indice_riga].punteggi[i];
    }
    voti[indice_riga].punteggi[i-1] = -1;
    return true;
}

void stampa(string materia) {
    int indice_materia = trova_materia(materia);
    if (indice_materia==-1) {
        cout<<"materia non trovata!"<<endl;
        return;
    }
    cout<<"I voti della materia "<<materia<<" sono: "<<endl;
    for (int j = 0; j < N_MAX_VOTI and voti[indice_materia].punteggi[j]!=-1; j++) {
        cout<<voti[indice_materia].punteggi[j]<<"    ";
    }
}


void inserisci_voto(string materia, float voto)
{
    for(int i = 0; i < N_MATERIE; i++)
    {
        if(voti[i].materia == materia) {
            int indice_colonna = trova_prima_colonna_libera(i);
            voti[i].punteggi[indice_colonna] = voto;
        }
    }
}

void menu_inserisci_voto() {
    string materia;
    float voto;
    cout<<"Inserisci la materia: ";
    cin>>materia;
    cout<<"Inserisci il voto: ";
    cin>>voto;
    inserisci_voto(materia,voto);
}

void menu_elimina_voto() {
    string materia;
    int posizione;
    cout<<"Inserisci la materia: ";
    cin>>materia;
    cout<<"Inserisci la posizione del voto da eliminare: ";
    cin>>posizione;
    cancella_voto(materia,posizione-1);
}

void menu_media_materia() {
    string materia;
    float media;
    cout<<"Inserisci la materia: ";
    cin>>materia;
    media = calcola_media(materia);
    cout<<"La media per la materia "<<materia<<" e' "<<media<<endl;
}

float calcola_media_globale() {
    float media_globale;
    int n_materie;
    for (int i = 0; i < N_MATERIE; i++) {
        float media_materia = calcola_media(voti[i].materia);
        if (media_materia!=-1) {
            media_globale += media_materia;
            n_materie++;
        }
    }
    return media_globale / n_materie;
}

void menu_media_totale() {
    float media_globale = calcola_media_globale();
    cout<<"La media globale e' "<<media_globale<<endl;
}

int main()
{
    string materie[N_MATERIE] = {"ita", "mat", "ing", "inf"};

    init_voti(materie);



    char scelta;
    do {
        cout<<"scegli l'operazione da effettuare:"<<endl;
        cout<<"i per inserire un voto."<<endl;
        cout<<"e per eliminare un voto."<<endl;
        cout<<"m per calcolare la media/materia"<<endl;
        cout<<"M per calcolare la media totale"<<endl;
        cout<<"x per uscire"<<endl;
        cin>>scelta;
        switch (scelta) {
            case 'i':
                menu_inserisci_voto();
                break;
            case 'e':
                menu_elimina_voto();
                break;
            case 'm':
                menu_media_materia();
                break;
            case 'M':
                menu_media_totale();
                break;
        }
    }while (scelta !='x');

}
