#include <iostream>
using namespace std;

int main()
{

    int voti[10];



    for(int i = 0; i < 10; i++)
    {
        cout<<"inserisci un numero:";
        cin>>voti[i];
    }



    int somma=0;
    float media = 0;
    for(int i = 0; i < 10; i++)
    {
        somma = somma + voti[i];
    }
    media = (float)somma / 10;
    cout << "la media è di: "<<media;


}