#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numero_utente, numero_casuale;
    int numero_tentativi=0;
    srand(time(NULL));
    bool indovinato;

    do {
        numero_tentativi++;
        cout<<"inserisci un numero tra 1 e 6: ";
        cin>>numero_utente;
        numero_casuale = rand() % 6 + 1;
        if (numero_casuale == numero_utente) {
            indovinato = true;
            cout<<"Hai indovinato!!!"<<endl;
        }else {
            indovinato = false;
            cout<<"Ritenta...era "<<numero_casuale<<endl;
        }
    }while(indovinato == false);

    if (numero_tentativi<=4) {
        cout<<"Sei abbastanza fortunato...hai effettuato "<<numero_tentativi<<" tenativi prima di indovinare!"<<endl;
    }
    else if (numero_tentativi>=5 && numero_tentativi<=7) {
        cout<<"Sei mediamente fortunato...hai effettuato "<<numero_tentativi<<" tenativi prima di indovinare!"<<endl;
    }else {
        cout<<"Sei un po' sfortunato...hai effettuato "<<numero_tentativi<<" tenativi prima di indovinare!"<<endl;
    }
    return 0;
}