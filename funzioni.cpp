/* 
Spiegazione del codice:
Funzione somma(int a, int b):

Questa funzione prende due interi come parametri (a e b) e restituisce la loro somma. La funzione è definita con il tipo di ritorno int, che indica che restituirà un valore intero.
La somma viene calcolata con return a + b; e il risultato viene restituito alla funzione chiamante.
Funzione moltiplica(int a, int b):

Simile alla funzione somma, questa funzione prende due numeri come input e restituisce il loro prodotto (a * b).
Funzione fattoriale(int n):

Questa funzione calcola il fattoriale di un numero intero n. Il fattoriale di un numero è il prodotto di tutti i numeri interi da 1 a n. Ad esempio, il fattoriale di 5 è 5! = 5 * 4 * 3 * 2 * 1.
Viene usato un ciclo for per moltiplicare i numeri da 1 a n e ottenere il risultato.
Funzione main():

La funzione main è il punto di ingresso del programma, dove vengono dichiarate le variabili e viene richiesto l'input dall'utente.
L'utente inserisce due numeri per calcolare la somma e il prodotto, e successivamente inserisce un altro numero per calcolare il fattoriale.
Le funzioni somma(), moltiplica() e fattoriale() vengono chiamate con i valori di input, e i risultati vengono stampati.
 */

#include <iostream>  // Inclusione della libreria per l'input e l'output

// Funzione che somma due numeri interi
int somma(int a, int b) {
    return a + b;  // Restituisce la somma dei due numeri
}

// Funzione che moltiplica due numeri interi
int moltiplica(int a, int b) {
    return a * b;  // Restituisce il prodotto dei due numeri
}

// Funzione che calcola il fattoriale di un numero
int fattoriale(int n) {
    int risultato = 1;
    for (int i = 1; i <= n; i++) {
        risultato *= i;  // Moltiplica il risultato per ogni numero da 1 a n
    }
    return risultato;  // Restituisce il fattoriale
}

// Funzione principale
int main() {
    // Dichiarazione delle variabili
    int num1, num2;

    // Richiesta all'utente di inserire due numeri
    std::cout << "Inserisci il primo numero: ";
    std::cin >> num1;
    std::cout << "Inserisci il secondo numero: ";
    std::cin >> num2;

    // Chiamata alla funzione somma e stampa del risultato
    int sommaResult = somma(num1, num2);
    std::cout << "La somma di " << num1 << " e " << num2 << " è: " << sommaResult << std::endl;

    // Chiamata alla funzione moltiplica e stampa del risultato
    int moltiplicaResult = moltiplica(num1, num2);
    std::cout << "Il prodotto di " << num1 << " e " << num2 << " è: " << moltiplicaResult << std::endl;

    // Richiesta all'utente di inserire un numero per calcolare il fattoriale
    int numFattoriale;
    std::cout << "Inserisci un numero per calcolare il fattoriale: ";
    std::cin >> numFattoriale;

    // Chiamata alla funzione fattoriale e stampa del risultato
    int fattorialeResult = fattoriale(numFattoriale);
    std::cout << "Il fattoriale di " << numFattoriale << " è: " << fattorialeResult << std::endl;

    return 0;  // Termina il programma
}
