#include <iostream>
using namespace std;

int main()
{
    int numero;
    cout<<"prova ad indovinare il numero: ";
    cin>>numero;
    srand(time(NULL));    
    int estratto = rand()%6 + 1;
    cout<<"numero estratto "<<estratto<<endl;
    if(estratto == numero)
    {
        cout<<"hai indovinato!!!"<<endl;     
    }
    else
    {
        cout<<"non hai indovinato!!!"<<endl;
    }
    


}