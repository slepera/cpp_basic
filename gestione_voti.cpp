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

char menu_scelta()
{
    char scelta;
    cout<<"inserisci i per nuovo voto:"<<endl;
    cout<<"inserisci a per viaualizzarwe la media:"<<endl;
    cout<<"inserisci m per visualizzare il minimo"<<endl;
    cout<<"inserisci M per visualizzare il massimo"<<endl;
    cout<<"inserisce s per stampare i voti"<<endl;
    cout<<"inserisci c per ricerca voto per materia"<<endl;
    cout<<"inserisci t per terminare:";
    cin>>scelta;
    return scelta;
}


int main()
{
    do{
        scelta = menu_scelta();
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
            case 's':
                visualizza_voti();
                break;
            case 'a':
                float m = calcola_media();
                cout<<"la tua media e':"<<m<<endl;
                break;
            case 'm':
                float m = minimo();
                cout<<"il voto minimo e':"<<m<<endl;
                break;
            case 'M':
                float m = massimo();
                cout<<"il voto massimo e':"<<m<<endl;
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
    }while(true);
   
}


