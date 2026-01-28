#include <iostream>
#include <cstring>
using namespace std;

const int N_MATERIE = 4;
const int N_MAX_VOTI = 10;

string materie[]={"ita","mat","ing","inf"};
float voti[N_MATERIE][N_MAX_VOTI];

void init_voti() {
    //memset(voti, -1, sizeof(voti));
    for (int i = 0; i < N_MATERIE; i++) {
        for (int j = 0; j < N_MAX_VOTI; j++) {
            voti[i][j] = -1;
        }
    }
}

int trova_prima_colonna_libera(int i) {
    for (int j = 0; j < N_MAX_VOTI; j++) {
        if (voti[i][j]==-1) {
            return j;
        }
    }
}

int trova_materia(string materia) {
    for (int i = 0; i < N_MATERIE; i++) {
        if (materie[i]== materia) {
            return i;
        }
    }
    return -1;
}


bool cancella_voto(string materia, int posizione) {
    int indice_riga = trova_materia(materia);
    if (indice_riga==-1) {
        cout<<"non e' possibile eliminare il voto: "<<materia<<" non trovata!!!"<<endl;
        return false;
    }
    int i;
    for (i = posizione+1; voti[indice_riga][i]!=-1; i++) {
        voti[indice_riga][i-1] = voti[indice_riga][i];
    }
    voti[indice_riga][i-1] = -1;
    return true;
}

void stampa(string materia) {
    for (int i  = 0; i < N_MATERIE; i++) {
        if (materie[i] == materia) {
            cout<<"I voti della materia "<<materia<<" sono: "<<endl;
            for (int j = 0; j < N_MAX_VOTI and voti[i][j]!=-1; j++) {
                cout<<voti[i][j]<<"    ";
            }
        }
    }
}


void inserisci_voto(string materia, float voto)
{
    for(int i = 0; i < N_MATERIE; i++)
    {
        if((materie[i]==materia)) {
            int indice_colonna = trova_prima_colonna_libera(i);
            voti[i][indice_colonna] = voto;
        }
    }
}

int main()
{



    float media_inf, media_tot;
    init_voti();
    inserisci_voto("inf",1);
    inserisci_voto("inf",2);
    inserisci_voto("inf",3);
    inserisci_voto("inf",4);
    inserisci_voto("inf",5);

    stampa("inf");

    bool cancella = cancella_voto("inf", 2);

    stampa("inf");

    //media_inf = calcola_media_materia("inf");
    //cout<<"la media in informatica è: "<<media_inf<<endl;
    inserisci_voto("info",10);

    //media_inf = calcola_media_materia("inf");
    //cout<<"la media in informatica è: "<<media_inf<<endl;
    
    inserisci_voto("mat",10);
    //media_tot = calcola_media_tot();



}