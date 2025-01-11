#include <iostream>
#include <string.h>
using namespace std;

const int MAX_VOTI = 5;
float voti[MAX_VOTI];
string materie[MAX_VOTI];
int numero_voti = 0;

bool inserisci_voto()
{
    if(numero_voti==MAX_VOTI)
    {
        return false;
    }


    float tmp;
    cout<<"inserisci il voto:";
    cin>>tmp;
    if(tmp<0 || tmp>10)
    {
        return false;
    }
    cout<<"inserisci la materia;";
    cin>>materie[numero_voti];
    voti[numero_voti] = tmp;
    numero_voti++;
    return true;
}

float calcola_media()
{
    float media = 0;
    for(int i=0; i < numero_voti; i++)
    {
        media = media + voti[i];
    }
    media = media / numero_voti;
    return media;
}

float minimo()
{
    float min = voti[0];
    for(int i = 1; i < numero_voti; i++)
    {
        if(voti[i]<min)
        {
            min = voti[i];
        }
    }
    return min;
}

float massimo()
{
    float max = voti[0];
    for(int i = 1; i < numero_voti; i++)
    {
        if(voti[i]>max)
        {
            max = voti[i];
        }
    }
    return max;
}

char menu_scelta()
{
    char scelta;
    cout<<"inserisci i per nuovo voto:"<<endl;
    cout<<"inserisci a per viaualizzarwe la media:"<<endl;
    cout<<"inserisci m per visualizzare il minimo"<<endl;
    cout<<"inserisci M per visualizzare il massimo"<<endl;
    cout<<"inserisce s per stampare i voti"<<endl;
    cout<<"inserisci t per terminare:";
    cin>>scelta;
    return scelta;
}

void stampa()
{
    for(int i = 0; i < numero_voti; i++)
    {
        cout<<materie[i]<<" --- "<<voti[i]<<endl;
    }

}

int main()
{
    char scelta;

    do{
        scelta = menu_scelta();

        if(scelta == 'i')
        {
            bool ris = inserisci_voto();
            if(ris==false)
            {
                cout<<"non e' stato possibile inserire il voto: l'array e' pieno o il range e' sbagliato"<<endl;
            }
            else
            {
                cout<<"voto inserito con successo!!!"<<endl;
            }
        }
        if(scelta == 'a')
        {
            float m = calcola_media();
            cout<<"la media e': "<<m;
        }
        if(scelta == 'm')
        {
            float m = minimo();
            cout<<"il voto minimo e': "<<m;
        }
        if(scelta == 'M')
        {
            float m = massimo();
            cout<<"il voto massimo e': "<<m;
        }
        if(scelta == 's')
        {
            stampa();
        }

    }while(scelta!='t');


}