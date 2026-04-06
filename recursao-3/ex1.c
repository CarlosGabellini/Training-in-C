#include <stdio.h>

int soma_inteiros (int numero) {

    if (numero == 0) {
        return 0;
    }

    if (numero < 0) {

        numero *= -1;
    }

    return (numero % 10) + soma_inteiros(numero / 10);
}

int main () {

    printf ("Soma de %d eh: %d\n", -232, soma_inteiros(-232));

    return 0;
}