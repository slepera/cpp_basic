#include <iostream>
#include <windows.h>
#include <ctime>
using namespace std;

int main() {

    int numero_inserito;
    int numero_uscito;
    srand(time(NULL));

    const int NUMERO_TENTATIVI = 3;

    for (int i = 0; i<NUMERO_TENTATIVI;i++){
        cout<<"questo e' il tentativo numero "<<i<<endl;
        cout<<"dimmi un numero tra  1  e 6:";
        cin>>numero_inserito;
        if (numero_inserito<1 || numero_inserito > 6) {
            continue;
        }
        numero_uscito = rand() % 6 + 1;

        cout<<"e' uscito il numero "<<numero_uscito<<endl;

        if (numero_inserito==numero_uscito) {
            cout<<"congratulazioni!!! hai vinto!!!"<<endl;
            break;
        }else {
            cout<<"ritenta sarai piu' fortunato!!!"<<endl;
        }
    }

}
