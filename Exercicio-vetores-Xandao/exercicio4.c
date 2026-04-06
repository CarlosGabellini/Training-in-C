#include <stdio.h>

int main () {

    //Dados duas sequencias de n e m valores inteiros, onde n <= m, escreva um programa que verifica quantas vezes 
    //a primeira sequencia ocorre na segunda.

    int numero_vetor;
    int numero_vetor2;
    int a = 100;
    int contador = 0;

    printf ("digite um numero para o primeiro vetor: \n");
    scanf ("%d", &numero_vetor);

    printf ("Agora digite um numero para outro vetor: \n");
    scanf ("%d", &numero_vetor2);

    if (numero_vetor < 0 || numero_vetor2 < 0 || numero_vetor > numero_vetor2) {

        printf ("Entrada inválida! Tente outro numero positivo. \n");
        return 1;
    }

    int vetor1[numero_vetor];                                       //Se o usuario quiser digitar o valor dos vetores, ELES TEM QUE SER DEPOIS DO SCAN.
    int vetor2[numero_vetor2];

    for (int i = 0; i < numero_vetor; i++) {

        vetor1[i] = a % 2;
        a /= 2;

        printf ("Valores do primeiro vetor: %d \n \n", vetor1[i]);
    }

    for (int j = 0; j < numero_vetor2; j++) {

        vetor2[j] = a % 2;
        a /= 3;

        printf ("Valores do segundo vetor: %d \n \n", vetor2[j]);
    }

    for (int k = 0; k <= numero_vetor2 - numero_vetor; k++) {

        int igual = 1;

        for (int j = 0; j < numero_vetor; j++) {

            if (vetor2[k + j] != vetor1[j]) {

                igual = 0;
                break;
            }
        }

    if (igual == 1) {

        contador++;
    }

    }

    printf ("O primeiro vetor aparece no segundo %d vezes.", contador);
    return 0;
}