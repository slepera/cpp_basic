#include <iostream>
using namespace std;

void hello()
{
    cout<<"***********************************************************************************"<<endl;
    cout<<"--------------------------------   Hello World!!! ---------------------------------"<<endl;
    cout<<"***********************************************************************************"<<endl;
}

void stampa_con_cornice(string msg)
{
    cout<<endl<<"***********************************************************************************"<<endl;
    cout<<"  "<<msg<<"  ";
    cout<<endl<<"***********************************************************************************"<<endl;
}


int max(int n1, int n2)
{
    if(n1>n2)
    {
        return n1;
    }
    else
    {
        return n2;
    }
}


int main()
{
    hello();
    stampa_con_cornice("Questo programma calcola il max tra tre numeri interi usando la funzione max!!!");
    int a, b, c, m;
    cout<<"Inserisci il primo numero: ";
    cin>>a;
    cout<<"Inserisci il secondo numero: ";
    cin>>b;
    cout<<"Inserisci il terzo numero: ";
    cin>>c;
    m = max(a, b);
    m = max(m, c);

    string mymsg = "il max tra " + to_string(a) + ", " + to_string(b) + ", " + to_string(c) + " e': " +  to_string(m);
    stampa_con_cornice(mymsg);

    string nome;
    cout<<"inserisci il tuo nome: ";
    cin>>nome;

    stampa_con_cornice("ciao " + nome);

}