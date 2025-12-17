#include <sys/time.h>
#include<iostream>
using namespace std;

int main()
{
    time_t now;
    time(&now);
    int years_from_1970 = now / 3600 / 24 / 365;
    cout<<years_from_1970<< " years from 1970"<<endl;
}
