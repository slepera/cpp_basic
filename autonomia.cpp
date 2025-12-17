#include <iostream>
using namespace std;
int main () {
    float consumo;
    float carburante;
    float autonomia;
    float distanza;

    cout<<"inserire la distanza da percorrere";
    cin>>distanza;
    cout<<"inserire il consumo (km/l)";
    cin>>consumo;
    cout<<"inserire la quantità di carburante";
    cin>>carburante;

    autonomia=consumo*carburante;

    if (distanza>=autonomia) {
        cout<<"fare rifornimento";
    }else {
        cout<<"hai carburante sufficiente per il affrontare il viaggio"}
    }
}