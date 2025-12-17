#include <iostream>
using namespace std;

string capitalize_first_letter(string s)
{
    int length = s.size();
    for(int i = 0; i < length; i++)
    {
        if(i == 0 || s[i-1]==' ')
        {
            s[i]=toupper(s[i]);
        }
    }
    return s;
}



int main()
{

    string statement;
    cout<<"inserisci una frase:";
    getline(cin, statement);
    string capitalized_statement = capitalize_first_letter(statement);
    cout<<endl<<capitalized_statement;



}




