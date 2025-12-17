#include <iostream>
using namespace std;

float calcola_interessi(float importo, float tasso, int durata)
{
    float delta_interessi = 0, interessi = 0;
    while(durata > 0)
    {
        delta_interessi = importo * (tasso/100) * (durata>365?1:((float)durata/365));
        importo = importo + delta_interessi;
        durata = durata - 365;
        interessi = interessi + delta_interessi;
    }
    return interessi;
}


int main()
{
    float importo, tasso;
    int durata;
    char scelta;

    do{
        cout<<"inserisci l'importo: ";
        cin>>importo;
        cout<<"inserisci il tasso: ";
        cin>>tasso;
        cout<<"inserisci la durata: ";
        cin>>durata;
        float interessi = calcola_interessi(importo, tasso, durata);
        cout<<"gli interessi maturati dal tuo investimento sono di: "<<interessi<<endl;

        cout<<"Inserisci n per un nuovo inserimento!"<<endl;
        cout<<"inserisci t per terminare!"<<endl;
        cout<<"fai la tua scelta: ";
        cin>>scelta;
    }while(scelta=='n');
}