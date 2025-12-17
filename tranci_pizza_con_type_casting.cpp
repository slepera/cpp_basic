#include<iostream>
using namespace std;
int main () {
    int numero_persone;
    int numero_tranci;
    cout<<"Inserisci numero persone: ";
    cin>>numero_persone;
    cout<<"Inserisci numero tranci: ";
    cin>>numero_tranci;
    cout<<endl;
    float tranci_per_ognuno;
    tranci_per_ognuno=(float)numero_tranci/numero_persone;
    cout<<"tranci_per_ognuno= "<<tranci_per_ognuno;


}