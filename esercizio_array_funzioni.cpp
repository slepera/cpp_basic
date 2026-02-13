#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
const int DIM=10;

float media(float numeri[DIM], int num_elem) {
    float somma=0;
    float m;
    for (int i=0; i<num_elem; i++) {
        somma=somma+numeri[i];
    }
    m=somma/num_elem;
    return m;
}
void popola_array(float numeri[DIM], int num_elem) {
    srand(time(NULL));

    for (int i=0; i<num_elem; i++) {
        numeri[i]=rand()%100+1;
    }
}
void stampa(float numeri[DIM], int num_elem) {
    for (int i=0; i<num_elem; i++) {
        cout<<numeri[i]<<" ";
    }
    cout<<endl;
}

float moda(float numeri[DIM], int num_elem) {
    int contatore=0, elem_moda, max_contatore=0;
    for (int i=0; i<num_elem; i++) {
        contatore=0;
        for (int j=0; j<num_elem; j++) {
            if (numeri[i]==numeri[j]) {
                contatore++;
            }
        }
        if (contatore>max_contatore) {
            max_contatore=contatore;
            elem_moda=numeri[i];
        }
    }
    return elem_moda;
}
int main() {
    float n[DIM];
    int num;
    float m;

    cout<<"Quanti elementi vuoi inserire? ";
    cin>>num;

    popola_array(n, num);
    stampa(n, num);

    m=media(n, num);
    cout<<"La media dei numeri e': "<<m<<endl;
    float mm=moda(n, num);
    cout<<"La moda dei numeri e': "<<mm;

    return 0;


}