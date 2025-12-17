#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;
int main() {
    int n1, n2; char scelta;
    srand(time(NULL));
    do {
        n1= rand()%1001+1000;
        n2= rand()%1001;
        if (n1%n2==0) {
            cout<<"Il numero "<<n1<<" e' multiplo di "<<n2<<endl;
        } else {
            cout<<"Il numero "<<n1<<" non e' multiplo di "<<n2<<endl;
        }
        cout<<"Vuoi continuare?";
        cin>>scelta;



    } while (scelta=='S' or scelta=='s');

    return 0;
}
