/* 
Spiegazione del codice:
Variabile contatore:

int contatore = 1;: La variabile contatore viene inizializzata a 1. Il ciclo while eseguirà il codice al suo interno finché contatore sarà minore o uguale a 5.
Ciclo while (Primo esempio):

while (contatore <= 5): La condizione del ciclo while è che contatore deve essere minore o uguale a 5. Se questa condizione è vera, il ciclo continua a eseguire.
std::cout << "Contatore: " << contatore << std::endl;: Viene stampato il valore del contatore alla console.
contatore++;: L'operatore ++ incrementa la variabile contatore di 1 ad ogni iterazione. Questo è importante per garantire che il ciclo termini prima o poi (altrimenti si creerebbe un ciclo infinito).
Secondo ciclo while:

int numero = 10;: Viene dichiarata una variabile numero e inizializzata a 10.
while (numero > 0): Il ciclo while continuerà a iterare finché numero sarà maggiore di 0.
std::cout << "Numero: " << numero << std::endl;: Ogni volta che il ciclo viene eseguito, viene stampato il valore attuale di numero.
numero -= 2;: La variabile numero viene decrementata di 2 ad ogni iterazione (equivalente a numero = numero - 2;).
 */

#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    // Dichiarazione di una variabile intera
    int contatore = 1;

    // Ciclo while che continua finché il contatore è minore o uguale a 5
    while (contatore <= 5) {
        // Stampa il valore del contatore
        std::cout << "Contatore: " << contatore << std::endl;

        // Incrementa il contatore di 1
        contatore++;
    }

    // Un altro esempio con il ciclo while
    std::cout << "Inizio del secondo ciclo while:" << std::endl;

    int numero = 10;
    // Ciclo while che esegue l'operazione finché il numero è maggiore di 0
    while (numero > 0) {
        std::cout << "Numero: " << numero << std::endl;
        
        // Decrementa il numero di 2 ad ogni iterazione
        numero -= 2;  // Può essere scritto anche come: numero = numero - 2;
    }

    return 0;  // Restituisce 0 per indicare che il programma è terminato correttamente
}
