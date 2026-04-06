#include <stdio.h>

void inverter_vetor (int vetor[], int inicio, int fim) {

    if (inicio == fim) {

        return vetor[inicio];
    }

    //Variavel auxiliar para ajudar a inverter e o valor a não se perder;

    int inverter = vetor[inicio];

    vetor[inicio] = vetor[fim];
    vetor[fim] = inverter;

    return inverter_vetor(vetor, inicio + 1, fim - 1);
}

int main () {

    int array[5] = {1, 2, 3, 4, 5};

    inverter_vetor(array, 0, 4);

    for (int i = 0; i < 5; i++) {

        printf ("%d\t", array[i]);
    }

    return 0;
}