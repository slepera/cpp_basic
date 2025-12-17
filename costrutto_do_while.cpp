#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    int numero;  // Variabile per immagazzinare il numero inserito dall'utente

    // Il ciclo do-while continua a chiedere all'utente di inserire un numero positivo
    do {
        std::cout << "Inserisci un numero positivo: ";  // Chiede all'utente di inserire un numero
        std::cin >> numero;  // Legge il numero inserito dall'utente

        // Se il numero inserito è negativo, il ciclo continuerà
        if (numero < 0) {
            std::cout << "Hai inserito un numero negativo. Prova ancora." << std::endl;
        }

    } while (numero < 0);  // Condizione di continuazione del ciclo (numero deve essere positivo)

    // Una volta che l'utente inserisce un numero positivo, il ciclo termina
    std::cout << "Hai inserito il numero positivo: " << numero << std::endl;

    return 0;  // Termina il programma
}
