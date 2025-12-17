
#include <iostream>
using namespace std;
class node
{
private:
    int data;
    node* next;    
public:
    node(int d);
    node* getNext();
    void setNext(node* np);
    int getData();

};