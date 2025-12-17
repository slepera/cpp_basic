#include<iostream>
using namespace std;
int main()
{
    int ora1, ora2, min1, min2;
    string orario1, orario2;
    orario1 = "15:30";
    orario2 = "09:05";
    ora1 = stoi(orario1.substr(0,2));
    min1 = stoi(orario1.substr(3,2));
    ora2 = stoi(orario2.substr(0,2));
    min2 = stoi(orario2.substr(3,2));
    min1 = ora1 * 60 + min1;
    min2 = ora2 * 60 + min2;
    if(min2 > min1)
    {
        cout<<"i minuti di differenza tra: "<<orario1<<" e "<<orario2<<" e' di: "<<min2 - min1;
    }
    else
    {
        cout<<"i minuti di differenza tra: "<<orario2<<" e "<<orario1<<" e' di: "<<min1 - min2;
    }
    return 0;
}