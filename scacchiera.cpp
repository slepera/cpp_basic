#include <iostream>
using namespace std;

int main()
{
    int matrice[4][4];
    bool scacchiera = true;
    for(int i = 0; i < 4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cin>>matrice[i][j];
        }
    }
    for(int i = 0; i < 4; i++)
    {
        for(int j=0; j<4; j++)
        {
            cout<<matrice[i][j];
        }
        cout<<endl;
    }

    for(int i = 0; i < 4; i++)
    {
        for(int j=0; j<4; j++)
        {
            if(matrice[i][j]!=(i+j)%2)
            {
                scacchiera = false;
            }
        }
    }
    if(scacchiera)
    {
        cout<<"è una scacchiera!!!";
    }
    else
    {
        cout<<"NON è una scacchiera!!!";
    }
}