

#include <iostream>
using namespace std;

bool ricerca(int a[], int dimensione_array, int elemento)
{
    
    for(int i = 0; i < dimensione_array; i++)
    {
        if(a[i]==elemento)
        {
            return true;
        }
    }
    return false;
}


void incrementa_tutti_gli_elementi_dell_array(int a[], int dimensione_array)
{

    for(int i = 0; i < dimensione_array; i++)
    {
        a[i]++;
    }
}


int main()
{
    int a[100];


    int dimensione_array = sizeof(a)/sizeof(a[0]);




    for(int i = 0 ; i < 100; i++)
    {
        a[i] = i;
    }

    incrementa_tutti_gli_elementi_dell_array(a, dimensione_array);


    for(int i = 0; i < dimensione_array; i++)
        cout<<a[i]<<endl;










    // int elemento = 79;



    // bool trovato = ricerca(a, dimensione_array, elemento);

    // cout<<trovato;





}