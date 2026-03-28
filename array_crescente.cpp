#include<iostream>
using namespace std;
int main()
{
   const int DIM=3;
    int numeri[DIM];
    srand(time(NULL));
    for (int i=0; i<DIM; i++) {
        numeri[i]=rand()%6+1;
        cout<<numeri[i]<<" ";
    }
    for (int i=0; i<DIM-1; i++) {
        if (numeri[i]>=numeri[i+1]) {
            cout<<"la sequenza non e' in ordine crescente";
            return 0;
        }
    }
    cout<<"la sequenza e' in ordine crescente";
}