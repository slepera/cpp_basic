#include <iostream>
using namespace std;
int main () {
    int somma=0;
    float media;
    int numeri[]={10,10,3,9,3};
    for (int i=0; i<5; i++) {
        somma=somma+numeri[i];
    }
    media=(float) somma/5;
    int n_max=numeri[0];
   for (int i=0; i<5; i++) {
       if (numeri[i]>n_max) {
           n_max=numeri[i];
       }
   }
    int n_min=numeri[0];
    for (int i=0; i<5; i++) {
        if (numeri[i]<n_min) {
           n_min=numeri[i];
        }
    }
    int voti_scarto=0;
    for (int i=0; i<5; i++) {
        if (numeri[i]<6) {
            voti_scarto=voti_scarto+6-numeri[i];
        }
    }



    cout<<"la media dei numeri e' "<<media<<endl;
    cout<<"il voto piu alto e' "<<n_max<<endl;
    cout<<"il voto piu basso e' "<<n_min<<endl;
    cout<<"i voti di scarto sono "<<voti_scarto<<endl;

    int percentuale_assenze;
    cout<<"inserisci la percentuale assenze";
    cin>>percentuale_assenze;
    if (percentuale_assenze>25) {
        cout<<"sei bocciato";
        return 0;
    }

    if (media>=6) {
        cout<<"Sei Promosso!";
    }else if (media>5 and voti_scarto<4){
        cout<<"Sei a rischio bocciatura";
    }else{
        cout<<"sei bocciato";
    }
}