//
// Created by Salvatore on 17/02/2026.
#include<iostream>
using namespace std;
int main(){
    string parola;
    char c;
    int conta=0;
    cout<<"inserisci una parola";
    cin>>parola;
    cout<<"inserisci un carattere";
    cin>>c;
    for (int i=0; i<parola.length();i++) {
        if (c==parola[i]) {
            conta++;
        }
    }
    cout<<"ci sono "<<conta<<" "<<c<<" in "<<parola;
    return 0;
}