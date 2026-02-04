#include <iostream>
using namespace std;

float x_array[100];


float y_array[100];

float z_array[100];


struct point {
    float x;
    float y;
    float z;
};

point point_array[100];

float calcola_distanza(point p1, point p2);

float calcola_distanza(int x1, int y1, int x2, int y2);

int main() {


    for (int i = 0; i < 100; i++) {
        cout<<point_array[i].x<<" - "<<point_array[i].y;
    }

    for (int i = 0; i < 100; i++) {
        cout<<x_array[i]<<" - "<<y_array[i];
    }



}