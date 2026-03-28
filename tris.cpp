#include <iostream>
using namespace std;
const int R=3;
const int C=3;
void reset_m(char matrice[][C]) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            matrice[i][j]=' ';
        }
    }
}
void stampa (char matrice[][C]) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cout<<matrice[i][j]<<"\t";
        }
        cout<<endl;
    }
}
bool partita_finita (char matrice[][C]) {
    for (int i=0; i<R; i++) {
        if (matrice[i][0]!=' ' && matrice[i][0] == matrice[i][1] && matrice [i][1] == matrice[i][2] ) {
            return true;
        }
    }
    for (int j=0; j<C; j++) {
        if (matrice[0][j]!=' ' && matrice[0][j] == matrice[1][j] && matrice [1][j] == matrice[2][j] ) {
            return true;
        }
    }
    if (matrice[0][0]!=' ' && matrice[0][0] == matrice[1][1] && matrice[1][1] == matrice[2][2]) {
        return true;
    }
    if (matrice[2][0]!=' ' && matrice[2][0] == matrice[1][1] && matrice[1][1] == matrice[0][2]) {
        return true;
    }
    return false;
}
void turno(char matrice[][C], bool cerchio) {
    int riga, colonna;
    cout<<"inserisci la riga: ";
    cin>>riga;
    cout<<"inserisci la colonna: ";
    cin>>colonna;
    if (cerchio) {
        matrice[riga][colonna]='o';
    } else {
        matrice[riga][colonna]='x';
    }
}
int main() {
    char matrice[R][C];
    bool cerchio=true;
    reset_m(matrice);
    do {
        stampa(matrice);
        turno(matrice, cerchio);
        cout<<endl;
        cerchio=!cerchio;
    } while (!partita_finita(matrice));




    return 0;
}