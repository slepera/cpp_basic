#include <iostream>
using namespace std;
void area_perimetro (int base, int altezza, int &area, int &perimetro)
{
    area=base*altezza;
    perimetro=base*2+altezza*2;
}
int main()
{
    int base, altezza, perimetro=0, area=0;
    cout<<"Inserisci la base ";
    cin>>base;
    cout<<"Inserisci la la altezza ";
    cin>>altezza;
    area_perimetro(base,altezza,area,perimetro);
    cout<<"Area= "<<area<<" Perimetro= "<<perimetro;
}