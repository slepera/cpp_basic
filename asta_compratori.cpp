#include <iostream>
using namespace std;

int main() {
    int offerta;
    int offerta_max = 0;
    int turno = 1;
    do {
        cout<<"Offerta Max = "<<offerta_max<<endl;
        cout<<"Offerta Compratore "<<turno<<" (0 per ritirarsi): ";
        cin>>offerta;
        if (offerta!=0) {
            offerta_max = offerta;
        }
        turno = turno % 2 +1;
    }while (offerta!=0);
    cout<<"Complimenti compratore "<<turno<<" ti sei aggiudicato l'asta con un offerta di "<<offerta_max;
    return 0;
}