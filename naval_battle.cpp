#include <iostream>
#include <string.h>
using namespace std;

const int DIM = 10;
const int NSHIPS = 5;
int your_hit = 0;
int your_opponent_hit = 0;



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

void generate_field(unsigned short int field[DIM][DIM])
{
    for(int i = 0; i < NSHIPS; i++)
    {
        int x = rand()%DIM;
        int y = rand()%DIM;
        field[x][y] = 1;
    }
}

void generate_empty_field(unsigned short int field[DIM][DIM])
{
    for(int i = 0; i < DIM; i++)
    {
        for(int j = 0; j < DIM; j++)
        {
            field[i][j] = 0;
        }      
    }
}

void your_shoot(unsigned short int field[DIM][DIM])
{
    string xs;
    int x, y;
    char hit;
    cout<<"YOUR x (A-J):";
    cin>>xs;
    cout<<"YOUR y (1-10):";
    cin>>y;
    cout<<"has been hit? (y/n):";
    cin>>hit;
    x = tolower(xs[0])-97;
    y = y-1;

    if(hit=='y')
    {
        field[y][x]=2;
        your_hit++;
    }  
}

void your_opponent_shoot(unsigned short int field[DIM][DIM])
{
    string xs;
    int x, y;
    cout<<"Opponent x (A-J):";
    cin>>xs;
    cout<<"Opponent y (1-10):";
    cin>>y;
    x = tolower(xs[0])-97;
    y = y-1;
    if(field[y][x]==1)
    {
        field[y][x]=2;
        your_opponent_hit++;
    }  
}

bool is_over()
{
    if(your_hit == NSHIPS)
    {
        cout<<"You Won!!!"<<endl;
        return true;
    }
    else if(your_opponent_hit == NSHIPS){
        cout<<"You Lost!!!"<<endl;
        return true;
    }
    else
    {
        return false;
    }
}
int main()    
{
    unsigned short int field_1[DIM][DIM];
    unsigned short int field_2[DIM][DIM];
    generate_field(field_1);
    generate_empty_field(field_2);
    print(field_1);
    print(field_2);
    while(true){
        your_shoot(field_2);
        print(field_1);
        print(field_2);
        if(is_over())
        {
            break;
        }
        your_opponent_shoot(field_1);
        print(field_1);
        print(field_2);
        if(is_over())
        {
            break;
        }
    }
}
