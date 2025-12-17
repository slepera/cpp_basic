#include <iostream>
using namespace std;

const int N = 10;

void crea_tab(int tab[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            tab[i][j] = (i+1) * (j+1);
        }
    }
}


void stampa(int tab[][N])
{
    for(int i = 0; i < N; i++)
    {
        for(int j = 0; j < N; j++)
        {
            if(tab[i][j]>=10)
                cout<<" ";
            else
                cout<<"  ";
            cout<<tab[i][j];

        }
        cout<<endl;
    }
}

int main()
{
    int tab[N][N];

    crea_tab(tab);

    stampa(tab);



}