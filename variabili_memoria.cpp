#include <iostream>
#include <string.h>
using namespace std;

int main()
{
      
    char c = 12;
    cout<<"sizeof(c): "<<sizeof(c)<<endl;
    int i = 1;
    cout<<"sizeof(i): "<<sizeof(i)<<endl;
    float f = 1.1;
    cout<<"sizeof(f): "<<sizeof(f)<<endl;
    double d = 1.123;
    cout<<"sizeof(d): "<<sizeof(d)<<endl;
    

    printf("&c %p\n",&c);
    printf("&i %p\n",&i);
    printf("&f %p\n",&f);
    printf("&d %p\n",&d);


    cout<<"sizeof(&c): "<<sizeof(&c)<<endl;
    cout<<"sizeof(&i): "<<sizeof(&i)<<endl;
    cout<<"sizeof(&f): "<<sizeof(&f)<<endl;
    cout<<"sizeof(&d): "<<sizeof(&d)<<endl;



    char str_1[50];
    string str_2;
    cout<<"&str_1[0] --->>> "<<&str_1[0]<<endl;
    cout<<"&str_1[1] --->>> "<<&str_1[1]<<endl;


    float voti[10];
    cout<<"&voti --->>> "<<&voti<<endl;
    cout<<"&voti[0] --->>> "<<&voti[0]<<endl;
    cout<<"&voti[1] --->>> "<<&voti[1]<<endl;
    cout<<"voti+1 --->>> "<<voti+1<<endl;

    cout<<endl<<endl<<endl;

    double voti_d[10];
    cout<<"&voti_d --->>> "<<&voti_d<<endl;
    cout<<"&voti_d[0] --->>> "<<&voti_d[0]<<endl;
    cout<<"&voti_d[1] --->>> "<<&voti_d[1]<<endl;
    cout<<"voti_d+1 --->>> "<<voti_d+1<<endl;

    cout<<"sizeof voti "<<sizeof(voti)/sizeof(voti[0])<<endl;
    cout<<"sizeof voti_d "<<sizeof(voti_d)/sizeof(voti_d[0])<<endl;



    char car[20];
    char s[] = "ciao";
    char s1[] = {'c','i','a','o','\0'};

    strcpy(car,"toyota");



    char cars[10][20];
    strcpy(cars[0],"bmw");
    strcpy(cars[1],"audi");
    strcpy(cars[2],"toyota");

    cout<<cars[0];

}
    

    
    
    






