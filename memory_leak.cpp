

#include <iostream>
#include <windows.h>
#include <unistd.h>
using namespace std;

int main()
{
    int *array_of_int;
    while(true)
    {
        
        array_of_int = new int[10000];
        sleep(0.3);
        delete[] array_of_int;
        cout<<"aspetto 300 ms e rialloco un array di 10000 interi"<<endl;

    }
}