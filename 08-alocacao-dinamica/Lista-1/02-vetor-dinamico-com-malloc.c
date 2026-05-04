#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Criar um vetor dinamico com malloc onde pede um numero n e entao aloque um vetor de n inteiros com malloc;

int main () {

    int n;
    srand(time(NULL));

    printf ("Digite um numero para o vetor: ");
    scanf ("%d", &n);

    int *v1 = (int*) malloc(n * sizeof(int));

    if (v1 == NULL) {
        printf("Erro de alocacao de memoria!\n");
        return 1;
    }

    for (int a = 0; a < n; a++) {

        v1[a] = 1 + (rand() % 60);
        printf("[%d]\t", v1[a]);

        if (a % 3 == 2) {
            printf("\n");
        }
    }

    free(v1);

    return 0;
}