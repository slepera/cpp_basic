#include <iostream>
using namespace std;


int main() {
    char c = 0, cp;

    do {
        cp = c;
        cout<<"inserisci un carattere:";
        cin>>c;
    }while (c != cp + 1);



    //
    // int numero_inserimenti;
    // int numero;
    // int n_pari = 0, n_dispari = 0;
    // cout<<"quanti numeri vuoi inserire";
    // cin>>numero_inserimenti;
    //
    // for (int i = 0; i < numero_inserimenti; i++) {
    //     cout<<"inserisci un numero: ";
    //     cin>>numero;
    //     if (pari(numero)){
    //         n_pari++;
    //     }else {
    //         n_dispari++;
    //     }
    // }
    //
    // cout<<"hai inserito "<<n_pari<<" numeri pari"<<endl;
    // cout<<"hai inserito "<<n_dispari<<" numeri dispari";
}