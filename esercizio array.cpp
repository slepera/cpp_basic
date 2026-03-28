#include <iostream>
using namespace std;
const int K=6;
void inserimento (int numeri[K]) {
    for (int i=0;i<K;i++) {
        cout<<"inserisci un numero";
        cin>>numeri[i];
    }
}
bool cerca(int n,int numeri[K]) {
    for (int i=0;i<K;i++) {
        if (n==numeri[i]) {
            return true;
        }
    }
    return false;
}
int main () {
    int numeri[K];
    int n=5;
    bool trovato;
    inserimento(numeri);
    trovato=cerca(n,numeri);
    if (trovato==true) {
        cout<<"il numero "<<n<<" e' presente nell'array "<<endl;
    }else {
        cout<<"il numero "<<n<<" non e' presente nell'array "<<endl;
    }
    return 0;
}