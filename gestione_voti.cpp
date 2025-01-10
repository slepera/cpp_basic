#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;

const int MAX_VOTI = 5;
string materie[MAX_VOTI];
float voti[MAX_VOTI];
char scelta;
int numero_voti = 0;



float cerca_voto_per_materia(string mat)
{
    for(int i = 0; i < numero_voti; i++)
    {
        if(materie[i]==mat)
        {
            return voti[i];
        }
    }
    return -1;
}



void visualizza_voti()
{
    if(numero_voti==0)
    {
        cout<<"non hai ancora nessun voto!"<<endl;
    }
    for(int i = 0; i < numero_voti; i++)
    {
        cout<<"Materia: "<<materie[i]<<" voto: "<<voti[i]<<endl;
    }
}

void inserimento(string materia, float voto)
{
    if(numero_voti==MAX_VOTI)
    {
        cout<<"hai raggiunto il limite massimo dei voti.";
    }
    else
    {
        materie[numero_voti] = materia;
        voti[numero_voti] = voto;
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
        cout<<"inserisci c per ricerca voto per materia"<<endl;
        cout<<"inserisci t per terminare:";
        cin>>scelta;
        string mat;
        float voto;
        string materia;
        switch(scelta)
        {
            case 't':
                return 0;
            case 'i':
                cout<<"inserisci la materia:";
                cin>>mat;
                cout<<"inserisci il voto:";
                cin>>voto;
                inserimento(mat, voto);
                break;
            case 'v':
                visualizza_voti();
                break;
            case 'm':
                float m = calcola_media();
                cout<<"la tua media e':"<<m<<endl;
                break;
            case 'c':
                cout<<"inserisci la materia:";
                cin>>materia;
                float voto = cerca_voto_per_materia(materia);
                cout<<"il voto della materia "<<materia<<" e' "<<voto<<endl;
                break;
            default:
                cout<<"non hai fatto una scelta valida!";
                break;

        }
    }while(scelta!='t');
   
}


