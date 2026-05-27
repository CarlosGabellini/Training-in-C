#include <stdio.h>
#include <stdlib.h>

//Escreva um algoritmo iterativo em C para avaliar a * b usando a adição, onde a e b são
//inteiros não negativos.

//Entendi basicamente que é pra fazer uma multiplicação usando recursão;

int multiMat(int a, int b) {

    if (b == 0) {
        return 0;
    }

    return a + multiMat(a, b - 1);
}

//De certo modo somente serve para aprendizado, pois isso nao eh eficiente.

int main() {

    printf("Multiplicacao de %d eh %d dará %d\n", 4, 7, multiMat(54, 13));

    return 0;
}