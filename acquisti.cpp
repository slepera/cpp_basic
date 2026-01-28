#include <iostream>
using namespace std;
int main() {
    //commento di prova

    float prezzo;
    int quantita;
    float calcolo_parziale;
    float prezzo_finale=0;
    int sconto;
    char scelta;
    do {
        cout<<"Inserisci il prezzo del prodotto ";
        cin>>prezzo;
        cout<<"Inserisci la quantita' di prodotto ";
        cin>>quantita;
        calcolo_parziale=prezzo*quantita;
        prezzo_finale=prezzo_finale+calcolo_parziale;
        cout<<"Il prezzo parziale e' "<<calcolo_parziale<<" euro"<<endl;
        cout<<"Il totale e' "<<prezzo_finale<<" euro"<<endl;
        cout<<"Vuoi aggiungere altri prodotti? (s/n)";
        cin>>scelta;
    } while (scelta=='s' or scelta=='S');
    if (prezzo_finale>=3000) {
        sconto=20;
    }else if (prezzo_finale>=2000) {
        sconto=15;
    }else if (prezzo_finale>=1000){
        sconto=10;
    }
    prezzo_finale=prezzo_finale-prezzo_finale*sconto/100;
    cout<<"Hai ricevuto uno sconto del "<<sconto<<"%";
    cout<<"Il totale scontato e' "<<prezzo_finale<<" euro";

}