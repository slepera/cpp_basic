/* 
Spiegazione del codice:
Dichiarazione e inizializzazione di un array:

int numeri[5] = {1, 2, 3, 4, 5};: Questo crea un array monodimensionale chiamato numeri, contenente 5 valori interi. Gli indici dell'array vanno da 0 a 4 (un array con 5 elementi ha indici che vanno da 0 a n-1, dove n è la dimensione dell'array).
Stampa dei valori dell'array:

Il ciclo for viene utilizzato per scorrere l'array e stampare ogni elemento.
numeri[i] è il modo per accedere a ciascun elemento dell'array. In questo caso, i è l'indice che varia da 0 a 4.
Somma degli elementi dell'array:

In questo esempio, viene calcolata la somma degli elementi dell'array. Un altro ciclo for scorre l'array e somma ogni elemento alla variabile somma.
Modifica di un elemento dell'array:

numeri[2] = 10;: Modifica l'elemento alla posizione 2 (che è il terzo elemento, dato che gli indici partono da 0) assegnandogli il valore 10.
Stampa dei valori dopo la modifica:

Dopo aver modificato l'array, un altro ciclo for stampa i nuovi valori dell'array per verificare che la modifica sia avvenuta correttamente.
return 0;: Indica che il programma è terminato correttamente.
 */

#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    // Dichiarazione e inizializzazione di un array monodimensionale di interi
    int numeri[5] = {1, 2, 3, 4, 5};  // Un array di 5 numeri interi

    // Stampa i valori dell'array utilizzando un ciclo for
    std::cout << "I valori dell'array sono:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "numeri[" << i << "] = " << numeri[i] << std::endl;
    }

    // Esempio di somma degli elementi dell'array
    int somma = 0;
    for (int i = 0; i < 5; i++) {
        somma += numeri[i];  // Aggiunge ogni elemento dell'array alla somma
    }
    std::cout << "La somma degli elementi dell'array è: " << somma << std::endl;

    // Esempio di inserimento di un nuovo valore nell'array (modifica dell'array)
    numeri[2] = 10;  // Cambia il valore dell'elemento in posizione 2 (l'indice parte da 0)

    std::cout << "I valori dell'array dopo la modifica sono:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "numeri[" << i << "] = " << numeri[i] << std::endl;
    }

    return 0;  // Termina il programma
}
