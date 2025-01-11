#include <iostream>
#include <cmath>
using namespace std;

void area_triangolo_rettangolo()
{
    float base, altezza, area;

    cout<<endl<<"Inserisci la base del triangolo: ";
    cin>>base;
    cout<<"Inserisci l'altezza del triangolo";
    cin>>altezza;
    area = base * altezza / 2;
    cout<<"L'area del triangolo rettangolo e' di: "<<area<<endl;

}




void area_rettangolo()
{
    float base, altezza, area;

    cout<<endl<<"Inserisci la base del rettangolo: ";
    cin>>base;
    cout<<"Inserisci l'altezza del rettangolo";
    cin>>altezza;
    area = base * altezza;
    cout<<"L'area del rettangolo e' di: "<<area<<endl;
}

void area_cerchio()
{
    float raggio, area;

    cout<<endl<<"Inserisci il raggio del cerchio: ";
    cin>>raggio;
    area = M_PI * pow(raggio, 2);
    cout<<"L'area del cerchio e' di: "<<area<<endl;
}

int main()
{
    char scelta;
    do {
        cout<<endl<<"Inserisci c per calcolare l'area del cerchio."<<endl;
        cout<<"Inserisci r per calcolare l'area del rettangolo."<<endl;
        cout<<"Inserisci t per calcolare l'area del triangolo rettangolo."<<endl;
        cout<<"Inserisci e per terminare!!!"<<endl;

        cout<<"fai la tua scelta:";
        cin>>scelta;
        if(scelta == 'c')
        {
            area_cerchio();
        }
        if(scelta == 'r')
        {
            area_rettangolo();
        }
        if(scelta == 't')
        {
            area_triangolo_rettangolo();
        }
    }while(scelta!='e');
}
