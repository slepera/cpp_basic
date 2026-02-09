#include <iostream>
using namespace std;

int main() {


    int eta, ral;
    char input_garanzie;
    bool garanzie;
    cout<<"inserisci la tua eta' ";
    cin>>eta;
    if (eta <=0) {
        cout<<"eta' non valida ";
        return 0;
    }
    cout<<"inserisci il tua RAL ";
    cin>>ral;
    cout<<"hai garanzie?(s/n) ";
    cin>>input_garanzie;
    if (input_garanzie!='s' and input_garanzie!='S'
        and input_garanzie != 'n' and input_garanzie != 'N')
    {
        cout<<"input non valido";
        return 0;
    }
    garanzie = (input_garanzie=='s') or (input_garanzie=='S');
    bool prestito;
    prestito = eta >= 21 and (garanzie or  ral >=20000);
    if (prestito) {
        cout<<"evviva hai ottenuto il prestito!"<<endl;
    }else {
        cout<<"mi dispiace non hai ottenuto il prestito!"<<endl;
    }




}