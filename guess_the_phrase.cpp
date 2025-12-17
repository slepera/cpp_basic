#include <iostream>
using namespace std;


void stampa(string frase, bool lettere[])
{
    for(int i = 0; i < frase.size(); i ++)
    {
        if(frase[i] == ' ')
        {
            cout<<" ";
        }
        else
        {
            if(lettere[frase[i]-'a'])
            {
                cout<<frase[i];
            }
            else
            {
                cout<<"*";
            }
        }
    }
}

void gioco(string frase)
{
    bool lettere[26] = {false};
    int tentativi = 0;
    int scelta;
    string indovina;
    const int SIZE = frase.size();
    char lettera;
    char tmp[SIZE];
    
    while(true)
    {
        stampa(frase, lettere);
        cout<<endl<<endl<<"Inserisci 0 per inserire una lettera, 1 per inserire una frase oppure 2 per arrenderti: ";
        cin>>scelta;
        cin.ignore();
        switch (scelta)
        {
            case 0:
                cout<<"Inserisci una lettera: ";
                cin>>lettera;
                lettere[lettera-'a'] = true;
                break;
            case 1:
                cout<<"Inserisci la frase che credi sia giusta: ";
                getline(cin, indovina);
                cin.ignore();
                if(frase == indovina)
                {
                    for(int i = 0; i < 26; i++)
                    {
                        lettere[i] = true;
                    }
                    cout<<"Complimenti hai indovinato la frase ";
                }
                break;
        }
    }    
}

int main()
{
    string frase;
    int ris;
    cout<<"Inserisci una frase: ";
    getline(cin, frase);
    cout<<endl;
    gioco(frase);
    cout<<"Per indovinare la frase ti ci sono voluti "<<ris<<" tentativi.";
    return 0;
}

