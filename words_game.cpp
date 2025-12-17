#include <iostream>
#include <chrono>
#include <thread>
#include <cstring>
using namespace std;


void stampa_frase(const char* righe[], int num_righe, bool lettere[])
{
    for(int i = 0; i < num_righe; i++)
    {
        for(int j = 0; j < strlen(righe[i]); j++)
        {
            if(righe[i][j]==' ')
            {
                cout<<" ";
                continue;
            }
            if(lettere[righe[i][j]-97])
            {
                cout<<righe[i][j];
            }
            else
            {
                cout<<"*";
            }
            
        }
        cout<<endl;
    }
}

void scegli_lettera(bool lettere[])
{
    char c;
    cout<<"scegli una lettera: ";
    cin>>c;
    lettere[c-97] = true;
}

int main()
{
    const int N = 3;
    const char* righe[N];
    bool lettere[22]  = {false};

    righe[0] = "le materie piu belle sono";
    righe[1] = "informatica e matematica";
    righe[2] = "buono studio";

    while(true)
    {
        stampa_frase(righe, N, lettere);
        scegli_lettera(lettere);
        this_thread::sleep_for(chrono::milliseconds(1000));
    }
    

}