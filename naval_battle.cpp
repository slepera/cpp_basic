#include <iostream>
#include <string.h>
using namespace std;

const int DIM = 10;
const int NSHIPS = 5;



void print(bool field[DIM][DIM])
{
    cout<<"  A  B  C  D  E  F  G  H  I  L"<<endl;
    for(int i = 0; i < DIM; i++)
    {
        cout<<i+1;
        for(int j = 0; j < DIM; j++)
        {
            if(field[i][j]==true)
            {
                cout<<" * ";
            }
            else
            {
                cout<<"   ";
            }
        }
        cout<<endl;
    }
    cout<<endl<<endl<<endl;
}

void generate_fields(bool field[DIM][DIM])
{
    for(int i = 0; i < NSHIPS; i++)
    {
        int x = rand()%DIM;
        int y = rand()%DIM;
        field[x][y] = true;
    }
}


int main()    
{
    bool field_1[DIM][DIM];
    bool field_2[DIM][DIM];
    generate_fields(field_1);
    print(field_1);
}
