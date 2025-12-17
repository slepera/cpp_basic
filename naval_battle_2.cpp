#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

const int NROW = 10, NCOL = 10;

void build_battle_field(int battle_field[NROW][NCOL])
{
    srand(time(NULL));
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            battle_field[i][j] = rand () % 2;
        }
    }
}

void print_battle_field(int battle_field[NROW][NCOL])
{
    char lettera = 97;
    system("cls");
    for(int i = 0; i < NROW; i++)
    {
        cout << lettera << "  ";
        lettera ++;
        for(int j = 0; j < NCOL; j++)
        {
            if(battle_field[i][j] == 0 || battle_field[i][j] == 1)
            {
                cout << setw(2) << "* ";
            }
            if(battle_field[i][j] == 2)
            {
                cout << setw(2) <<"  ";
            }
            if(battle_field[i][j] == 3)
            {
                cout << setw(2) << "X ";
            }
        }
        cout << endl;
    }
    cout <<"   ";
    for(int i = 0; i < NCOL; i++)
    {
        cout << i + 1 << " "; 
    }
    cout << endl;
}

void make_a_move(int battle_field[NROW][NCOL])
{
    char x;
    int y;
    cout << "Inserisci le cordinate: ";
    cin >> x >> y;
    y--;
    x -= 97;
    if(battle_field[x][y] == 0)
    {
        battle_field[x][y] = 2;
    }
    if(battle_field[x][y] == 1)
    {
        battle_field[x][y] = 3;
    }
}

int main()
{
    int battle_field[NROW][NCOL] = {0};
    build_battle_field(battle_field);
    print_battle_field(battle_field);
    for(;;)
    {
        make_a_move(battle_field);
        print_battle_field(battle_field);
    }
    
}