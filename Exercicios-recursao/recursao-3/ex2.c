#include <stdio.h>

int potencia (int base, int expoente) {

    int resultado;

    if (expoente <= 0) {
        return 1;
    }

    if (expoente % 2 == 0) {
        
        resultado = potencia(base, expoente / 2);

        return resultado * resultado;
    }

    else {

        return base * potencia(base, expoente - 1);
    }
}

int main () {

    printf ("%d\n", potencia(7, 2));

    return 0;
}