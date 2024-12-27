#include <iostream>
#include <string.h>
using namespace std;

const int MAX_VOTI = 5;
float voti[MAX_VOTI];
char scelta;
int numero_voti = 0;


void visualizza_voti()
{
    if(numero_voti==0)
    {
        cout<<"non hai ancora nessun voto!"<<endl;
    }
    for(int i = 0; i < numero_voti; i++)
    {
        cout<<voti[i]<<endl;
    }
}

void inserimento()
{
    if(numero_voti==MAX_VOTI)
    {
        cout<<"hai raggiunto il limite massimo dei voti.";
    }
    else
    {
        cout<<"inserisci il nuovo voto:";
        cin>>voti[numero_voti];
        numero_voti++;
    }
}

float calcola_media()
{
    float somma = 0;
    float media = 0;
    for(int i = 0; i < numero_voti; i++)
    {
        somma = somma + voti[i];
    }
    media = somma / numero_voti;
    return media;
}
int main()
{
    do{
        cout<<"inserisci i per inserire un nuovo voto"<<endl;
        cout<<"inserisci v per visualizzare i voti"<<endl;
        cout<<"inserisci m per visualizzare la media dei voti"<<endl;
        cout<<"inserisci t per terminare:";
        cin>>scelta;
        if(scelta == 'i')
        {
            inserimento();
        }
        if(scelta=='v')
        {
            visualizza_voti();
        }
        if(scelta=='m')
        {
            float m = calcola_media();
            cout<<"la tua media e':"<<m<<endl;
        }
    }while(scelta!='t');
   
}


