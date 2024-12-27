#include <iostream>
using namespace std;

int numero_voti = 0;
void aggiungi_voto(int voti[], int dim, int voto)
{
    if(numero_voti<dim)
    {
        voti[numero_voti] = voto;
    }
}

int main()
{
    const int N = 20;
    int voti[N]= {};
    aggiungi_voto(voti, N, 10);
}