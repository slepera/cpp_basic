#include <iostream>
using namespace std;

const int R=3;
const int C=3;
const int CERCHIO = 1;
const int CROCE = 2;
const int NON_FINITA = 3;
const int PARI = 4;
void reset_m(char matrice[][C]) {
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            matrice[i][j]=' ';
        }
    }
}
void stampa (char matrice[][C]) {
    cout<<"-------------------------"<<endl;
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            cout<<"|"<<matrice[i][j]<<"\t";
        }
        cout<<"|"<<endl<<"-------------------------"<<endl;
    }
}
int partita_finita (char matrice[][C]) {
    for (int i=0; i<R; i++) {
        if (matrice[i][0]=='o' && matrice[i][0] == matrice[i][1] && matrice [i][1] == matrice[i][2] ) {
            return CERCHIO;
        }
        if (matrice[i][0]=='x' && matrice[i][0] == matrice[i][1] && matrice [i][1] == matrice[i][2] ) {
            return CROCE;
        }
    }
    for (int j=0; j<C; j++) {
        if (matrice[0][j]=='o' && matrice[0][j] == matrice[1][j] && matrice [1][j] == matrice[2][j] ) {
            return CERCHIO;
        }
        if (matrice[0][j]=='x' && matrice[0][j] == matrice[1][j] && matrice [1][j] == matrice[2][j] ) {
            return CROCE;
        }
    }
    if (matrice[0][0]=='o' && matrice[0][0] == matrice[1][1] && matrice[1][1] == matrice[2][2]) {
        return CERCHIO;
    }
    if (matrice[0][0]=='x' && matrice[0][0] == matrice[1][1] && matrice[1][1] == matrice[2][2]) {
        return CROCE;
    }
    if (matrice[2][0]=='o' && matrice[2][0] == matrice[1][1] && matrice[1][1] == matrice[0][2]) {
        return CERCHIO;
    }
    if (matrice[2][0]=='x' && matrice[2][0] == matrice[1][1] && matrice[1][1] == matrice[0][2]) {
        return CROCE;
    }
    for (int i=0; i<R; i++) {
        for (int j=0; j<C; j++) {
            if (matrice[i][j]==' ') {
                return NON_FINITA;
            }
        }
    }
    return PARI;
}
void turno(char matrice[][C], bool cerchio) {
    int riga, colonna;
    cout<<"inserisci la riga: ";
    cin>>riga;
    cout<<"inserisci la colonna: ";
    cin>>colonna;
    if (cerchio) {
        matrice[riga-1][colonna-1]='o';
    } else {
        matrice[riga-1][colonna-1]='x';
    }
}
int main() {
    int risultato;
    char matrice[R][C];
    bool cerchio=true;
    reset_m(matrice);
    do {
        system("cls");
        if (cerchio) {
            cout<<"Tocca a cerchio!!!"<<endl;
        }else {
            cout<<"Tocca a croce!!!"<<endl;
        }
        stampa(matrice);
        turno(matrice, cerchio);
        cout<<endl;
        cerchio=!cerchio;
        risultato = partita_finita(matrice);
    } while (risultato==NON_FINITA);
    system("cls");
    stampa(matrice);
    if (risultato==CERCHIO) {
        cout<<"Ha vinto cerchio!!!";
    }else if (risultato==CROCE) {
        cout<<"Ha vinto croce!!!";
    }else if (risultato==PARI) {
        cout<<"Parita'!!!";
    }
    return 0;
}