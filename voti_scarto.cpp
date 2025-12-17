#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n_materie;
    float voto, voti_scarto = 0;
    cout<<"Quante sono le materie? ";
    cin>>n_materie;

    for (int i = 1; i <= n_materie; i++) {
        cout<<"Inserisci il voto per la materia "<<i<<":";
        cin>>voto;
        voti_scarto = voti_scarto + max((float)0,6 - voto);
    }
    cout<<"Hai "<<voti_scarto<<" voti di scarto!"<<endl;
    if (voti_scarto<3) {
        cout<<"stai tranquillo dovresti passare all'anno successivo"<<endl;
    }else if (voti_scarto>=3 and voti_scarto<4) {
        cout<<"basso rischio di ripetere l'anno"<<endl;
    }else {
        cout<<"alto rischio di perdere l'anno"<<endl;
    }
}