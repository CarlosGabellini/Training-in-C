#include <stdio.h>

int soma_naturais (int n) {

    if (n < 1) {
        return 0;
    }

    return n + soma_naturais(n - 1);
}

void main () {

    printf ("soma: %d\n", soma_naturais(5));
}