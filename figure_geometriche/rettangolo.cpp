#include <iostream>
using namespace std;
#include "rettangolo.hpp"


    float rettangolo::get_base() {
      return base;
    }

    float rettangolo::get_altezza() {
      return altezza;
    }

    void rettangolo::set_base(float b)
    {
        base = b;
    }

    void rettangolo::set_altezza(float a)
    {
        altezza = a;
    }    

    float rettangolo::area()
    {
        return base * altezza;
    }    
    float rettangolo::perimetro()
    {
        return 2*(base + altezza) ;
    }    