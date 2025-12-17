#include <iostream>
using namespace std;



int main()
{
    int n;

    cout<<"inserisci un numero intero:";
    cin>>n;


    while(n>1)
    {
        n  = n - 2;
    }
    if(n==1)
    {
        cout<<"il numero e' dispari";
    }
    else
    {
        cout<<"il numero e' pari";
    }
}