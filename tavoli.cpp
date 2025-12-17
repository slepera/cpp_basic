#include <iostream>
#include "tavolo.h"
using namespace std;

const int N = 100;
tavolo elenco_tavoli[N];


int calcola_superficie(tavolo t)
{
    return t.lung * t.larg;
}

float superficie_persona(tavolo t)
{
    return t.larg * t.lung / (float)t.n_persone;
}

tavolo inserimento()
{
    tavolo t;
    cout<<"inserisci il numero di persone:";
    cin>>t.n_persone;
    cout<<"inserisci l'altezza:";
    cin>>t.alt;
    cout<<"inserisci la larghezza:";
    cin>>t.larg;
    cout<<"inserisci la lunghezza:";
    cin>>t.lung;
    return t;
}

int main()
{
    int pos = 0;
    char scelta;
    tavolo t;
    do{
        cout<<"scrivi 'i' per nuovo inserimento:"<<endl;
        cout<<"scrivi 's' per superficie:"<<endl;
        cout<<"scrivi 'p' per superficie persona"<<endl;
        cin>>scelta;
        switch(scelta)
        {   
            case 'i':
                t = inserimento();
                elenco_tavoli[pos] = t;
                pos++;
                break;
            case 's':
                int i;
                cout<<"seleziona un indice";
                cin>>i;
                tavolo 
                t = elenco_tavoli[i];
                float s = calcola_superficie(t);
                cout<<"il tavolo ha una superficie di"<<s<<endl;
                break;
        }
    }while(true);



}

