#include <iostream>
#include <iomanip>

using namespace std;

void print_battle_field(int **battle_field, int dim)
{
    system("cls");

    cout<<endl;
    for(int i = 0; i < dim; i++)
    {
        cout << setw(2) << "|";
        for(int j = 0; j < dim; j++)
        {
            if((battle_field[i][j]==0)||(battle_field[i][j]==1))
            {
                cout << setw(2) << "*";
            }
            if(battle_field[i][j]==2)
            {
                cout << setw(2) << " ";
            }
            if(battle_field[i][j]==3)
            {
                cout << setw(2) << "X";
            }
        }
        cout << setw(2) << "|";
        cout<<endl;
    }

    cout<<endl;

}

int** build_battle_field(int dim)
{
    int **battle_field;
    srand(time(NULL));
    battle_field = new int*[dim];
    for(int i = 0; i < dim; i++)
    {
        battle_field[i] = new int[dim];
        for(int j = 0; j < dim; j++)
        {
            battle_field[i][j] = rand()%2;
        }
    }
    return battle_field;
}

void make_a_move(int **battle_field, int dim)
{
    int i, j;
    cout<<"Make a move: ";
    cin>>i>>j;
    if(battle_field[i][j]==0)
    {
        battle_field[i][j]=2;
    }
    if(battle_field[i][j]==1)
    {
        battle_field[i][j]=3;
    }
    
}

int main()
{
    const int DIM = 5;
    int **battle_field;
    battle_field = build_battle_field(DIM);
    print_battle_field(battle_field, DIM);
    while(true)
    {
        make_a_move(battle_field, DIM);
        print_battle_field(battle_field, DIM);
    }
}