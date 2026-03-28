#include <iostream>
using namespace std;
int in_range(int n1,int n2,int a[],int dim) {
    int contatore=0;
    for (int i=0;i<dim;i++) {
        if (a[i]>=n1 and a[i]<=n2) {
            contatore++;
        }
    }
    return contatore;
}
int main() {
    const int DIM=8;
    int a[DIM];
    srand(time(NULL));
    for (int i=0;i<DIM;i++) {
        a[i]=rand()%20+1;
    }
    int comp=in_range(6,10,a,DIM);
    cout<<"i numeri compresi sono "<<comp<<"\n";
}




