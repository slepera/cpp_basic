#include <iostream>
using namespace std;
int main() {
    float costo_base=500;
    int quantita;
    float costo_totale;
    cout<<"inserisci il numero di pezzi di cui hai bisogno:";
    cin>>quantita;
    costo_totale=costo_base*quantita;
    cout<<"il costo totale e':"<<costo_totale<<endl;
    if (quantita>=1 and quantita<=30) {
        costo_totale=costo_totale*1.1;

    }else if (quantita>=101) {
        costo_totale=costo_totale*0.9;
    }
    cout<<"il costo scontato e' "<<costo_totale;


    return 0;
}
