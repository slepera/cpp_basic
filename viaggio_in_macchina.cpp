#include <iostream>
using namespace std;

int somma(int a, int b)
{
    return a+b;
}


int moltiplicazione(int a, int b)
{
    return a*b;
}

float area_triangolo_rettangolo(float base, float altezza)
{
    return (base*altezza)/2;
}



int main()
{
   
   float btr = 10.5;
   float atr = 20.2;

   float a_tri_ret = area_triangolo_rettangolo(btr,atr);

   cout<<a_tri_ret; 










    int n3 = somma(n1,n2);

    cout<<n3;


    return 0;
}

