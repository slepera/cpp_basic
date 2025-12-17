#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main(){
    int risultato;
    int n_1,n_2;
    srand(time(NULL));
    for (int i=1; i<=10; i++) {
        n_1=rand()%11;
        n_2=rand()%11;
        cout<<n_1<<"x"<<n_2<<endl;
        cout<<"inserisci il risultato del prodotto dei due numeri";
        cin>>risultato;
        if (risultato == n_1*n_2)
            cout<<





    }








}