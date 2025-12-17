#include <iostream>
using namespace std;
#include "triangolo.hpp"
#include <cmath>


    float triangolo::get_base() {
      return base;
    }

    float triangolo::get_altezza() {
      return altezza;
    }

    void triangolo::set_base(float b)
    {
        base = b;
    }

    void triangolo::set_altezza(float a)
    {
        altezza = a;
    }

    float triangolo::ipotenusa()
    {
        return sqrt(pow(base,2)+pow(altezza,2));
    }

    float triangolo::area()
    {
        return (base * altezza)/2;
    }    
    float triangolo::perimetro()
    {
        return base + altezza + ipotenusa() ;
    }    