#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void max_frequent(char frase[], int &max_index, int &max_value)
{
    int ascii[256];

    for(int i = 0; i < 256; i++)
    {
        ascii[i] = 0;
    }
    for(int i = 0; i < strlen(frase); i++)
    {
        ascii[frase[i]]++;
    }
    max_index = 0;
    max_value = ascii[max_index];
    for(int i = 0; i < 256; i++)
    {
        if(ascii[i]>max_value)
        {
            max_index = i;
            max_value = ascii[max_index];
        }
    }

}

int main()
{

    const int MAX_LENGTH = 1024;
    char frase[MAX_LENGTH];
    printf("Inserisci una frase:");
    fgets(frase, MAX_LENGTH, stdin);
    int max_index, max_value;
    max_frequent(frase, max_index, max_value);
    printf("La lettera che compare di più e': %c compare %d volte", max_index,max_value);


}