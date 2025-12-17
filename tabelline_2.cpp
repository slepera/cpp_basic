#include<iostream>
#include<ctime>
using namespace std;
int main() {
    int n1, n2, numero_inserito, risposte_esatte=0;
    srand(time(NULL));
    for (int i=0;i<10;i++) {
        n1=rand()%11;
        n2=rand()%11;
        cout<<"quanto fa "<<n1<<"x"<<n2<<"?";
        cin>>numero_inserito;
        if (numero_inserito==n1*n2) {
            risposte_esatte++;
        }

    }
    if (risposte_esatte==10) {
        cout<<"bravissimo";
    }
    else if (risposte_esatte>=7&&risposte_esatte<=9) {
        cout<<"bravo";
    }
    else {
        cout<<"esercitati";
    }
}
