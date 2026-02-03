#include <iostream>
using namespace std;

int main() {
    int numero_voti;
    float voti[100], media = 0;

    cout<<"quanti voti vuoi inserire?";
    cin>>numero_voti;

    for (int i = 0; i < numero_voti; i++) {
        cout<<"inserisci un voto: ";
        cin>>voti[i];
    }

    for (int i = 0; i < numero_voti; i++) {
        media = media + voti[i];
    }

    media = media / numero_voti;
    cout<<"la media e': "<<media;




}