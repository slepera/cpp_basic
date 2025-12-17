#include <iostream>
using namespace std;
int main() {
    const int DIMENSIONE_SERIE = 10;
    int numero;
    int max=INT_MIN;


    cout<<"inserisci la serie di "<<DIMENSIONE_SERIE<<" numeri"<<endl;
    for(int i = 0; i<DIMENSIONE_SERIE; i++){
        cin>>numero;
        if (numero > max) {
            max = numero;
        }

    }
    cout<<"il massimo della serie inserita e' "<<max;















    //
    // int numero;
    // int max = -1;
    //
    // do {
    //     cout<<"inserisci un numero";
    //     cin>>numero;
    //     if (numero>max) {
    //         max = numero;
    //     }
    // }while (numero>=0);
    // if (max < 0) {
    //     cout<<"la tua serie di numeri e' vuota"<<endl;
    // }
    // else {
    //     cout<<"il numero piu' grande e' "<<max;
    // }
    //
    //
    //
    //
}