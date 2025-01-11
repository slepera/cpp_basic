#include <iostream>
using namespace std;
class Car
{
private:
    string company;
    string model;
    int year;
    int price;
public:
    Car(const string & comp, const string & mdl, int yr, int prc);
    string getCompany();
    string getModel();
    int getYear();
    int getPrice();
    void setCompany(const string & comp);
    void setModel(const string & mdl);
    void setYear(int yr);
    void setPrice(int prc);

};