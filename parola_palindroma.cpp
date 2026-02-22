#include <iostream>

using namespace std;

int main() {

    string parola;
    cout<<"inserisci una parola: "<<endl;
    cin>>parola;
    int l=parola.length();
    for (int i=0; i<l/2; i++) {
        if (parola[i] != parola[l-i-1]) {
            cout<<"la parola non e' palindroma";
            return 0;
        }
    }
    cout<<"la parola e' palindroma";

}