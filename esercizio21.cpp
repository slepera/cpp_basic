#include <iostream>
using namespace std;
int main()
{
    int distanza_viaggio;
    int carburante;
    int km_litro;
    cout<<"inserisci la distanza del viaggio:";
    cin>>distanza_viaggio;
    cout<<"inserisci il carburante nel serbatoio:";
    cin>>carburante;
    cout<<"inserisci il consumo dell'automobile (km/l):";
    cin>>km_litro;

    int distanza_percorribile = carburante * km_litro;

    if(distanza_percorribile>=distanza_viaggio)
    {
        cout<<"parti tranquillo!!! hai un margine di "<<distanza_percorribile-distanza_viaggio<<" km"<<endl;
    }
    else
    {
        cout<<"non partire...non hai carburante a sufficienza!!!";
    }


}