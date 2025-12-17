#include <iostream>
using namespace std;

void create_matrix(int** &matrix, int row, int col)
{
    matrix = new int*[row];
    for(int i = 0; i < row; i++)
    {
        matrix[i] = new int[col];
        for(int j = 0; j < col; j++)
        {
            matrix[i][j]=i*j;
        }
    }
}

void print_matrix(int** matrix, int row, int col)
{
    for(int i = 0; i < row; i++)
    {
        for(int j = 0; j < col; j++)
        {
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    int row, col;
    int** matrix;
    cout<<"insert number or row: ";
    cin>>row;
    cout<<"insert number or col: ";
    cin>>col;
    create_matrix(matrix, row, col);
    print_matrix(matrix, row, col);

}