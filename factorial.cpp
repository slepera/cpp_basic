#include <iostream>
using namespace std;

int main()
{
    const int n = 9;
    unsigned int res = 1;

    for(int i = 2; i <= n; i++)
    {
        res = res * i;
    }

    cout<<"il fattoriale di "<< n <<" e' "<<res;  

}