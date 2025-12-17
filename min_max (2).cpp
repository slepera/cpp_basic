#include <iostream>

using namespace std;
int main() {
    int massimo;
    massimo=-1;
    int n;
    int conta=0;
    do {
        conta++;
        cout<<"inserisci un numero";
        cin>>n;

       if (n>massimo and n>=0) {
            massimo=n;

       }
    }while (n>=0);
    if (conta==1) {
        cout<<"non e' stato trovato nessun numero positivo ";
    }else {
        cout<<"il massimo e':"<<massimo;
    }
return 0;


}