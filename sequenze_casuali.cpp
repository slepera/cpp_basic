#include<iostream>
#include<ctime>
using namespace std;
int main() {
    int n, somma;
    srand(time(NULL));
    for (int i=0; i<10; i++) {
        somma=0;
        cout<<"Inizio sequenza "<<i+1<<": ";
        while (somma<=90) {
            n=rand()% 10+1;
            somma=somma+n;
            cout<<n<<" ";

        }
        cout<<"Somma= "<<somma;
        cout<<endl;
    }
}