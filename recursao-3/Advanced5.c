#include <stdio.h>

/*Exercicio feito para saber se um vetor é ordenado ou não (Ordem crescente).

int ordenado (int vetor[], int n);
*/

int ordenado (int vetor[], int tamanho) {

    if (tamanho < 2) {

        return 1;
    }

    //Colocando a condição de parada primeiro para não acessar indevidamente a memoria;

    return (vetor[tamanho - 2] <= vetor[tamanho - 1]) && ordenado(vetor, tamanho - 1);
}

int main () {

    int vetor[5] = {1, 2, 3, 4, 5};

    printf ("O vetor é ordenado? \n");
    printf ("%d\n", ordenado(vetor, 5));

    return 0;
}