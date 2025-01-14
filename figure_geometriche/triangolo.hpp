#include <iostream>
using namespace std;
class triangolo
{
private:
    float base;
    float altezza;
    float ipotenusa();
public:
    float get_base();
    float get_altezza();
    void set_base(float);
    void set_altezza(float);
    float area();
    float perimetro();
};