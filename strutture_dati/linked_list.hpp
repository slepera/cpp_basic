
#include <iostream>
#include "node.hpp"
using namespace std;
class linked_list
{
private:
    node* head;    
public:
    void add(int d);
    void remove(int d);
    void print();

};