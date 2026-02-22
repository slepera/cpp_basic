#include <iostream>
using namespace std;
int main() {
    string parola;
    cout<< "inserisci una parola "<<endl;
    cin>> parola;
    int len = parola.length();
    for (int i=0;i<len/2; i++) {
        if (parola[i]!=parola[len-i-1]) {
            cout<<"la parola non e' palindroma "<<endl;
            return 0;
        }
    }
    cout<<"la parola e'palindroma "<<endl;


}