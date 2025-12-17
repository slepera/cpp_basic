#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main() {
    int precedente, successivo=-1, n_estratti=0, n_successivi=0;
    srand(time(NULL));
    do {
        precedente=successivo;
        successivo=rand()%11;
        cout<<successivo<<" ";
        n_estratti++;
        if (successivo==precedente+1) {
            n_successivi++;
        }

    }while (precedente!=successivo);
    cout<<endl<<"i numeri estratti totali sono "<<n_estratti<<endl;
    cout<<"i numeri successivi uguali sono "<<n_successivi;
}