#include <iostream>
using namespace std;

int main() {
    string frase, parola;
    getline(cin,frase);
    cout<<"inserisci una parola:";
    cin>>parola;
    cout<<"la frase "<<frase<<" e' lunga "<<frase.size()<<" caratteri"<<endl;
    cout<<"la frase "<<frase<<" inizia con "<<frase.front()<<endl;
    cout<<"la frase "<<frase<<" termina con "<<frase.back()<<endl;
    int i = frase.find(parola,0);
    if (i!=-1) {
        cout<<"la frase "<<frase<<" contiene la parola "<<parola<<endl;
    }else {
        cout<<"la frase "<<frase<<" NON contiene la parola "<<parola<<endl;
    }




    string parola1, parola2;
    cout<<"inserisci una parola:";
    cin>>parola1;
    cout<<"inserisci una parola:";
    cin>>parola2;

    int r = parola1.compare(parola2);
    if (r==0) {
        cout<<"le due parole coincidono"<<endl;
    }else if (r>0) {
        cout<<parola1<<" viene dopo "<<parola2;
    }else {
        cout<<parola1<<" viene prima di "<<parola2;

    }


}