#include <iostream>
#include <vector>
#include "Car.hpp"
using namespace std;
class Garage
{
private:
    int spots;
    vector<Car> cars;
public:
    Garage(int spts);
    bool checkIn(Car cr);
    void checkOut(string plateNumber);

};