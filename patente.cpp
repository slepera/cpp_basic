#include <iostream>
using namespace std;


int main()
{

    int eta_patentabile;
    int eta;

    cout<<"inserisci l'eta' in cui si puo prendere la patente nel tuo paese:";
    cin>>eta_patentabile;

    cout<<"inserisci la tua eta':";
    cin>>eta;

    bool posso_prendere_la_patente = (eta>=eta_patentabile);
    if(posso_prendere_la_patente)
    {
        cout<<"OK!!!! Puoi prendere la patente!!!!";
    }
    else
    {
        cout<<"Mi dispiace non puoi ancora prendere la patente.";
    }
    







}