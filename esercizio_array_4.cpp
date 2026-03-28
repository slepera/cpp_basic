#include<iostream>
using namespace std;
int main() {
    int numeri [6];
    int media=0;
    int somma=0;

    for (int i= 0; i<6;i++) {
        cout<<"inserisci un numero";
        cin>>numeri[i];
        somma=somma+numeri[i];


    }
    media=somma/6;
    cout<<"la media è "<<media;
    return 0;
}

