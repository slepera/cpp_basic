#include <iostream>
using namespace std;

int main() {

    int numero_pizze;
    int numero_persone;
    float numero_pizze_per_persona;

    cout<<"quante pizze sono arrivate? ";
    cin>>numero_pizze;
    cout<<"quante persone siete? ";
    cin>>numero_persone;

    numero_pizze_per_persona = (float)numero_pizze / numero_persone;

    cout<<"ad ogni persona spettano "<<numero_pizze_per_persona<<" pizze!!!";
}