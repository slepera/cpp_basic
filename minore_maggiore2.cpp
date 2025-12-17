#include <iostream>
using namespace std;


int main()
{


    char c;
    int i;
    float f;
    double d;


    int a;
    int b;
    
    int minore;
    int maggiore;


    cout<<"inserisci il primo intero:";

    cin>>a;

    cout<<"inserisci il secondo intero:";

    cin>>b;

    if(a>b)
    {
        maggiore = a;
        minore = b;

    }
    else
    {
        maggiore = b;
        minore = a;

    }

    cout<<"il maggiore è "<<maggiore<<endl;
    cout<<"il minore  è "<<minore;

}