#include <iostream>
#include <string.h>
using namespace std;

int main()
{

    int n;

    cout<<"inserisci il numero da verificare:";
    cin>>n;

    // for(int i = 2; i<=n/2; i = i +1)
    // {
    //     if(n%i==0)
    //     {
    //         cout<<n<<" non e' un numero primo!";
    //         return 0;
    //     }
    // }

    int i = 2;
    while(i<=n/2)
    {
        if(n%i==0)
        {
            cout<<n<<" non e' un numero primo!";
            return 0;
        }
        i = i +1;
    }
    cout<<n<<" e' un numero primo!";

}


