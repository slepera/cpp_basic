#include <iostream>
#include <cmath>
using namespace std;

void calcola_distanza(double x1, double y1, double x2, double y2,
                      double& dx, double& dy, double& d) {
    dx = x2-x1;
    dy = y2-y1;
    d = sqrt(pow(dx,2)+pow(dy,2));
}

int main() {
    double x1, y1, x2, y2, deltax, deltay, distance;
    cout<<"inserisci le coordinate del primo punto: "<<endl;
    cin>>x1>>y1;
    cout<<"inserisci le coordinate del secondo punto: "<<endl;
    cin>>x2>>y2;
    calcola_distanza(x1,y1, x2,y2, deltax, deltay, distance);
    cout<<"dx = "<<deltax<<" dy = "<<deltay<<" distance = "<<distance;

}