#include <iostream>
using namespace std;

int main()
{
    
    cout<<"overflow"<<endl;
    int b = INT_MAX;
    cout<<b<<endl;
    b++;
    cout<<b<<endl;

    cout<<"underflow"<<endl;
    b = INT_MIN;
    cout<<b<<endl;
    b--;
    cout<<b<<endl;
    return 0;
}