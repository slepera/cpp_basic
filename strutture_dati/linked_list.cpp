#include <iostream>
using namespace std;
#include "linked_list.hpp"

void linked_list::print(){
    if(head==nullptr){
        cout << "list empty" << endl;
        return;
    }
    node* current_pointer=head;
    while(current_pointer->getNext()!=nullptr)
    {
        cout << current_pointer->getData() << endl;
        current_pointer = current_pointer->getNext();
    }
    cout << current_pointer->getData() << endl;
}

void linked_list::add(int d){
    if(head==nullptr)
    {
        head = new node(d);
        return;
    }
    node* current_pointer=head;
    while(current_pointer->getNext()!=nullptr)
    {
        current_pointer = current_pointer->getNext();
    }
    node* tmp = new node(d);
    current_pointer->setNext(tmp);
};

void linked_list::remove(int d){
    if(head==nullptr) return;

    node* current_pointer = head;
    node* previous_pointer = head;
    if(current_pointer->getData() == d){
        head = current_pointer->getNext();
        delete(current_pointer);
        return;
    }
    while(current_pointer->getNext()!=nullptr)
    {
        if(current_pointer->getData() == d){
            previous_pointer->setNext(current_pointer->getNext());
            delete(current_pointer);
            return;
        }
        previous_pointer = current_pointer;
        current_pointer = current_pointer->getNext();
    }
    if(current_pointer->getData() == d){
        previous_pointer->setNext(nullptr);
        delete(current_pointer);
        return;
    }
}