#include <iostream>
#include <string>
using namespace std;
int main() {
    string s;
    int contatore_min=0;
    int contatore_mai=0;
    cout<<"Inserisci la parola";
    cin>>s;
    int l=s.length();
    for (int i=0;i<l;i++) {
        char c=s[i];
        if (c>='a' and c<='z') {
            contatore_min++;
        }else if (c>='A' and c<='Z'){
            contatore_mai++;
        }
    }
    cout<<"La parola "<<s<<" ha "<<contatore_min<<" minuscole"<<endl;
    cout<<"La parola "<<s<<" ha "<<contatore_mai<<" maiuscole"<<endl;

}
