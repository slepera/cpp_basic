#include <iostream>
using namespace std;
int main() {
    constexpr int DIMENSIONE_SERIE = 10;
    int numero, max = -1;

    for (int i = 0; i<DIMENSIONE_SERIE; i++) {
        cout<<"inserisci un numero: ";
        cin>>numero;
        if (numero> max) {
            max = numero;
        }

    }
    cout<<"il massimo e' "<<max;



}