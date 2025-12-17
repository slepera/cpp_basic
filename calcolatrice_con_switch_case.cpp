#include<iostream>
using namespace std;
int main() {
    float operando1,operando2,risultato;
    char operazione;
    cout<<"inserisci il primo operando: ";
    cin>>operando1;
    cout<<"inserisci l'operazione(+,-,*,/): ";
    cin>>operazione;
    cout<<"inserisci il secondo operando: ";
    cin>>operando2;
    switch(operazione) {
        case '+':
            risultato=operando1+operando2;
            break;
        case '-':
            risultato=operando1-operando2;
            break;
        case '*':
            risultato=operando1*operando2;
            break;
        case '/':
            risultato=operando1/operando2;
            break;
        default:
            cout<<"operazione non valida"<<endl;
            return 0;
    }
    cout<<"il risultato e' "<<risultato;
    return 0;
}