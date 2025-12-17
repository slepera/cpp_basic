#include <iostream>
#include <fstream>
#include <string.h>

using namespace std;

const int MAX_VOTI = 10;

struct voto{
    string materia;
    float voto;
    string data;
    char tipo;
};

voto voti[MAX_VOTI];

char scelta;
int numero_voti = 0;




float cerca_voto_per_materia(string mat)
{
    for(int i = 0; i < numero_voti; i++)
    {
        if(voti[i].materia==mat)
        {
            return voti[i].voto;
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
        cout<<"Materia: "<<voti[i].materia<<" voto: "<<voti[i].voto<<endl;
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
        voti[numero_voti].materia = materia;
        voti[numero_voti].voto = voto;
        numero_voti++;
    }
}

float minimo()
{
    float min = voti[0].voto;
    for(int i = 1; i < numero_voti; i++)
    {
        if(voti[i].voto<min)
        {
            min = voti[i].voto;
        }
    }
    return min;
}

float massimo()
{
    float max = voti[0].voto;
    for(int i = 1; i < numero_voti; i++)
    {
        if(voti[i].voto>max)
        {
            max = voti[i].voto;
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
        somma = somma + voti[i].voto;
    }
    media = somma / numero_voti;
    return media;
}



void carica_voti()
{
    ifstream file;
    string str; 
    file.open ("voti.txt", ifstream::in);
    while (getline(file, str))
    {
        int indice_virgola = str.find(",");
        int lunghezza_riga = str.length();
        string materia = str.substr(0, indice_virgola);
        string voto = str.substr(indice_virgola+1, lunghezza_riga);
        voti[numero_voti].materia=materia;
        voti[numero_voti].voto=stof(voto);
        numero_voti++;
    }
    file.close();
}

void salva_voti()
{
    ofstream file;
    file.open("voti.txt",ofstream::out);
    for(int i = 0; i < numero_voti; i++)
    {
        string tmp = voti[i].materia + "," + to_string(voti[i].voto) + "\n";
        file.write(tmp.data(), tmp.length());
    }
    file.close();
}

char menu_scelta()
{
    char scelta;
    cout<<"inserisci i per nuovo voto:"<<endl;
    cout<<"inserisci a per viaualizzarwe la media dei voti:"<<endl;
    cout<<"inserisci m per visualizzare il voto minimo"<<endl;
    cout<<"inserisci M per visualizzare il voto massimo"<<endl;
    cout<<"inserisce v per visualizzare tutti i voti"<<endl;
    cout<<"inserisci c per ricerca voto per materia"<<endl;
    cout<<"inserisci s per salvatre i voti su file"<<endl;
    cout<<"inserisci t per terminare:";
    cin>>scelta;
    return scelta;
}

int main()
{

    carica_voti();

    do{
        scelta = menu_scelta();
        string mat;
        float voto;
        string materia;
        float m;
        switch(scelta)
        {
            case 't':
                return 0;
            case 's':
                cout<<"Salvataggio su file..."<<endl;
                salva_voti();
                break;
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
            case 'a':
                m = calcola_media();
                cout<<"la tua media e':"<<m<<endl;
                break;
            case 'm':
                m = minimo();
                cout<<"il voto minimo e':"<<m<<endl;
                break;
            case 'M':
                m = massimo();
                cout<<"il voto massimo e':"<<m<<endl;
                break;
            case 'c':
                cout<<"inserisci la materia:";
                cin>>materia;
                voto = cerca_voto_per_materia(materia);
                cout<<"il voto della materia "<<materia<<" e' "<<voto<<endl;
                break;
            default:
                cout<<"non hai fatto una scelta valida!";
                break;
        }
    }while(true);
   
}


