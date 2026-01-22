#include <iostream>
using namespace std;

int main() {



    float n1, n2, risultato;
    char operatore;
    cout<<"inserisci il primo numero: ";
    cin>>n1;
    cout<<"inserisci l'operatore aritmetico (+, -, *. /): ";
    cin>>operatore;

    if (operatore != '+' and operatore != '-'
        and operatore != '*' and operatore != '/') {
        cout<<"operatore non previsto!!!"<<endl;
        return 0;
    }

    cout<<"inserisci il secondo numero: ";
    cin>>n2;


    if (operatore == '/' and n2 == 0) {
        cout<<"divisione per zero non possibile!!!"<<endl;
        return 0;
    }

    switch (operatore) {
        case '+':
            risultato = n1 + n2;
            break;
        case '-':
            risultato = n1 - n2;
            break;
        case '*':
            risultato = n1 * n2;
            break;
        case '/':
            risultato = n1 / n2;
            break;
    }
    cout<<"il risultato e' "<<risultato;
}