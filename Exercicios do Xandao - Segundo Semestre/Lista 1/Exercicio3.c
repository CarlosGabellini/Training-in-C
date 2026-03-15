#include <stdio.h>

int maximo_divisor (int numero, int numero2) {

    int resto_divisao;

    //Implementação do algoritmo de euclides, onde se o numero2 for igual 0, o primeiro numero será o maximo divisor comum;

    while (numero2 > 0) {

        resto_divisao = numero % numero2;
        numero = numero2;                           //Tem que ser exatamente nesta ordem;
        numero2 = resto_divisao;

    } 

    return numero;
}

int main () {

    int numero_input = 0;
    int numero_input2 = 0;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero_input);

    printf ("Digite outro numero: \n");
    scanf ("%d", &numero_input2);

    printf ("Qual o maximo divisor comum desses dois numeros? \n");

    printf ("Resposta: %d\n", maximo_divisor(numero_input2, numero_input));

    return 0;
}