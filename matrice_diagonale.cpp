#include <iostream>
using namespace std;

const int NCOL = 5, NROW = 5;

void crea(int matrix[NROW][NCOL])
{
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            if(i == j)
            {
                matrix[i][j] = 1;
            }
            else
            {
                matrix[i][j] = 0;
            }
        }
    }
}

void moltiplica(int matrix[NROW][NCOL], int moltiplicatore)
{
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            matrix[i][j] *= moltiplicatore;
        }
    }
}

void stampa(int matrix[NROW][NCOL])
{
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main()
{
    int matrix[NROW][NCOL];
    crea(matrix);
    stampa(matrix);
    moltiplica(matrix, 5);
    stampa (matrix);
    return 0;
}