#include <iostream>
using namespace std;
const int R = 10;
const int C = 10;

int moltiplicazione(int m[R][C], int n1, int n2) {
    if (n1<1||n2<1||n1>10||n2>10) {
        return -1;
    }
    return m[n1-1][n2-1];
}

void stampa_tabelline(int m[R][C]) {
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            cout<<m[i][j]<<"\t";
        }
        cout<<endl;
    }
}

void riempi_tabelline(int m[R][C]) {
    for (int i = 0; i<R; i++) {
        for (int j = 0; j<C; j++) {
            m[i][j] = (i+1)*(j+1);
        }
    }
}

int main() {
    int tabelline[R][C];
    riempi_tabelline(tabelline);
    stampa_tabelline(tabelline);
    int p = moltiplicazione(tabelline, 10,10);
    cout<<endl<<p;
}