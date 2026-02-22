#include <iostream>
#include <string>
using namespace std;

int main() {
    int i = 9;
    char c = 'a';
    // char nome[] = "Luca";
    // nome[0] = 'L';
    int vocali=0;
    int consonanti = 0;
    int spazi = 0;
    string frase = "LUcA OggI hA sostenuto l'esame di informatica di base";

    for (int i = 0; i < frase.length(); i++) {
        char c = tolower(frase[i]);

        if (c=='a' || c=='e' || c=='i' || c=='o' || c=='u') {
            vocali++;
        }
        else if (c>='a' and c<='z') {
            consonanti++;
        }else if (c == ' ') {
            spazi++;
        }
    }
    cout<<"nella frase ci sono "<<vocali<<" vocali!"<<endl;
    cout<<"nella frase ci sono "<<consonanti<<" consonanti!"<<endl;
    cout<<"nella frase ci sono "<<spazi<<" spazi!"<<endl;
}