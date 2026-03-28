#include <iostream>
using namespace std;
bool palindromo(int numeri[],size_t l) {
    for (int i=0;i<l/2;i++) {
        if (numeri[i]!=numeri[l-i-1]) {
           return false;
        }
    }
    return true;
}

int main () {
    int numeri[]={5,1,2,3,2,1,5};
    size_t l=sizeof(numeri)/sizeof(numeri[0]);
    bool p=palindromo(numeri,l);
    if (p) {
        cout<<"L'array e' palindromo";
    }else {
        cout<<"L'array non e' palindromo";
    }
}