#include <iostream>
using namespace std;

int main()
{

    int primo;
    int secondo;

    int minore;
    int maggiore;


    cout<<"inserisci due interi:"<<endl;
    cin>>primo;
    cin>>secondo;

    if(primo<=secondo)
    {
        minore = primo;
        maggiore = secondo;

    }
    else
    {
        
        minore = secondo;
        maggiore = primo;

    }

    cout<<"il minore è: "<<minore<<endl;
    cout<<"il maggiore è: "<<maggiore;



}
