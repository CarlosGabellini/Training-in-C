#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Basicamente este exercicio nos pede para encontrar a menor base logaritmica em um dado numero;

double potencia(int expoente, double base) {

    double resultado = 1;

    for(int a = 1; a <= expoente; a++) {
        resultado *= base;
    }

    return resultado;
}

void menor_base(int n, int *b, int *k) {

    for (int a = 2; a <= n; a++) {                  //Em logaritmo a menor base eh sempre o 2;

        int resultado = a;

        for (int c = 1; c < (n / 2); c++) {

            resultado = potencia(c, a);

            if (resultado == n) {
                printf("Encontrado!\n");
                *b = a;
                *k = c;
                break;
            }
        }

        if(resultado == n) {
            break;
        }
    }
}

int main() {

    int numero = 81;
    int *b;
    int *k;

    *b = 0;
    *k = 0;

    menor_base(numero, b, k);

    printf("Menor base para %d eh %d elevando a %d\n", numero, *b, *k);

    return 0;
}