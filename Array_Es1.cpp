#include <iostream>
using namespace std;

int main()
{
    const int N = 10;
    int numeri_inseriti[N];
    int numeri_senza_ripetizioni[N];
    int numero;
    for(int i=0; i<N; i++)
    {
        cout<<"Inserisci un numero intero: ";
        cin>>numero;
        numeri_inseriti[i] = numero;
    }
    int contatore_numeri_diversi = 0;
    bool numero_ripetuto = false;
    for(int i = 0; i < N; i++)
    {
        numero_ripetuto = false;
        for(int j = 0; j<contatore_numeri_diversi; j++)
        {
            if(numeri_inseriti[i]==numeri_senza_ripetizioni[j])
            {
                numero_ripetuto = true;
                break;
            }
        }
        if(numero_ripetuto==false)
        {
            numeri_senza_ripetizioni[contatore_numeri_diversi] = numeri_inseriti[i];
            contatore_numeri_diversi++;
        }
    }

    for(int i = 0; i < contatore_numeri_diversi; i++)
    {
        cout<<numeri_senza_ripetizioni[i]<<" ";
    }

}