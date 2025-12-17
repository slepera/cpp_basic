#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main() {
    const int N_SEQUENZE=5;
    int n;
    srand(time(NULL));
    for (int i=0;i<N_SEQUENZE;i++) {
        int somma=0;
        cout<<"Sequenza "<<i+1<<") ";
        while (somma<=90) {
            n=rand()%11;
            cout<<n<<" ";
            somma=somma+n;
        }
        cout<<" somma="<<somma<<endl;
    }

    return 0;
}