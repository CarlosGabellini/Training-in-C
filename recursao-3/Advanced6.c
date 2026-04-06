#include <stdio.h>

/*Faça um exercicio de função recursiva onde analisa o numero de ocorrencias de um numero em um vetor, como no exemplo:

vetor[5] = {1, 2, 3, 4, 2};

Numero de ocorrencias do '2' é 2 vezes.

Onde a função deve ser:

int ocorrencia (int vetor[], int tamanho, int numero_procurado);
*/

int ocorrencia (int vetor[], int tamanho, int numero_procurado) {

    if (tamanho < 0) {

        return 0;
    }

    if (vetor[tamanho] == numero_procurado) {

        return 1 + ocorrencia(vetor, tamanho - 1, numero_procurado);
    }

    return ocorrencia(vetor, tamanho - 1, numero_procurado);
}

int main () {

    //Contando as ocorrencias do vetor;

    int vetor[5] = {1, 2, 3, 4, 1};

    printf ("Numero de ocorrencias do numero 2: \n");
    printf ("%d\n", ocorrencia(vetor, 5 - 1, 2));

    return 0;
}