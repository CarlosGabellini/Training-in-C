#include <stdio.h>

//Fazer uma funcao onde use 5 variaveis do tipo float, criar um array de ponteiros e somar;

double somar_valores (double *valores, int tamanho) {

    double resultado = 0;

    for (int a = 0; a < tamanho; a++) {
        resultado += valores[a];
    }

    return resultado;
}

int main () {

    double v1 = 34.21;
    double v2 = 45.1;
    double v3 = 54.122;
    double v4 = 11.212;
    double v5 = 5;

    double array[5];

    array[0] = v1;
    array[1] = v2;
    array[2] = v3;
    array[3] = v4;
    array[4] = v5;

    printf ("O resultado das somas do vetor sera de: %.2f\n", somar_valores(array, 5));

    return 0;
}