#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main () {
    char pronto;
    srand(time(NULL));
    cout<<"scegli un numero tra 1 e 10"<<endl;
    cout<<"Premi invio quando sei pronto"<<endl;
    cin.ignore();
    while (true) {
        char scelta;
        int numero= rand()%10 +1;

        cout<<"Il numero scelto e' "<<numero<< "? (s/n)";
        cin>>scelta;
        if ( scelta == 's' ) {
            break;
        }
    }
    return 0;
}