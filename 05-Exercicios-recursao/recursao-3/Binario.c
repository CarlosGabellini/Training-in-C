#include <stdio.h>

int binario (int numero) {

    int amostragem = 0;

    if (numero == 0) {
        return 0;
    }

    amostragem = binario(numero / 2);

    return (amostragem * 10) + (numero % 2);
}

int main () {

    printf ("7 em binário eh: %d\n", binario(7));

    return 0;
}