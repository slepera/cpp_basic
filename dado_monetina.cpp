#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    srand(time(NULL));
    int numero_previsto;
    int numero_uscito;
    int tentativi=0;
    while (tentativi<2) {
         cout<<"hai ancora "<<tentativi<<" tentativi"<<endl;
         cout<<"prova ad indovinare (0 per testa, 1 per croce): ";
         cin>>numero_previsto;
         numero_uscito = rand()%2;
         if (numero_uscito==0) {
              cout<<"e' uscito testa"<<endl;
         }else {
              cout<<"e' uscito croce"<<endl;
         }
         if (numero_previsto == numero_uscito) {
              cout<<"Complimenti hai indovinato!!!"<<endl;
              return 0;
         }
         tentativi=tentativi + 1;
         if (tentativi<2){
              cout<<"Ritenta NON hai indovinato!!!"<<endl;
         }
         else {
              cout<<"hai esaurito il numero di tentativi"<<endl;
         }
    }
     return 0;
}
