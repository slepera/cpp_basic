#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int DIM=10;
const int TENTATIVI=5;
int main() {
    srand(time(NULL));
    string parole[] =
    {"ciao", "casa", "auto", "moto", "bar",
    "aula","televisione", "nebbia", "sole","medaglia"};
    string parola_segreta=parole[rand()%10];
    string parola_inserita="";
    for (int i=0;i<parola_segreta.size();i++) {
        cout<<"_";
    }
    cout<<endl;
    char caratteri[TENTATIVI];

    for (int i=0;i<TENTATIVI;i++) {
        cout<<"inserisci una lettera "<<endl;

        char lettera;
        cin>>lettera;
        caratteri[i]=lettera;


        for (int j=0;j<parola_segreta.size();j++) {
            bool trovato=false;
            for (int z=0; z<=i; z++) {
                if (parola_segreta[j] == caratteri[z]) {
                    cout<<parola_segreta[j];
                    trovato=true;
                }
            }
            if (!trovato) {
                cout<<"_";
            }
        }
        cout<<endl;
    }
    cout<<"Prova ad indovinare la parola, hai un tentativo";
    cin>>parola_inserita;

    if (parola_inserita==parola_segreta) {
        cout<<"Hai indovinato!";
    } else {
        cout<<"Hai perso";
        cout<<"La parola era "<<parola_segreta;
    }
}










