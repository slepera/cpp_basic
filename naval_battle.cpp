#include <iostream>
#include <string.h>
using namespace std;

const int DIM = 10;
const int NSHIPS = 5;
int hit = 0;



void print(unsigned short int field[DIM][DIM])
{
    
    cout<<"      A    B    C    D    E    F    G    H    I    J"<<endl;
    for(int i = 0; i < DIM; i++)
    {
        cout<<i+1<<"   ";
        for(int j = 0; j < DIM; j++)
        {
            if(field[i][j]==0)
            {
                cout<<"     ";
            }
            else if(field[i][j]==1)
            {
                cout<<"  *  ";
            }
            else
            {
                cout<<"  x  ";
            }
        }
        cout<<endl<<endl;
    }
    cout<<endl<<endl<<endl;
}

void generate_fields(unsigned short int field[DIM][DIM])
{
    for(int i = 0; i < NSHIPS; i++)
    {
        int x = rand()%DIM;
        int y = rand()%DIM;
        field[x][y] = 1;
        cout<<x<<" "<<y<<" ";
    }
    cout<<endl;
}

void shoot(unsigned short int field[DIM][DIM])
{
    string xs;
    int x, y;
    cout<<"inserisci la coordinata x (A-Z):";
    cin>>xs;
    cout<<"inserisci la coordinata y (1-10):";
    cin>>y;
    x = tolower(xs[0])-97;
    y = y-1;
    cout<<x<<" "<<y<<endl;
    if(field[y][x]==1)
    {
        field[y][x]=2;
        hit++;
    }
    
}
bool is_over()
{
    if(hit == NSHIPS)
    {
        return true;
    }
    else{
        return false;
    }
}
int main()    
{
    unsigned short int field_1[DIM][DIM];
    unsigned short int field_2[DIM][DIM];
    generate_fields(field_1);
    print(field_1);
    do{
        shoot(field_1);
        print(field_1);
    }while(!is_over());
    cout<<"game over!";
}
