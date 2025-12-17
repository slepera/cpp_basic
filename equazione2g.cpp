#include <iostream>
#include <cmath>
using namespace std;
int main() {
    float a, b, c;
    float x1, x2;
    float delta;
    cout<<"inserisci i valori di a, b, c:"<<endl;
    cin>>a>>b>>c;
    if (a==0) {
        cout<<"equazione di 1g"<<endl;
        cout<<"La soluzione e': "<<-c/b;
        return 0;
    }
    else {
        delta=pow(b,2)-4*a*c;

    }
}