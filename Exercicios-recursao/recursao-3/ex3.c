#include <stdio.h>

//Verificar se um grupo de vetores é um palindromo;

int palindromo (int vetor[], int inicio, int fim) {

    int comparacao_inicio = vetor[inicio];
    int comparacao_fim = vetor[fim];

    if (inicio >= fim) {
        return 1;
    }

    if (comparacao_inicio == comparacao_fim) {

        return palindromo(vetor, inicio + 1, fim - 1);
    }

    else {

        return 0;
    }
}

int main () {

    int vetor[5] = {1, 2, 3, 2, 1};

    printf ("Eh palindromo? \n");
    printf ("%d\n", palindromo(vetor, 0, 4));

    return 0;
}