#include <iostream>
using namespace std;
int main() {
    int n;
    float media;
    float voto;
    float somma=0;
    cout<<"Quanti voti vuoi inserire?  ";
    cin>>n;
    for (int i=1; i<=n; i++) {
        cout<<"Inserisci un voto: ";
        cin>>voto;
        somma=somma+voto;

    }
    media=somma/n;
    cout<<"La media dei voti e': \t" <<media;
    return 0;

}