#include <iostream>
#include <vector>
using namespace std;

int main()
{
    string s;
    vector<string> cars;
    cars.push_back("bmw");
    cars.push_back("audi");
    cars.push_back("toyota");
    
    cout<<cars.front()<<endl;
    cout<<cars.back()<<endl;

    



}