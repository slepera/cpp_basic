#include <iostream>
using namespace std;

const int NROW = 7, NCOL = 7;

void load_scores(int scores[][NCOL])
{
    srand(time(NULL));
    for(int i = 0; i < NROW; i++)
    {
        for(int j = 0; j < NCOL; j++)
        {
            scores[i][j] = rand () % 41;
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

int max_score(int scores[][NCOL])
{
    int max_row = 0, max_index_player = 0, max_index_game = 0;
    for(int i = 0; i < NROW; i++)
    {
        int sum = 0;
        for(int j = 0; j < NCOL; j++)
        {
            sum += scores[i][j];
        }
        if(sum > max_row)
        {
            max_row = sum;
            max_index_player = i;
        }
    }
    int max = 0;
    for(int j = 0; j < NCOL; j++)
    {
        if(scores[max_index_player][j] > max)
        {
            max = scores[max_index_player][j];
            max_index_game = j;
        }
    }
    int final_sum = 0;
    for(int i = 0; i < NROW; i++)
    {
        final_sum += scores[i][max_index_game];
    }
    return final_sum;
}

int main()
{
    int scores[NROW][NCOL];
    load_scores(scores);
    print_scores(scores);
    int somma = max_score(scores);
    cout << endl <<"------------";
    cout << endl <<somma;
}