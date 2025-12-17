#include <iostream>
using namespace std;



string to_upper_case(string s)
{




}



string to_lower_case(string s)
{

}





int main()
{
    string frase;
    getline(cin, frase);
    string frase_maiuscolo = to_upper_case(frase);
    string frase_minuscolo = to_lower_case(frase);
    cout<<"la frase maiuscola e': "<<frase_maiuscolo<<endl;
    cout<<"la frase minuscola e': "<<frase_minuscolo<<endl;
    



}







void minuscole(string s)
{
    int numero_minuscole=0;
    int n = s.size();
    
    cout<<"nella parola " <<s<<" ci sono le seguenti lettere minuscole: ";

    for(int i = 0; i<n; i++)
    {
        char c = s[i];
        if(c>=97 && c<=122)
        {
            numero_minuscole++;
            cout<<" "<<c<<" ";
        }
    }
    cout<<endl;
    cout<<"nella parola " <<s<<" ci sono "<<numero_minuscole<<" lettere minuscole";
}

void maiuscole(string s)
{
    int numero_maiuscole=0;
    int n = s.size();
    
    cout<<"nella parola " <<s<<" ci sono le seguenti lettere maiuscole: ";

    for(int i = 0; i<n; i++)
    {
        char c = s[i];
        if(c>=65 && c<=90)
        {
            numero_maiuscole++;
            cout<<" "<<c<<" ";
        }
    }
    cout<<endl;
    cout<<"nella parola " <<s<<" ci sono "<<numero_maiuscole<<" lettere maiuscole";
}

int main()
{
    string parola;
    cout<<"inserisci una parola con minuscole e maiuscole: ";
    cin>>parola;
    maiuscole(parola);
    cout<< endl;
    minuscole(parola);



}