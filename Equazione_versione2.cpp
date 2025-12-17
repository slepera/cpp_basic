#include <iostream>
#include <cmath>
using namespace std;

float x1, x2;

int trova_soluzioni_equazione(float a, float b, float c)
{
    float delta = pow(b,2)-4*a*c;

    if(delta > 0)
    {
        x1 = -b + sqrt(delta) / 2*a;
        x2 = -b - sqrt(delta) / 2*a;
        return 2;
    }
    else if(delta == 0)
    {
        x1 = x2 = -b / 2*a;
        return 1;
    }
    else
    {
        return 0;
    }
}

int main()
{
    float a, b, c;
    cout<<"Inserisci il valore di a: ";
    cin>>a;
    cout<<"Inserisci il valore di b: ";
    cin>>b;
    cout<<"Inserisci il valore di c: ";
    cin>>c;

    int numero_soluzioni = trova_soluzioni_equazione(a, b, c);

    if(numero_soluzioni == 2)
    {
        cout<<"l'equazione ammette due soluzioni reali e distinte: "<<endl;
        cout<<"x1 = "<<x1<<endl;
        cout<<"x2 = "<<x2<<endl;
    }
    else if(numero_soluzioni == 1)
    {
        cout<<"l'equazione ammette due soluzioni reali e coincidenti: "<<endl;
        cout<<"x1  = x2 = "<<x1<<endl;
    }
    else
    {
        cout<<"l'equazione non ammette soluzioni reali!!!"<<endl;
    }

}