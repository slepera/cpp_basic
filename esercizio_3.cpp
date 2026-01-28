
#include <iostream>
#include <ctime>
using namespace std;

int main(){
  int dado, n_scelto, n_tentativi=0;
  do {
    cout<<"scegli un numero:   ";
    cin>>n_scelto;

    srand(time(NULL));
    dado=rand()%6+1;
    cout<<"e' uscito il numero: "<<dado<<endl;
    if (n_scelto==dado) {
      cout<<"hai vinto!"<<endl;
    }else {
      cout<<"hai perso"<<endl;
    }
    n_tentativi++;
  }while (n_scelto!=dado);
  cout<<"hai effettuato "<<n_tentativi<<" tentativi in tot"<<endl;
  return 0;
}