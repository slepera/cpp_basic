#include <iostream>
#include <string>
#include <cctype>   // per tolower()

using namespace std;

int main() {
    string frase;
    int vocali = 0;
    int consonanti = 0;
    int spazi = 0;

    cout << "Inserisci una frase: ";
    getline(cin, frase);

    for (int i = 0; i < frase.length(); i++) {
        char c = tolower(frase[i]);

        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vocali++;
        }
        else if (c >= 'a' && c <= 'z') {
            consonanti++;
        }
        else if (c == ' ') {
            spazi++;
        }
    }

    cout << "Vocali: " << vocali << endl;
    cout << "Consonanti: " << consonanti << endl;
    cout << "Spazi: " << spazi << endl;

    return 0;
}
