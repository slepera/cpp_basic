#include <stdlib.h>
#include <string.h>
#include <stdio.h>

void cerca_occorrenze(char frase[], char &carattere_piu_frequente, int &numero_occorrenze)
{
    int indice_max;
    int max;
    char occorrenze[256];
    for(int i = 0; i < 256; i++)
    {
        occorrenze[i] = 0;
    }
    for(int i = 0; i < strlen(frase); i++)
    {
        occorrenze[frase[i]]++;
    }
    indice_max = 0;
    max = occorrenze[indice_max];
    for(int i = 0; i < 256; i++)
    {
        if(occorrenze[i] > max)
        {
            indice_max = i;
            max = occorrenze[indice_max];
        }
    }
    carattere_piu_frequente = indice_max;
    numero_occorrenze = max;
}





int main()
{
    char carattere_piu_frequente;
    int numero_occorrenze;
    const int MAX_LENGTH = 1024;
    char frase[MAX_LENGTH];
    printf("Inserisci una frase:");
    fgets(frase, MAX_LENGTH, stdin);
    
    (frase, carattere_piu_frequente, numero_occorrenze);

    printf("il carattere che compare piu volte e: %c, e compare %d volte", carattere_piu_frequente, numero_occorrenze);


}