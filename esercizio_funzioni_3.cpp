#include <iostream>
#include <cmath>

using namespace std;

float min(float n1, float n2) {
    cout<<"min con float"<<endl;
    if (n1>n2) {
        return n2;
    }
    return n1;
}

int min(int n1, int n2) {
    cout<<"min con int"<<endl;
    if (n1>n2) {
        return n2;
    }
    return n1;
}

// int floor(float a) {
//     return (int)a;
// }

// int ceil(float a) {
//     return 1+(int)a;
// }

// int round(float a) {
//     cout<<"ROUND";
//     int pint;
//     float pfloat;
//     pint=floor(a);
//     pfloat=a-pint;
//     if (pfloat>0.5) {
//         return ceil(a);
//     }
//     return floor(a);
// }





float max(float n1, float n2) {
    if (n1>n2) {
        return n1;
    }
    return n2;
}

int main() {
    float a,b,c,minimo,massimo;
    cout<<"inserisci 3 numeri"<<endl;
    cin>>a>>b>>c;

    minimo=min(min(a,b),c);

    massimo=max(max(a,b),c);

    cout<<"il minimo e' "<<minimo<<endl;
    cout<<"il massimo e' "<<massimo<<endl;

    cout<<"floor di "<<a<<" e' "<<floor(a)<<endl;

    cout<<"round di "<<a<<" e' "<<round(a);


    return 0;
}