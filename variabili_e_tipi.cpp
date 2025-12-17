/* 
Spiegazione del codice:
int intero = 10;: Una variabile di tipo intero (int) che memorizza il numero 10.
double decimale = 3.14;: Una variabile di tipo double, utilizzata per memorizzare numeri con la virgola mobile (decimali).
char carattere = 'A';: Una variabile di tipo char che memorizza un singolo carattere. In questo caso, 'A'.
bool veroFalso = true;: Una variabile booleana (bool) che può essere true (vero) o false (falso).
std::string messaggio = "C++ è divertente!";: Una variabile di tipo stringa (std::string), che è usata per memorizzare testo.
std::cout: Questo è un oggetto che serve a stampare sulla console. Viene utilizzato con l'operatore << per inserire i valori da stampare.
Operazioni su variabili:
intero += 5;: Aggiunge 5 al valore della variabile intero.
decimale *= 2;: Moltiplica il valore di decimale per 2.
return 0;: La funzione main restituisce 0 per segnalare che il programma è terminato correttamente.
Il programma mostra come dichiarare variabili di diversi tipi (intero, float, char, booleano, stringa), assegnare valori e modificarli durante l'esecuzione.
 */

#include <iostream>  // Inclusione della libreria per l'input e l'output
using namespace std;
int main() {



    char c = '9';
    char d = '1';

    int e = c + d;

    cout<<c + d<<endl;


    short int numero_alunni = 35;

    float costo = 3.62;
    double dimensione_atomo = 0.2112823183821812;





    // Dichiarazione e inizializzazione di variabili di diversi tipi
    int intero = 10;             // Variabile intera (int) inizializzata a 10
    double decimale = 3.14;      // Variabile in virgola mobile (double) inizializzata a 3.14
    char carattere = 'A';        // Variabile di tipo carattere (char) inizializzata a 'A'
    bool veroFalso = true;       // Variabile booleana (bool) inizializzata a true
    
    
    
    
    
    
    std::string messaggio = "C++ è divertente!";  // Variabile stringa (std::string) contenente un testo

    // Stampa il valore delle variabili sulla console
    std::cout << "Valore intero: " << intero << std::endl;       // Stampa del valore intero
    std::cout << "Valore decimale: " << decimale << std::endl;   // Stampa del valore decimale
    std::cout << "Valore carattere: " << carattere << std::endl; // Stampa del valore del carattere
    std::cout << "Valore booleano: " << (veroFalso ? "vero" : "falso") << std::endl; // Stampa del valore booleano
    std::cout << "Messaggio: " << messaggio << std::endl;         // Stampa del messaggio stringa

    // Modifica del valore di alcune variabili
    intero += 5;  // Aggiunge 5 al valore di intero
    decimale *= 2; // Moltiplica il valore di decimale per 2

    // Stampa i nuovi valori dopo la modifica
    std::cout << "Nuovo valore intero: " << intero << std::endl;
    std::cout << "Nuovo valore decimale: " << decimale << std::endl;

    return 0; // Restituisce 0 per indicare che il programma è terminato correttamente
}
