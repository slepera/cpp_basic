#include <iostream>
using namespace std;
const int MAX_CARS = 100;

struct car{
    string brand;
    string model;
    int year;
};


int search_by_brand(car input_cars[], int number_of_cars, string brand, car output_cars[])
{
    int output_number = 0;
    for(int i = 0; i < number_of_cars; i++)
    {
        if(input_cars[i].brand == brand)
        {
            output_cars[output_number] = input_cars[i];
            output_number++;
        }
    }
    return output_number;
}



int search_by_year(car input_cars[], int number_of_cars, int year, car output_cars[])
{
    int output_number = 0;
    for(int i = 0; i < number_of_cars; i++)
    {
        if(input_cars[i].year >= year)
        {
            output_cars[output_number] = input_cars[i];
            output_number++;
        }
    }
    return output_number;
}






int insert_cars(car cars[])
{
    int number_of_cars = 0;
    for(int i = 0; i < 100; i++)
    {
        cars[i].brand = "honda";
        cars[i].model = "civic";
        cars[i].year = 2019;
        number_of_cars++;
    }
    cars[98].brand = "BMW";
    cars[98].model = "3";
    cars[98].year = 2024;
    cars[99].brand = "Ford";
    cars[99].model = "Focus";
    cars[99].year = 2021;
    return number_of_cars;
}


int main()
{
    int number_of_cars;
    car available_cars[MAX_CARS];
    car filtered_cars[MAX_CARS];
    car filtered_cars2[MAX_CARS];

    number_of_cars = insert_cars(available_cars);

    int res = search_by_year(available_cars, number_of_cars, 2020, filtered_cars);
    
    res = search_by_brand(filtered_cars, res, "BMW", filtered_cars2);



    for(int i = 0; i < res; i++)
    {
        cout<<filtered_cars[i].brand<<" "<<filtered_cars[i].model<<" "<<filtered_cars[i].year<<endl;
    }







}

