
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    int estrazione_precedente=11, estrazione=12, tot=0, n_successivo=0;
    srand(time(NULL));
    cout<<"Premi invio per generare un numero casuale";
    do
    {
        cin.get();
        estrazione_precedente=estrazione;
        estrazione = rand()%11;
        if(estrazione==estrazione_precedente+1)
        {
            n_successivo++;
        }
        cout<<estrazione;
        tot++;
    }
    while(estrazione != estrazione_precedente);
    cout<<"\nSono stati stampati "<<tot<<" numeri."<<endl;
    cout<<"Sono capitati numeri successivi "<<n_successivo<<" volte.";
    return 0;
}
