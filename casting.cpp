#include <stdio.h>

int main() {
    // Variabili di diversi tipi di dato
    int i = 10;
    float f = 3.14;
    double d = 123.456;
    char c = 'A';


    //unsigned  byte [0-255]
    //signed  byte [-127,128]

    char cccaaa = 97;
    cccaaa = cccaaa + 300;


    printf("Sto stampando un char: %c\n",cccaaa);





    // ------------------------------
    // Esempio di Casting Implicito
    // ------------------------------
    // Implicitamente, il valore di un 'int' può essere assegnato a un 'float' o a un 'double'
    float result_float = i;  // Implicitamente 'i' (int) diventa 'float'
    double result_double = f; // Implicitamente 'f' (float) diventa 'double'

    printf("Casting implicito:\n");
    printf("Int a Float: %d -> %f\n", i, result_float);
    printf("Float a Double: %f -> %f\n", f, result_double);

    // ------------------------------
    // Esempio di Casting Esplicito
    // ------------------------------
    // Qui il valore di un 'float' è convertito esplicitamente in un 'int'
    int result_int = (int)f;  // Esplicitamente 'f' (float) diventa 'int'
    char result_char = (char)i; // Esplicitamente 'i' (int) diventa 'char'



    printf("\nCasting esplicito:\n");
    printf("Float a Int (perdita di parte decimale): %f -> %d\n", f, result_int);
    printf("Int a Char (ASCII): %d -> %c\n", i, result_char);

    // ------------------------------
    // Esempio di Casting Esplicito tra tipi di dati più complessi
    // ------------------------------
    // Supponiamo di voler convertire un 'double' in un 'float'
    float casted_float = (float)d;  // Esplicitamente 'd' (double) diventa 'float'

    printf("\nCasting esplicito (double a float): %f -> %f\n", d, casted_float);

    return 0;
}