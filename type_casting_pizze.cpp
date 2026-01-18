#include <iostream>
#include <ctime>
using namespace std;



int main() {

    int n_pizze;
    int n_persone;
    float pizze_persona;

    cout<<"quante pizze sono arrivate?";
    cin>>n_pizze;
    cout<<"quante persone siete?";
    cin>>n_persone;

    pizze_persona = (float)n_pizze / n_persone;

    cout<<"ad ogni persona spettano "<<pizze_persona<<" pizze!";

  
}