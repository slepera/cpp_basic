#include <iostream>
#include <string>
using namespace std;
bool vuoto(char c) {
    if (c == ' ' || c == '\t' || c== '\v' || c == '\n' || c== '\r') {
        return true;
    }
    return false;
}
string mytrim_2(const string& s) {
    string risultato;
    int primo_carattere;
    int ultimo_carattere;
    for (primo_carattere = 0; primo_carattere < s.size(); primo_carattere++) {
        if (!vuoto(s[primo_carattere])) {
            break;
        }
    }
    for (ultimo_carattere = s.size()-1; ultimo_carattere >= 0; ultimo_carattere--) {
        if (!vuoto(s[ultimo_carattere])) {
            break;
        }
    }
    risultato = s.substr(primo_carattere, ultimo_carattere-primo_carattere+1);
    return risultato;
}
string mytrim(const string& s) {
    string risultato;
    char spazi[] = " \t\n\r\v";
    int primo_carattere=s.find_first_not_of(spazi);
    int ultimo_carattere=s.find_last_not_of(spazi);
    if (primo_carattere == ultimo_carattere) {
        risultato = "";
    }else {
        risultato = s.substr(primo_carattere, ultimo_carattere-primo_carattere+1);
    }
    return risultato;
}

int conta_vocali(const string& s) {
    int v = 0;
    for (int i = 0; i < s.size(); i++) {
        char c = tolower(s[i]);
        if (c=='a'||c=='e'||c=='i'||c=='o'||c=='u') {
            v++;
        }
    }
    return v;
}


int conta_parole(string& s) {
    string res = mytrim(s);
    if (res.empty()) {
        return 0;
    }
    int numeri_parole=0;
    for (int i=0; i<res.length();i++) {
        if (vuoto(res[i]) && !vuoto(res[i-1])) {
            numeri_parole++;
        }
    }
    return numeri_parole+1;
}

int main() {
    string frase;
    cout<<"inserisci una frase:"<<endl;
    getline(cin,frase);
    int parole = conta_parole(frase);
    int vocali = conta_vocali(frase);
    cout<<"la frase "<<frase<<" ha "<<parole<<" parole e "<<vocali<<" vocali!!!";
}