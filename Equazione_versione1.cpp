#include <iostream>
#include <cmath>
using namespace std;


void min_max(int a, int b, int c, int &min, int &max)
{
    if(a<b)
    {
        if(a<c)
        {
            min = a;
        }
        else
        {
            min = c;
        }
    }
    else
    {
        if(b<c)
        {
            min = b;
        }
        else
        {
            min = c;
        }
    }


    if(a>b)
    {
        if(a>c)
        {
            max= a;
        }
        else
        {
            max = c;
        }
    }
    else
    {
        if(b>c)
        {
            max = b;
        }
        else
        {
            max= c;
        }
    }


}


int max(int a, int b)
{
   if(a>b)
   {
       return a;
   }
   else
   {
       return b;
   }
}




int main()
{
   int a = 6;
   int b = 78;
   int c =0;
   int min, max;
   min_max(a,b,c, min, max);
   cout<<"min  = "<<min<<endl;
   cout<<"max  = "<<max<<endl;

}