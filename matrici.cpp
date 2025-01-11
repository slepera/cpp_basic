#include <iostream>
using namespace std;

void inserisci_voto(string materie[10], float voti[10][10], string materia, float voto)
{
    for(int i = 0; i < 10; i++)
    {
        if((materie[i]=="materia")||(materie[i]==""))   
        {
            inserisci_voto(voti, voto);
            break;
        }
    }
}

int main()
{
    string materie[10]={};
    float voti[10][10]={};
    float media_inf, media_tot;

    inserisci_voto(materie, voti, "info","7");
    inserisci_voto(materie, voti, "info","9");

    media_inf = calcola_media_materia(materie, voti, "info");
    cout<<"la media in informatica è: "<<media_inf<<endl;
    inserisci_voto(materie, voti, "info","10");

    media_inf = calcola_media_materia(materie, voti, "info");
    cout<<"la media in informatica è: "<<media_inf<<endl;
    
    inserisci_voto(materie, voti, "mat","10");
    media_tot = calcola_media_tot(materie, voti);



}