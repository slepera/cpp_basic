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
    cout<<"Prova ad indovinare: "<<endl;
    for (int i=0;i<TENTATIVI;i++) {
        cin>>parola_inserita;
        if (parola_inserita==parola_segreta) {
            cout<<"HAI VINTO!";
            return 0;
        }
        for (int j=0;j<parola_segreta.size();j++) {
            if (j>=parola_inserita.size()) {
              cout<<"_";
            }else if (parola_segreta[j]!=parola_inserita[j]) {
              cout<<"_";
            }else {
              cout<<parola_inserita[j];
            }
        }
        cout<<endl;
    }
    cout<<"HAI PERSO!"<<endl;
    cout<<"La parola era "<<parola_segreta;
}
