/*
 *Questo programma è scritto da Mauro e deve calcola..
 Il programma deve continuare a leggere numeri naturali
 e a calcolarne la somma, fermandosi quando
legge uno zero.
*/
#include<iostream>
using namespace std;
int main () {
    int n,s=0;
    do {
        cout<<"inserisci un numero :";
        cin>>n;
        s=s+n;
    }while (n!=0);
    cout<<"la somma dei numeri e' "<< s ;
}
