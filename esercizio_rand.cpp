#include <iostream>
using namespace std;

int main() {
    srand(time(NULL));
    for (int i = 0; i < 10; i++) {
        int n = rand();
        cout<<n<<" ";
    }
}