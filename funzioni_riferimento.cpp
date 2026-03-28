#include <iostream>
#include <string>
#include <cmath>
using namespace std;

void modifica_stringa(string& s) {
    s.replace(0,1,"ciao");
    cout<<s<<endl;
}


void scambia(float& a, float& b) {
    float tmp = a;
    a = b;
    b = tmp;
    cout<<"a e b dentro la funzione scambia:"<<a<<","<<b<<endl;
}
int eq_secondo_grado(float a, float b, float c, float& x1, float& x2) {
    float delta = pow(b,2)-4*a*c;
    if (delta<0) {
        return 0;
    }else if (delta==0) {
        x1 = x2 = -b/2*a;
        return 1;
    }else {
        x1 = (-b + sqrt(delta))/2*a;
        x2 = (-b - sqrt(delta))/2*a;
        if (x1>x2) {
            scambia(x1,x2);
        }
        return 2;
    }
}



int main() {

    string s = "hhh";
    modifica_stringa(s);
    cout<<s<<endl;
    // float a, b;
    // cout<<"inserisci un numero: ";
    // cin>>a;
    // cout<<"inserisci un numero: ";
    // cin>>b;
    // scambia(a,b);
    // cout<<"a e b dentro la funzione main: "<<a<<","<<b<<endl;

}