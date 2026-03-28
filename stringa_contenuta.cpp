#include <iostream>
using namespace std;
const int DIM=10;
void stampa( int numeri[DIM]) {
    for (int i=0;i<DIM;i++) {
        cout<<numeri[i]<<" ";
    }
    cout<<endl;

}
void stampa_inversa( int numeri[DIM]) {
    for (int i=DIM-1;i>=0;i--) {
        cout<<numeri[i]<<" ";
    }
    cout<<endl;

}

int somma(int numeri[DIM]) {
    int s=0;
    for (int i=0;i<DIM;i++) {
        s=numeri[i]+s;
    }
    return s;
}
bool crescente(int numeri[DIM]) {
    for (int i=0;i<DIM-1;i++) {
        if (numeri[i]>numeri[i+1]) {
            return false;
        }
    }
    return true;
}
int main() {
int numeri[DIM];int num; int s;
    for (int i=0;i<DIM;i++) {
        numeri[i]=i*2;
    }
    numeri[4]=100;
    stampa(numeri);
    stampa_inversa(numeri);
    s=somma(numeri);
    cout<<"La somma dei numeri e':"<<s<<endl;
    if (crescente(numeri)) {
        cout<<"La sequenza e' in ordine crescente "<<endl;
    }else {
        cout<<"La sequenza non e' in ordine crescente "<<endl;
    }

}