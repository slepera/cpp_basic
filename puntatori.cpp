#include <iostream>
using namespace std;

int main()
{
    char c = 'a';
    int a = 5;
    float f = 3.1;
    double d = 6.5;

    char* pc = &c;
    int* pa = &a;
    float* pf = &f;
    double* pd = &d;

    cout<<a<<endl;
    cout<<pa<<endl;



    

    cout<<sizeof(c)<<endl; 
    cout<<sizeof(pc)<<endl; 
    cout<<sizeof(a)<<endl; 
    cout<<sizeof(pa)<<endl; 
    cout<<sizeof(f)<<endl; 
    cout<<sizeof(pf)<<endl; 
    cout<<sizeof(d)<<endl; 
    cout<<sizeof(pd)<<endl; 

}