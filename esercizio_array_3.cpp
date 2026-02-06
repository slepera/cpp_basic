#include <iostream>
using namespace std;
const int MAX_VOTI = 50;
int main() {
    float voti[MAX_VOTI];
    int numero_voti;

    cout<<"quanti voti vuoi inserire (max  "<<MAX_VOTI<<")";
    cin>>numero_voti;
    if (numero_voti>MAX_VOTI) {
        cout<<"errore...."<<endl;
        return 0;
    }

    for (int i = 0; i < numero_voti; i++) {
        cout<<"inserisci il voto n.  "<<i+1;
        cin>>voti[i];
    }
    float somma = 0;
    for (int i = 0; i < numero_voti; i++) {
        somma = voti[i] + somma;
    }
    float media = somma / numero_voti;

    cout<<"la media e' :" <<media<<endl;

}