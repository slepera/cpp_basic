#include <iostream>
using namespace std;

int count_words(string s)
{
    int number_of_words = 0;
    int length = s.size();
    for(int i = 0; i < length - 1; i++)
    {
        if(i==0 || ((s[i] == ' ') && (s[i+1] != ' ')) || ((s[i] == '\'') && (s[i+1] != ' ')))
        {
            number_of_words++;
        }
    }
    return number_of_words;
}


int main()
{
    string statement;
    int number_of_words;
    cout<<"Inserisci una frase composta da più parole:";
    getline(cin, statement);
    number_of_words = count_words(statement);
    cout<<"la frase contiene "<<number_of_words<<" parole!";
}