#include <iostream>
#include <ctime>
using namespace std;
int main() {
    int n_alunni;
    int n_casuale;
    char scelta;
    srand(time(NULL));
    cout<<"Quanti alunni ci sono?  ";
    cin>>n_alunni;
    do {
        do {
            n_casuale = rand()%n_alunni+1;
        }while (n_casuale%2!=0);
        cout<<"E' uscito lo studente: "<<n_casuale<<endl;
        cout<<"Vuoi interroggare un altro studente? (s/n): ";
        cin>>scelta;
    }while (scelta== 's' or scelta== 'S');
    return 0;
}