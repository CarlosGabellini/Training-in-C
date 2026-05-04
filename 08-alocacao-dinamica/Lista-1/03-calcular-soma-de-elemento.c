#include <stdio.h>
#include <stdlib.h>
#include <time.h>

const int GLOBAL = 9;

int main () {

    int *v2 = (int*) malloc(GLOBAL * sizeof(int));
    int *soma = (int*) malloc(sizeof(int));

    *soma = 0;

    for (int a = 0; a < GLOBAL; a++) {

        v2[a] = 1 + (rand() % 40);
        *soma += v2[a];

        printf ("[%d]\t", v2[a]);

        if (a % 3 == 2) {
            printf("\n");
        }
    }

    printf("O valor da soma dos vetores eh: %d\n", *soma);

    free(v2);
    free(soma);

    return 0;
}