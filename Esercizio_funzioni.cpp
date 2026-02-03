#include <iostream>
#include <ctime>
using namespace std;
float pesca_carta() {
    int carta=rand()%10+1;
    if (carta>7) {
        return 0.5;
    }
    return carta;
}
float turno_giocatore() {
    float tot=0;
    char scelta;
    do {
        tot=pesca_carta()+tot;
        cout<<"TOTALE GIOCATORE: "<<tot<<endl;
        cout<<"Vuoi pescare un altra carta? (S/N) ";
        cin>>scelta;
    }while ((scelta=='s' || scelta=='S') && tot<7.5);
    return tot;
}
float turno_banco(float tot_giocatore) {
    float tot=0;
    do {
        tot=pesca_carta()+tot;
        cout<<"TOTALE BANCO: "<<tot<<endl;
    }while (tot<tot_giocatore &&  tot<7.5);
    return tot;
}
int main() {
    srand(time(NULL));
    float tot_giocatore, tot_banco;
    tot_giocatore=turno_giocatore();
    tot_banco=turno_banco(tot_giocatore);
    if (tot_giocatore>7.5) {
        cout<<"HAI PERSO"<<endl;
        return 0;
    }
    if (tot_banco>7.5) {
        cout<<"HAI VINTO"<<endl;
        return 0;
    }
    if (tot_giocatore>tot_banco) {
        cout<<"HAI VINTO"<<endl;
    }else {
        cout<<"HAI PERSO"<<endl;
    }
    return 0;
}