#include "Car.hpp"
#include <iostream>
using namespace std;

int main() {
  Car car("AUDI", "A6", 2023, 30000);

  cout << "Company: " << car.getCompany() << endl; // Output the car's company name
  cout << "Model: " << car.getModel() << endl; // Output the car's model name
  cout << "Year: " << car.getYear() << endl; // Output the car's year

  car.setCompany("BMW");
  car.setModel("M4");
  car.setYear(2022);

  cout << "\nUpdated Company: " << car.getCompany() << endl;
  cout << "Updated Model: " << car.getModel() << endl; 
  cout << "Updated Year: " << car.getYear() << endl;

  return 0;
}