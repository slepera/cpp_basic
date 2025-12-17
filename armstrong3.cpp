#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    int n_copia = n;
    int numero_cifre=0;
    int risultato = 0;
    while(n_copia > 0)
    {
        numero_cifre++;
        n_copia = n_copia / 10;
    }
    n_copia=n;
    while(n_copia > 0)
    {
        int singola_cifra = n_copia % 10;
        risultato = risultato + pow(singola_cifra, numero_cifre);
        n_copia = n_copia / 10;
    }


    if(risultato == n)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int main()
{
    int n;
    cout<<"inserisci un numero: ";
    cin>>n;
    bool armstrong_number= armstrong(n);
    if(armstrong_number == true)
    {
        cout<<"il numero "<<n<<" e' un numero di Armstrong!!!";
    }
    else
    {
        cout<<"il numero "<<n<<" NON e' un numero di Armstrong!!!";
    }
    return 0;
}