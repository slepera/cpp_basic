#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;
#include "cerchio.hpp"

    float cerchio::get_raggio() {
      return raggio;
    }

    void cerchio::set_raggio(float r) {
        raggio = r;
    }

    float cerchio::area()
    {
        return M_PI*pow(raggio,2);
    }    
    float cerchio::perimetro()
    {
        return 2*M_PI*raggio;
    }    