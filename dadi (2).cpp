#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int numero_utente, numero_casuale;
    srand(time(NULL));
    cout<<"inserisci un numero tra 1 e 6: ";
    cin>>numero_utente;
    numero_casuale = rand() % 6 + 1;
    if (numero_casuale == numero_utente) {
        cout<<"Hai indovinato!!!"<<endl;
    }else {
        cout<<"Ritenta...era "<<numero_casuale<<endl;
    }
    return 0;
}