#include <iostream>

using namespace std;

int main()
{
    double n, m, r;
    char scelta;
    do{

        cout<<"Scegli cosa fare..."<<endl;
        cout<<"+ per sommare"<<endl;
        cout<<"- per sommare"<<endl;
        cout<<"* per sommare"<<endl;
        cout<<"/ per sommare"<<endl;
        cout<<"t per uscire!!!"<<endl;

        cin>>scelta;

        switch(scelta)
        {
            case '+':
                cout<<"Inserisci n: ";
                cin>>n;
                cout<<"Inserisci m: ";
                cin>>m;
                r = n + m;
                cout<<"Il risultato di n + m è uguale a: "<<r<<endl;
                break;
            case '-':
                cout<<"Inserisci n: ";
                cin>>n;
                cout<<"Inserisci m: ";
                cin>>m;
                r = n - m;
                cout<<"Il risultato di n - m è uguale a: "<<r<<endl;
                break;
            case '*':
                cout<<"Inserisci n: ";
                cin>>n;
                cout<<"Inserisci m: ";
                cin>>m;
                r = n * m;
                cout<<"Il risultato di n * m è uguale a: "<<r<<endl;
                break;
            case '/':
                cout<<"Inserisci n: ";
                cin>>n;
                cout<<"Inserisci m: ";
                cin>>m;
                r = n / m;
                cout<<"Il risultato di n / m è uguale a: "<<r<<endl;
                break;
            case 't':
                break;
            default:
                cout<<"Scelta non prevista!!!"<<endl;
                break;    
        }

    }while(scelta!='t');
    

}
