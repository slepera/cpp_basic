#include <iostream>
using namespace std;

const int NROW = 10, NCOL = 10;
int trova_minimo(int matrice[][NCOL])
{
    int minimo=INT_MAX;
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            if(matrice[i][j]<minimo)
            {
                minimo=matrice[i][j];
            }
        }
    }
    return minimo;
}
void load_scores(int scores[][NCOL])
{
    srand(time(NULL));
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            scores[i][j] = rand () % 41+60;
        }
    }
}

void print_scores(int scores[][NCOL])
{
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            cout << scores[i][j] << " ";
        }
        cout << endl;
    }
}


int main()
{
    int tabella[NROW][NCOL];
    load_scores(tabella);
    print_scores(tabella);
    int risultato=trova_minimo(tabella);
    cout<<risultato;



}