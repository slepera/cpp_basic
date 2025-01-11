#include <sys/time.h>
#include<iostream>
using namespace std;

unsigned long long int fibonacci(unsigned long long int n)
{
    if(n <= 1)
        return n;
    return fibonacci(n-1)+fibonacci(n-2);   
}

int main()
{
    time_t stop, start;
    unsigned long long int n, res;
    cout<<"insert a number: ";
    cin>>n;
    cout<<endl;
    cout<<"starting computing fibonacci of "<<n<<endl;
    time(&start);
    res = fibonacci(n);
    time(&stop);
    cout<< "took " << stop - start << " seconds."<<endl; 
    cout<< "the fibonacci of "<<n<<" is "<<res<<endl;

}
