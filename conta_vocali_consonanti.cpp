#include <iostream>
#include <string>
using namespace std;
bool vocale(char c) {
    c=tolower(c);
    if (c=='a'|| c=='e'|| c=='i' || c=='o'|| c=='u') {
        return true;
    }
    return false;
}
int main() {
    string frase;
    int vocali=0;
    int consonanti=0;
    int spazi=0;
    int numeri=0;
    int indice=0;
    int indice_nuovo =0;
    int conta_parola=0;
    string parola;
    cout<<"inserisci una frase";
     getline(cin,frase);
    cout<<"Inserisci una parola da cercare: ";
    cin>>parola;
    do {
        indice_nuovo=frase.find(parola,indice);
        conta_parola++;
        indice = indice_nuovo + parola.length();
    }while (indice_nuovo!=-1);
    conta_parola--;


     for (int i=0;i<frase.length();i++) {
         char c=tolower(frase[i]);
         if (vocale(c)==true) {
             vocali++;
         }else if (c>='a' and c<='z') {
             consonanti++;
         }else if (c==' '){
             spazi++;
         }else if (c>='0' and c<='9') {
             numeri++;
         }
     }
    cout<<"nella frase "<<frase<<" ci sono:"<<vocali<<" vocali"<<endl;
    cout<<"nella frase "<<frase<<" ci sono:"<<consonanti<<" consonanti"<<endl;
    cout<<"nella frase "<<frase<<" ci sono:"<<spazi<<" spazi"<<endl;
    cout<<"nella frase "<<frase<<" ci sono:"<<numeri<<" numeri"<<endl;
    cout<<"nella frase "<<frase<<" e' presente:"<<parola<<" per "<<conta_parola<<" volte";
}