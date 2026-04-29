#include <stdio.h>
#include <stdlib.h>

//Desenvolva um vetor dinamico de caracteres em C onde o usuario digita o quanto de espaco ele quer com malloc;

int main () {

    int dig = 0;

    printf ("Qual o tamanho da string? \n");
    scanf ("%d", &dig);
    setbuf (stdin, NULL);

    char *vetor = (char*) malloc(dig + 1);  //Lembre-se tambem do \n que fica armazenado na string;

    printf ("Digite a sua string: ");
    fgets (vetor, dig + 1, stdin);          //Prescisa desse +1 por que conta o \n e o \0, entao de 10, teremos 8;

    printf ("Sua string abaixo: \n");
    printf ("%s", vetor);

    free(vetor);

    return 0;
}