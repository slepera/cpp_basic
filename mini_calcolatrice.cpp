#include <iostream>
using namespace std;

int main() {
    float operando1, operando2, risultato;
    char operatore;

    cout<<"inserisci il primo operando: ";
    cin>>operando1;
    cout<<"inserisci l'operatore (+,-,/,*): ";
    cin>>operatore;
    cout<<"inserisci il secondo operando: ";
    cin>>operando2;

    switch (operatore) {
        case '+':
            risultato = operando1 + operando2;
            break;
        case '-':
            risultato = operando1 - operando2;
            break;
        case '*':
            risultato = operando1 * operando2;
            break;
        case '/':
            risultato = operando1 / operando2;
            break;
        default:
            cout<<"operatore non supportato"<<endl;
            return 0;
    }
    cout<<"il risultato dell'operazione aritmetica e': "<<risultato;
}