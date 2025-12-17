#include <iostream>
using namespace std;

int main(){
    int n=10;
    while(n>=1) {
        if (n%2!=0) {
            cout << n << endl;
        }
        n=n-1;
    }
    return 0;
}