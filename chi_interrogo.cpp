#include <iostream>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(){
    int n_alunni;
    int n_casuale;
    char scelta;
    cout << "Inserisci numero di alunni: ";
    cin >> n_alunni;
    srand(time(NULL));
    do {
        n_casuale = rand() % n_alunni + 1;
        cout<<"lo studente interrogato e' il numero "<<n_casuale<<endl;
        cout<<"vuoi estrarre un altro studente?(s/n) "<<endl;
        cin>>scelta;
    }while(scelta=='s');

    cout<<"alla prossima interrogazione!!!"<<endl;
    return 0;
}