#include <iostream>
using namespace std;

int main()
{
    char str[] = {'a','b','c'};
    cout<<str;

    char str2[4] = {'d','e','f'};

    char str3[] = "hello!";

    char str4[7] = "hello!"; 


    string word = "ciao a tutti!!!";
    string crypto_word;
    crypto_word.resize(word.size());
    for(int i = 0 ; i < word.size(); i++)
    {
        crypto_word[i] = word[i] + 1;
    }
    cout<<crypto_word;
    cout<<word;
}