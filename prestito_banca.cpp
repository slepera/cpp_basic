#include <iostream>
using namespace std;

int main(){
    int eta;
    int ral;
    int prestito_max;

    cout<<"inserisci la tua eta': ";
    cin>>eta;
    cout<<"inserisci la tua RAL: ";
    cin>>ral;

    if (eta>=21 and ral>=20000) {
        prestito_max = ral * 3;
        cout<<"hai diritto ad accedere al prestito!!!"<<endl;
        cout<<"il tetto massimo e': "<<prestito_max<<endl;
    }else {
        cout<<"NON hai diritto ad accedere al prestito!!!"<<endl;
    }

}