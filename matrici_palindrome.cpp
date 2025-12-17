#include <iostream>
using namespace std;
const int N = 4, M = 4;
void inserimento_matrice(int matrice[][M])
{
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            cout<<"Inserisci il valore della cella ("<<i<<","<<j<<") :";
            cin>>matrice[i][j];
        }
    }
}

void stampa_matrice(int matrice[][M])
{
    for(int i = 0; i < N; i ++)
    {
        for(int j = 0; j < M; j ++)
        {
            cout<<matrice[i][j];
        }
        cout<<endl;
    }
}

int somma_riga(int matrice[][M], int riga)
{
    int ris = 0;
    for(int i = 0; i < M; i ++)
    {
        ris = ris + matrice[riga][i];
    }
    return ris;
}

bool palindroma(int matrice[][M])
{
    for(int i = 0; i < N/2; i ++)
    {
        int j = N - i - 1;
        int somma1 = somma_riga(matrice, i);
        int somma2 = somma_riga(matrice, j);
        if(somma1 != somma2)
        {
            return false;
        }    
    }
    return true;
}

int main()
{
    int matrice [N][M];
    inserimento_matrice(matrice);
    stampa_matrice(matrice);
    bool pal = palindroma(matrice);
    cout<<pal;

}