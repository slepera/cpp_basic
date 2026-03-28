#include <iostream>
using namespace std;
const int R=5;
const int C=5;
void stampa (int matrice[][C]) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
}
int main() {


    int matrice[R][C];
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            if (i==j) {
                matrice[i][j]=1;
            } else {
                matrice[i][j]=0;
            }
        }
    }

    stampa(matrice);

    return 0;
}