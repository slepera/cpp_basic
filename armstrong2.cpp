#include <iostream>
#include <string>
#include <cmath>
using namespace std;

bool armstrong(int n)
{
    string s = to_string(n);
    int potenza = s.size();
    int risultato = 0;
    for(int i = 0; i < potenza; i++)
    {
        int singola_cifra = (int)s[i] - (int)'0';
        risultato = risultato + pow(singola_cifra, potenza);
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