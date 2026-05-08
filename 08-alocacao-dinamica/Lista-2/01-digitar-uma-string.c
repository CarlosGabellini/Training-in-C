#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*Desenvolva um programa que solicite ao usuário o tamanho de um vetor de caracteres, aloque
dinamicamente esse vetor com o tipo char utilizando malloc, e então peça ao usuário para
digitar uma string. Após receber a entrada, imprima a string e, finalmente, libere a memória
alocada para evitar vazamentos. */

int main () {

    int input;

    printf("Digite o tamanho da string: ");
    scanf("%d", &input);

    getchar();

    char *str1 = (char*) malloc(input);

    printf("Digite a sua string: ");
    fgets(str1, input, stdin);

    printf("\n");
    printf("A sua string digitada: \n");
    printf("%s", str1);

    free(str1);

    return 0;
}