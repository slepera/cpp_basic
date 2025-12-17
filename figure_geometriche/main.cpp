#include <iostream>
using namespace std;
#include "triangolo.hpp"
#include "cerchio.hpp"
#include "rettangolo.hpp"

int main()
{

    triangolo t1;
    cerchio c1;
    rettangolo r1;

    t1.set_altezza(3);
    t1.set_base(2);
    cout<<t1.area()<<"---"<<t1.perimetro()<<endl;

    c1.set_raggio(3);
    cout<<c1.area()<<"---"<<c1.perimetro()<<endl;

    r1.set_altezza(2);
    r1.set_base(3);
    cout<<r1.area()<<"---"<<r1.perimetro()<<endl;

}