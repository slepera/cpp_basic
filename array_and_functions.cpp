#include <iostream>
using namespace std;

int* funzione1()
{
    int *a = new int[10]{1,2,3,4,5,6,7,8,9,20};
    a[0] = 1;
    return a;
}

int main()
{
    int* r = funzione1();
    for(int i = 0; i < 10; i++)
    {
        cout<<r[i]<<" ";
    }
}