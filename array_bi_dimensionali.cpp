/* 
Spiegazione del codice:
Dichiarazione e inizializzazione dell'array bidimensionale:

int matrice[3][3]: Questo crea un array bidimensionale con 3 righe e 3 colonne, cioè una matrice 3x3. Ogni elemento della matrice è un numero intero.
Inizializzazione: L'array è inizializzato con valori da 1 a 9, organizzati in righe e colonne.
Stampa della matrice:

Per stampare la matrice, utilizziamo due cicli annidati:
Il primo ciclo for (int i = 0; i < 3; i++) itera sulle righe.
Il secondo ciclo for (int j = 0; j < 3; j++) itera sulle colonne di ciascuna riga.
std::cout << matrice[i][j] << " ";: Stampa ogni elemento della matrice separato da uno spazio. Dopo aver stampato tutti gli elementi di una riga, il programma va a capo.
Somma degli elementi della matrice:

Un ciclo simile al precedente viene utilizzato per sommare gli elementi della matrice.
somma += matrice[i][j];: Ogni elemento della matrice viene aggiunto alla variabile somma.
Modifica di un elemento dell'array:

L'elemento alla posizione [1][2] (seconda riga, terza colonna) viene cambiato a 100 con matrice[1][2] = 100;.
Stampa della matrice dopo la modifica:

Un ciclo simile al primo viene utilizzato per stampare la matrice dopo la modifica.
 */


#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    // Dichiarazione e inizializzazione di un array bidimensionale 3x3
    int matrice[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    // Stampa della matrice utilizzando due cicli annidati
    std::cout << "La matrice 3x3 è:" << std::endl;
    for (int i = 0; i < 3; i++) {  // Ciclo sulle righe
        for (int j = 0; j < 3; j++) {  // Ciclo sulle colonne
            std::cout << matrice[i][j] << " ";  // Stampa l'elemento della matrice
        }
        std::cout << std::endl;  // Vai a capo dopo ogni riga
    }

    // Esempio di somma degli elementi della matrice
    int somma = 0;
    for (int i = 0; i < 3; i++) {  // Ciclo sulle righe
        for (int j = 0; j < 3; j++) {  // Ciclo sulle colonne
            somma += matrice[i][j];  // Aggiunge l'elemento alla somma
        }
    }
    std::cout << "La somma degli elementi della matrice è: " << somma << std::endl;

    // Esempio di modifica di un elemento dell'array (modifica dell'elemento alla posizione [1][2])
    matrice[1][2] = 100;  // Cambia l'elemento nella seconda riga, terza colonna (indice [1][2])

    // Stampa la matrice dopo la modifica
    std::cout << "La matrice dopo la modifica è:" << std::endl;
    for (int i = 0; i < 3; i++) {  // Ciclo sulle righe
        for (int j = 0; j < 3; j++) {  // Ciclo sulle colonne
            std::cout << matrice[i][j] << " ";  // Stampa l'elemento della matrice
        }
        std::cout << std::endl;  // Vai a capo dopo ogni riga
    }

    return 0;  // Termina il programma
}
