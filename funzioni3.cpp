#include <iostream>
using namespace std;


void disegna_linea_orizzontale(int a)
{
    for(int i = 0; i < a; i++)
    {
        cout<<"*";
    }
    cout<<endl;
}

void disegna_linea_verticale(int a)
{
    for(int i = 0; i < a; i++)
    {
        cout<<"*"<<endl;
    }
    cout<<endl;
}

void disegna_linea_obliqua(int a)
{
    for(int i = 0; i < a; i++)
    {
        for(int j = 0; j< a; j++)
        {
            if(i==j)
            {
                cout<<"*";
            }
            else{
                cout<<" ";
            }
        }
        cout<<endl;
    }
    cout<<endl;
}

int main()
{
    int n;
    int scelta;
    cout<<"inserisci la dimensione: ";
    cin>>n;


    cout<<"inserisci 1 per linea orizzontale\n";
    cout<<"inserisci 2 per linea verticale\n";
    cout<<"inserisci 3 per linea obliqua\n";
    cin>>scelta;

    switch(scelta)
    {
        case 1:
            disegna_linea_orizzontale(n);
            break;
        case 2:
            disegna_linea_verticale(n);
            break;
        case 3:
            disegna_linea_obliqua(n);
            break;
        default:
            cout<<"scelta non consentita."<<endl;
    }
}