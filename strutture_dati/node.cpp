#include <iostream>
using namespace std;
#include "node.hpp"

    node::node(int d){
      this->data = d;
      this->next = nullptr; 
    };

    node* node::getNext()
    {
        return this->next;
    }
    void node::setNext(node* np)
    {
        this->next = np;
    }

    int node::getData(){
        return data;
    }