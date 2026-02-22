#include <iostream>
#include <string>
using namespace std;

int main() {
    int contatore = 0;
    string parola;
    string frase =
   "Negli ultimi anni, uno dei temi più rilevanti nel dibattito pubblico globale è stato lo sviluppo dell’intelligenza artificiale. L’AI non è più un concetto futuristico: è entrata nella vita quotidiana di milioni di persone, trasformando il modo in cui lavoriamo, studiamo e comunichiamo."
   "L’uso crescente di sistemi basati su AI sta rivoluzionando numerosi settori. In ambito sanitario, algoritmi avanzati aiutano a individuare malattie in fase precoce; nel mondo del lavoro, automatizzano compiti ripetitivi; nell’istruzione, offrono strumenti personalizzati per l’apprendimento. Allo stesso tempo, però, emergono interrogativi importanti: quali professioni rischiano di scomparire? Come garantire la tutela dei dati personali? Chi è responsabile delle decisioni prese da una macchina?"
   "Anche le istituzioni stanno cercando di regolamentare questo fenomeno. L’Unione Europea, ad esempio, ha approvato l’AI Act, una normativa che mira a stabilire regole chiare per l’uso dell’intelligenza artificiale, classificando i sistemi in base al livello di rischio. L’obiettivo è trovare un equilibrio tra innovazione e protezione dei diritti fondamentali."
   "Un altro aspetto cruciale riguarda l’etica. L’intelligenza artificiale può amplificare pregiudizi presenti nei dati su cui viene addestrata. Per questo motivo, esperti e ricercatori sottolineano l’importanza della trasparenza e della supervisione umana. Non si tratta solo di tecnologia, ma di scelte che influenzeranno il futuro della società."
   "In conclusione, l’intelligenza artificiale rappresenta una delle sfide più complesse e affascinanti del nostro tempo. Se gestita con responsabilità, potrà offrire opportunità straordinarie; se trascurata o utilizzata senza regole, potrebbe accentuare disuguaglianze e rischi. Il dibattito è aperto, e coinvolge governi, aziende e cittadini in una trasformazione che è già iniziata.)";

    cout<<"inserisci la parola da cercare: ";
    cin>>parola;
    size_t posizione_nuova, posizione = 0;
    while ((posizione_nuova = frase.find(parola, posizione))!=string::npos) {
        contatore++;
        posizione = posizione_nuova + parola.length();
    }
    cout<<"trovata "<<contatore<<" volte";
    //
    //
    // size_t pos_iniziale = frase.find("3di",0);
    // cout<<"frase prima: "<<frase<<endl;
    // frase.replace(pos_iniziale, 3, "3ci");
    // cout<<"frase dopo: "<<frase<<endl;
    //



    // cout<<parola.length()<<endl;
    // cout<<parola.front()<<endl;
    // cout<<parola.back()<<endl;
    // cout<<parola.empty()<<endl;

    // cout<<parola.compare("ciao")<<endl;
    // cout<<parola.substr(1,2)<<endl;


//    cout<<parola[59]<<endl;
//    cout<<parola.at(5)<<endl;

    // if (frase.find("3di", 0)!=string::npos) {
    //     cout<<"la frase contiene 3di";
    // }else {
    //     cout<<"la frase non contiene 3di";
    // }

}