#include <iostream>
using namespace std;
int main() {
    int n;
    int numero;
    int conta_pari =0;
    cout<<"inserisci quanti numeri vuoi inserire: ";
    cin>> n;
    for (int i=0;i<n;i++) {
        cout<<"inserisci un numero: ";
        cin>>numero;
        if (numero%2==0) {
            conta_pari= conta_pari+1;
        }

    }
    cout<<"hai inserito "<<conta_pari<<" numeri pari.";



    return 0;
}