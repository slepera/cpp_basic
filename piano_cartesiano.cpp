#include <iostream>
#include <cmath>
using namespace std;
double calcola_distanza(double x1,double y1,double x2,double y2) {
    double l1,l2,q1,q2,q3,i;
    // i=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
    l1=x2-x1;
    q1=pow(l1,2);
    l2=y2-y1;
    q2=pow(l2,2);
    q3=q1+q2;
    i=sqrt(q3);
    return i;
}
double min(double a,double b) {
    if (a<b) {
        return a;
    }
    return b;
}
int main() {
    double x1,x2,y1,y2,distanza,minimo=INT_MAX;
    char scelta;
    cout<<"Inserisci le coordinate di un punto fisso"<<endl;
    cin>>x1>>y1;
    do {
        cout<<"Inserisci le coordinate di un punto"<<endl;
        cin>>x2>>y2;
        distanza=calcola_distanza(x1,y1,x2,y2);
        if (distanza<minimo) {
            minimo=distanza;
        }
        cout<<"La distanza tra i due punti e' "<<distanza<<endl;
        cout<<"Vuoi inserire un altro punto? ";
        cin>>scelta;
    }while (tolower(scelta)=='s');
    cout<<"La distanza minima e' "<<minimo;
    return 0;
}