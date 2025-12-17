#include <stdio.h>

int main() {
    // ------------------------------
    // Esempio di Casting Implicito
    // ------------------------------
    int i = 10;
    float result_float = i;
    float f = 3.14;
    double result_double = f;

    printf("Casting implicito:\n");
    printf("Int a Float: %d -> %f\n", i, result_float);
    printf("Float a Double: %f -> %f\n", f, result_double);

    // ------------------------------
    // Esempio di Casting Esplicito
    // ------------------------------
    int a = 10;
    int b = 3;

    float c;
    
    c = a/b;

    printf("c (con perdita di informazione) %f\n", c);

    c  = (float)a/b;

    printf("c (senza perdita di informazione) %f\n", c);


    return 0;
}