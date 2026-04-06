#include <stdio.h>

int somatorio (int numero) {

    if (numero <= 0) {

        return 0;
    }

    return numero + somatorio(numero - 2);
}

int main () {

    printf ("O somatorio de %d eh %d.\n", 14, somatorio(1000));

    return 0;
}