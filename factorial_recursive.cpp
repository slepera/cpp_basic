#include <iostream>
using namespace std;

/*
factorial(n) = n * n-1 * n-2 * n-3 * n-4 * ---------- * 2 * 1;
factorial(n) = n * factorial(n-1);
factorial(n) = n * n-1 * factorial(n-2);
factorial(n) = n * n-1 * n-2 * factorial(n-3);
factorial(n) = n * n-1 * n-2 * n-3 * factorial(n-4);
*/

unsigned int factorial(unsigned int n)
{
    if(n==1)
        return 1;
    else
        return n * factorial(n-1);
}

int main()
{
    const int n = 9;
    unsigned int res = factorial(n);
    cout<<"il fattoriale di "<< n <<" e' "<<res;  
}