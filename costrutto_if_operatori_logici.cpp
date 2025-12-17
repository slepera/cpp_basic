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
using namespace std;

int main() {

    char c = 'z';
    string s = "ciao";


    // Dichiarazione di variabili
    int eta = 17;               // Età dell'utente
    double saldoConto = 100.50; // Saldo bancario dell'utente

    // Uso di operatori logici (AND, OR, NOT) nel costrutto if

    // Verifica se l'utente è maggiorenne (>= 18) e ha un saldo sufficiente (>= 1000)
    bool condizione1 = eta >= 18 ;
    bool condizione2 = saldoConto >= 100;
    if (condizione1 && condizione2) {
        cout << "Sei maggiorenne e hai un saldo sufficiente per accedere al servizio." <<endl;
    }
    else
    {
        cout << "Non hai tutti i requisiti per accedere al servizio!" <<endl;
    }

    // Verifica se l'utente ha più di 18 anni oppure un saldo maggiore di 500
    if (eta < 18 || saldoConto < 100) {
        cout << "Non puoi sottoscrivere un abbonamento!" <<endl;
    }

    string status_abbonamento = "active"; // Stato dell'abbonamento
    // Verifica se l'abbonamento non è attivo



    if (status_abbonamento=="active") {
        cout << "Il tuo abbonamento è attivo." <<endl;
    }

    // Verifica combinando più condizioni con operatori logici
    if (eta >= 18 && saldoConto >= 100 && isAbbonamentoAttivo) {
        cout << "Puoi accedere al servizio premium!" <<endl;
    } else {
        cout << "Non hai accesso al servizio premium." <<endl;
    }

    return 0;  // Termina il programma
}
