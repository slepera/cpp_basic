#include <iostream>
using namespace std;


int main()
{
    int a; 
    int b;
    cout<<"inserisci un numero intero: ";
    cin>> a;
    cout<<"inserisci un numero intero: ";
    cin>> b;
    if (a<b){
        cout<<"il numero piu grande e: "<<b<<endl;
        cout<<"il numero piu piccolo e: "<<a;
    }
    else{
        cout<<"il numero piu grande e: "<<a<<endl;
        cout<<"il numero piu piccolo e: "<<b;
    }

    return 10;
    
}