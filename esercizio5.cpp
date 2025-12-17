#include <iostream>
using namespace std;
int main() {
    int n1, n2;
    bool mcd_trovato=false;
    cout<<"inserisci due numeri naturali";
    cin>>n1>>n2;
    if (n2>n1) {
        for (int i=n1+1;i<n2;i++) {
            cout<< i <<" ";
        }
    }
    else {
        for (int i=2;i<=n2;i++) {
            if (n2%i==0&&n1%i==0) {
                cout<<"m.c.d tra "<<n1<<" e "<<n2<<" e' "<<i;
                mcd_trovato=true;
                break;
            }
        }
         if (mcd_trovato==false) {
             cout<<"m.c.d tra "<<n1<<" e "<<n2<<" e' 1";
         }
    }
    return 0;
}