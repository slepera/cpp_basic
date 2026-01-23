#include <iostream>
using namespace std;
int main () {
    char carattere, carattere_inverso;
    cout<<"inserisci un carattere";
    cin>>carattere;
    if ( carattere>='A' and carattere<='Z') {
        cout<<"il carattere inserito e' una lettera MAIUSCOLA"<<endl;
        cout<<"la lettera "<<carattere <<" e' in posizione " <<carattere-'A'+1<<endl;
        carattere_inverso=carattere+('a'-'A');
        cout<<"il carattere minuscolo e' "<<carattere_inverso<<endl;

    } else if ( carattere>='a' and carattere<='z') {
        cout<<"il carattere inserito e' una lettera minuscola"<<endl;
        cout<<"la lettera "<<carattere <<" e' in posizione " <<carattere-'a'+1<<endl;
        carattere_inverso=carattere-('a'-'A');
        cout<<"il carattere maiuscolo e' "<<carattere_inverso<<endl;

    }else if (carattere>='0' and carattere<='9') {
        cout<<"il carattere e' un numero";
    }else {
        cout<<" il carattere inserito e' un simbolo";
    }
    return 0;
}