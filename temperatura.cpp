#include <iostream>
using namespace std;
int main()
{

    do {
        cout<<"insreisci la temperatura in gradi celsius";
        cin>>tcelsius;
        if (tcelsius<-273.15) {
            cout<<"errore, temperatura inferiore allo zero assoluto";
        }
        else {
            tfahrenheit=(9/5) * tcelsius + 32;
            tkelvin=tcelsius + 273.15;
            cout<<" la temperatura in fahrenheit e'="<<tfahrenheit<<endl;
            cout<<" la temperatura in kelvin e'="<<tkelvin<<endl;
        }
        cout<<"vuoi inserire un'altra temperatura?";
        cin>>scelta;
    }while (scelta=='s'||scelta=='S');
  return 0;
}