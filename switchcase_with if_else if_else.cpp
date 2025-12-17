
#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{

    cout<<"Inserisci un giorno tra 1 e 7: ";
    int giorno;
    cin >> giorno;
    if(giorno==1)
        cout<<"Lun";
    else if(giorno==2)
        cout<<"Mar";
    else if(giorno==3)
        cout<<"Mer";
    else if(giorno==4)
        cout<<"Gio";
    else if(giorno==5)
        cout<<"Ven";
    else if(giorno==6)
        cout<<"Sab";
    else if(giorno==7)
        cout<<"Dom";
    else
        cout<<"Errore";

}
