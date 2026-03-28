#include <stdio.h>

int contar_digitos (int numero) {

    if (numero < 10) {
        return 1;
    }

    return 1 + contar_digitos(numero / 10);
}

int main () {

    printf ("Quantos digitos tem o numero: %d?\n", 134);
    printf ("%d", contar_digitos(134));

    return 0;
}