#include <iostream>
using namespace std;
int main() {
    const int ETA_MINIMA = 30;
    const float REDDITO_MINIMO = 30000.0;
    int eta;
    float reddito;

    cout<<"inserisci la tua eta':";
    cin>>eta;
    cout<<"inserisci il tuo reddito:";
    cin>>reddito;

    if (eta<ETA_MINIMA) {
        cout<<"sei troppo giovane"<<endl;
        return 0;
    }
    if (reddito<REDDITO_MINIMO){
        cout<<"sei troppo povero"<<endl;
        return 0;
    }
    cout<<"il prestito e' stato accettato"<<endl;
    return 0;
}








// #include <iostream>
// using namespace std;
// int main() {
//
//     unsigned short int eta;
//     float reddito;
//
//     cout<<"Inserisce la tua eta'";
//     cin>>eta;
//
//     cout<<"Inserisce il tuo reddito";
//     cin>>reddito;
//
//
//     cout<<reddito<<endl;
//     if(eta<27)
//     {
//         cout<<"Sei troppo giovane!!!"<<endl;
//         return 0;
//     }
//     if(reddito < 20000)
//     {
//         cout<<"il reddito e' troppo basso"<<endl;
//         return 0;
//     }
//     cout<<"Hai diritto ad un prestito!!!"<<endl;
// }