#include "linked_list.hpp"
#include <iostream>
using namespace std;

int main() {

    linked_list l;
    l.add(4);
    l.add(5);
    l.add(7);
    l.print();
    l.remove(7);
    l.print();
    return 0;
}