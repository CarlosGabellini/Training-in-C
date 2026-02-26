#include <stdio.h>

typedef int inteiro;
typedef float flutuante;

//Objetivo aqui é somente verificar se um numero eh par ou impar chamando as funções;

int verificar_par (inteiro input) {

    if (input % 2 == 0)
        printf ("Eh par!\n");

    else
        printf ("Eh impar!\n");

    return 0;
}

int main () {

    inteiro numero_input;

    printf ("Digite um numero: \n");
    scanf ("%d", &numero_input);

    verificar_par(numero_input);

    return 0;
}