#include <iostream>
using namespace std;
int main () {
    char c1, c2, c3;
    int p1, p2, p3;
    char scambio_c;
    int scambio_p;
    cout<<"inserisci tre lettere maiuscole o minuscole "<<endl;
    cin>>c1>>c2>>c3;
    if (c1>='a' and c1<='z') {
        p1=c1-'a'+1;
    }
    else if (c1>='A' and c1<='Z') {
        p1=c1-'A'+1;
    }
    if (c2>='a' and c2<='z') {
        p2=c2-'a'+1;
    }
    else if (c2>='A' and c2<='Z') {
        p2=c2-'A'+1;
    }
    if (c3>='a' and c3<='z') {
        p3=c3-'a'+1;
    }
    else if (c3>='A' and c3<='Z') {
        p3=c3-'A'+1;
    }
    if (p1>p2) {
        scambio_c=c1;
        c1=c2;
        c2=scambio_c;
        scambio_p=p1;
        p1=p2;
        p2=scambio_p;

    }
    if (p1>p3) {
        scambio_c=c1;
        c1=c3;
        c3=scambio_c;
        scambio_p=p1;
        p1=p3;
        p3=scambio_p;
    }
    if (p2>p3) {
        scambio_c=c2;
        c2=c3;
        c3=scambio_c;
        scambio_p=p2;
        p2=p3;
        p3=scambio_p;
    }
    cout<<c1<<c2<<c3;
    return 0;
}