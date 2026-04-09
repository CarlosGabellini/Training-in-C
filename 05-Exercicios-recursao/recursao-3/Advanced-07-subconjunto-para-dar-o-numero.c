#include <stdio.h>

int subset_sum (int v[], int numero, int s) {

    if (s == 0) {

        return 1;
    }

    if (numero < 0) {

        return 0;
    }

    int soma = subset_sum(v, numero - 1, s - v[numero]);
    int nao_soma = subset_sum(v, numero - 1, s);

    return soma || nao_soma;
}

int main () {

    int vetor[] = {1, 2, 3, 4, 7, 8};

    printf ("Existe algum subconjunto que dá 11? \n");
    printf ("%d\n", subset_sum(vetor, 6, 11));

    return 0;
}