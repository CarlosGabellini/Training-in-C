#include <stdio.h>

int potencia (int base, int expoente) {

    if (expoente < 1) {
        return 1;
    }

    return base * potencia(base, expoente - 1);
}

int main () {

    printf ("%d\n", potencia(2, 3));

    return 0;
}