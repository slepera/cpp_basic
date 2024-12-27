#include <iostream>
using namespace std;

string dec2bin(int n)
{
    string res;
    while(n>0)
    {
        if(n%2==0)
        {
            res = '0'+res;
        }
        else
        {
            res = '1'+res;
        }
        n = n/2;
    }
    return res;
}


int main()
{
    string bin = dec2bin(6);
    cout<<bin;
}