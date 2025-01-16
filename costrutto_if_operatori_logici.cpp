/* 
Spiegazione del codice:
Variabili dichiarate:

int eta = 25;: L'età dell'utente.
double saldoConto = 1500.50;: Il saldo bancario dell'utente.
bool isAbbonamentoAttivo = true;: Una variabile booleana che indica se l'abbonamento dell'utente è attivo.
Operatori logici:

&& (AND): L'operatore logico AND restituisce true se entrambe le condizioni sono vere. Ad esempio, la condizione eta >= 18 && saldoConto >= 1000 verifica se l'utente ha almeno 18 anni e un saldo di almeno 1000.
|| (OR): L'operatore logico OR restituisce true se almeno una delle condizioni è vera. Ad esempio, eta > 18 || saldoConto > 500 restituisce true se l'utente ha più di 18 anni oppure un saldo maggiore di 500.
! (NOT): L'operatore NOT restituisce l'inverso di una condizione booleana. Se isAbbonamentoAttivo è false, l'espressione !isAbbonamentoAttivo sarà true.
Struttura if:

La struttura if esegue il blocco di codice associato se la condizione specificata è vera.
Ogni condizione nel programma utilizza uno o più operatori logici per verificare combinazioni di condizioni.
Esempi di uso di if:

if (eta >= 18 && saldoConto >= 1000): Controlla se l'utente è maggiorenne e ha un saldo bancario sufficiente.
if (eta > 18 || saldoConto > 500): Verifica se l'utente ha più di 18 anni oppure un saldo maggiore di 500.
if (!isAbbonamentoAttivo): Verifica se l'abbonamento non è attivo.
if (eta >= 18 && saldoConto >= 1000 && isAbbonamentoAttivo): Verifica tutte e tre le condizioni insieme (utente maggiorenne, saldo sufficiente, e abbonamento attivo).
 */

#include <iostream>  // Inclusione della libreria per l'input e l'output

int main() {
    // Dichiarazione di variabili
    int eta = 18;               // Età dell'utente
    double saldoConto = 1500.50; // Saldo bancario dell'utente
    bool isAbbonamentoAttivo = true; // Stato dell'abbonamento

    // Uso di operatori logici (AND, OR, NOT) nel costrutto if

    // Verifica se l'utente è maggiorenne (>= 18) e ha un saldo sufficiente (>= 1000)
    if (eta >= 18 && saldoConto >= 1000) {
        std::cout << "Sei maggiorenne e hai un saldo sufficiente nel tuo conto." << std::endl;
    }

    // Verifica se l'utente ha più di 18 anni oppure un saldo maggiore di 500
    if (eta > 18 || saldoConto > 500) {
        std::cout << "Hai più di 18 anni oppure un saldo superiore a 500." << std::endl;
    }

    // Verifica se l'abbonamento non è attivo
    if (!isAbbonamentoAttivo) {
        std::cout << "Il tuo abbonamento non è attivo." << std::endl;
    }

    // Verifica combinando più condizioni con operatori logici
    if (eta >= 18 && saldoConto >= 1000 && isAbbonamentoAttivo) {
        std::cout << "Puoi accedere al servizio premium!" << std::endl;
    } else {
        std::cout << "Non hai accesso al servizio premium." << std::endl;
    }

    return 0;  // Termina il programma
}
