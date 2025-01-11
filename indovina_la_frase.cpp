#include <iostream>
using namespace std;
 
const int N = 3;
int tentativi = 10;
bool lettere[26] = {false};
 
bool s_lettera(string frase[N])
{
    char lettera;
    cout << endl <<"Inserisci una lettera: ";
    cin >> lettera;
    if (lettere[lettera - 'a'])
        {
            cout << "Lettera gia' inserita!" << endl;
            return false;
        }
    bool trovata = false;
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < frase[i].size(); j++)
        {
            if (frase[i][j] == lettera)
            {
                trovata = true;
                lettere[lettera - 'a'] = true;
                break;
            }
        }
    }
    if (trovata)
    {
        cout << "Lettera trovata!" << endl;
    }
    else
    {
        cout << "Lettera non trovata!" << endl;
    }
  return trovata;
}
 
bool s_frase(string frase[N])
{
    string indovina[N];
    cout << endl;
    cin.ignore();
    for(int i = 0; i < N; i++)
    {
        cout << "Scrivi la " << i+1 << " linea: ";
        getline(cin,indovina[i]);
    }
    for(int i = 0; i < N; i++)
    {
        if(indovina[i] != frase[i])
        {
            return false;
        }
    }
    return true;
}
 
char scelta(string frase[N])
{
    char scelta;
    cout << "[f] = indovina la frase | [l] = Inserisci lettera: ";
    cin >> scelta;
    while(scelta != 'f' && scelta != 'l')
    {
        cout << "Non hai inserito un valore valido, riprova: ";
        cin >> scelta;
    }
    return scelta;
}
 
void stampa(string frase[N])
{
    system("cls");
    cout <<"--- " << "Tentativi rimasti: " << tentativi << " ---" << endl << endl;
    for (int i = 0; i < N; i++)
        {
            for (int j = 0; j < frase[i].size(); j++)
            {
                if (lettere[frase[i][j] - 'a'])
                {
                    cout << frase[i][j];
                }
                else if (frase[i][j] == ' ')
                {
                    cout << " ";
                }
                else
                {
                    cout << "_ ";
                }
            }
        cout << endl << endl;
      }
}
 
int main()
{
    string frase[N];
    bool azzeccato = true;
    char a;
    cout << "-ATTENZIONE!- Non far vedere la tua frase all'avversario! (Scrivi tutto in minuscolo)" << endl << endl;
 
    for(int i = 0; i < N; i++)
    {
        cout << "Inserisci la " << i+1 <<"* riga: ";
        getline(cin, frase[i]);
    }
    system("cls");
    while(tentativi > 0)
    {
        stampa(frase);
        a = scelta(frase);
        if(a == 'f')
        {
            azzeccato = s_frase(frase);
            if(azzeccato == true)
            {
                cout << endl <<"Complimenti! Hai vinto!! "<< endl;
                break;
            }
            else
            {
                cout << endl <<"Non hai indovinato la frase (Premi invio continuare)";
                cin.get();
            }
        }
        else if (a == 'l')
        {
            azzeccato = s_lettera(frase);
        }
        tentativi --;
    }
    if(tentativi == 0)
    {
        cout << endl << endl << "Tentativi esauriti, hai perso!!" << endl;
        cout << endl <<"- La frase era -" << endl;
        for(int i = 0; i < N; i++)
        {
            cout << endl << frase[i];
        }
    }
    return 0;
}