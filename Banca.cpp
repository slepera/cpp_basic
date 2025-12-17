#include <iostream>
using namespace std;

int main() {
    float saldo, tasso;
    int n_anni;

    cout<<"Inserisci il tasso: ";
    cin>>tasso;
    cout<<"Quanti soldi vuoi inserire sul tuo saldo? ";
    cin>>saldo;
    cout<<"Quanti anni vuoi mantenere il tuo deposito: ";
    cin>>n_anni;

    for (int i=1; i<=n_anni; i++) {
        saldo= saldo+saldo * tasso/100;
        cout<<"Il saldo dopo "<<i<<" anni e' di "<<saldo<<" euro"<<endl;
    }




    return 0;
}