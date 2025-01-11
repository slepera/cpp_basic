#include <iostream>
using namespace std;
#include "Car.hpp"

    Car::Car(const string & comp, const string & mdl, int yr, int prc){
      company=comp;
      model = mdl;
      year = yr;
      price = prc;
    }

    // Getter functions to retrieve private member variables
    string Car::getCompany() { // Getter function for retrieving the company name
      return company; // Return the stored company name
    }

    string Car::getModel() { // Getter function for retrieving the model name
      return model; // Return the stored model name
    }

    int Car::getYear() { // Getter function for retrieving the year
      return year; // Return the stored year
    }

    int Car::getPrice() { // Getter function for retrieving the year
      return price; // Return the stored year
    }

    // Setter functions to modify private member variables
    void Car::setCompany(const string & comp) { // Setter function for modifying the company name
      company = comp; // Assign the provided company name to the 'company' member variable
    }

    void Car::setModel(const string & mdl) { // Setter function for modifying the model name
      model = mdl; // Assign the provided model name to the 'model' member variable
    }

    void Car::setYear(int yr) { // Setter function for modifying the year
      year = yr; // Assign the provided year to the 'year' member variable
    }


    void Car::setPrice(int prc) { // Setter function for modifying the year
      price = prc; // Assign the provided year to the 'year' member variable
    }