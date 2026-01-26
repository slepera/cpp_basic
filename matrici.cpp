#include <iostream>
using namespace std;

const int N_MATERIE = 4;
const int N_MAX_VOTI = 10;

string materie[]={"ita","mat","ing","inf"};
float voti[N_MATERIE][N_MAX_VOTI]={-1};


int trova_prima_colonna_libera(int i) {
    for (int j = 0; j < N_MAX_VOTI; j++) {
        if (voti[i][j]==-1) {
            return j;
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

    inserisci_voto("info","7");
    inserisci_voto("info","9");

    media_inf = calcola_media_materia("info");
    cout<<"la media in informatica è: "<<media_inf<<endl;
    inserisci_voto("info","10");

    media_inf = calcola_media_materia("info");
    cout<<"la media in informatica è: "<<media_inf<<endl;
    
    inserisci_voto("mat","10");
    media_tot = calcola_media_tot();



}