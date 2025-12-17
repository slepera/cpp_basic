#include <iostream>
using namespace std;

int max(int v[10])
{
    cout<<sizeof(v)/sizeof(int)<<endl;
    int m = 0;
    for(int i = 0; i < 10; i++)
    {
        if(v[i]>m)
        {
            m = v[i];
        }
    }
    return m;
}

int main() {

    int v[10];
    cout<<sizeof(v)/sizeof(int)<<endl;
    for(int i = 0; i < 10; i++)
    {
        v[i] = i;
    }
    int m = max(v);
    cout<<m;
    return 0;
}
