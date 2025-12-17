/* 
Spiegazione del codice:
Primo ciclo for (numeri da 1 a 10):

for (int i = 1; i <= 10; i++):
int i = 1: Inizializza la variabile i a 1.
i <= 10: La condizione di continuazione del ciclo è che i deve essere minore o uguale a 10. Se questa condizione è vera, il ciclo continua a eseguire.
i++: Dopo ogni iterazione, il valore di i viene incrementato di 1 (equivalente a i = i + 1).
std::cout << i << std::endl;: Stampa il valore corrente di i sulla console.
Secondo ciclo for (numeri pari da 2 a 20):

for (int i = 2; i <= 20; i += 2):
int i = 2: Inizializza i a 2.
i <= 20: La condizione di continuazione del ciclo è che i deve essere minore o uguale a 20.
i += 2: Dopo ogni iterazione, i viene incrementato di 2 (per stampare solo numeri pari).
std::cout << i << std::endl;: Stampa il valore corrente di i sulla console.
Terzo ciclo for (numeri da 10 a 1 con decremento):

for (int i = 10; i >= 1; i--):
int i = 10: Inizializza i a 10.
i >= 1: La condizione di continuazione del ciclo è che i deve essere maggiore o uguale a 1.
i--: Dopo ogni iterazione, i viene decrementato di 1 (equivalente a i = i - 1).
std::cout << i << std::endl;: Stampa il valore corrente di i sulla console.
return 0;: Questo comando segnala che il programma è terminato correttamente.
 
*/
#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    // Stampa i numeri da 1 a 10 utilizzando un ciclo for
    std::cout << "Stampa i numeri da 1 a 10:" << std::endl;
    for (int i = 1; i <= 10; i++) {
        // Stampa il valore di i ad ogni iterazione
        std::cout << i << std::endl;
    }

    // Un altro esempio: stampa i numeri pari da 2 a 20
    std::cout << "Stampa i numeri pari da 2 a 20:" << std::endl;
    for (int i = 2; i <= 20; i += 2) {
        // Stampa i numeri pari (i viene incrementato di 2 ad ogni iterazione)
        std::cout << i << std::endl;
    }

    // Esempio con decremento: stampa i numeri da 10 a 1
    std::cout << "Stampa i numeri da 10 a 1:" << std::endl;
    for (int i = 10; i >= 1; i--) {
        // Stampa il valore di i ad ogni iterazione
        std::cout << i << std::endl;
    }

    return 0;  // Termina il programma
}
