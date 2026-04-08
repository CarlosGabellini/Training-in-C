#include <stdio.h>

/*Fazer uma soma de subconjuntos a partir de um vetor dado na matriz, como no exemplo:

vetor[5] = {1, 2, 3, 4, 5};

O alvo é o numero 7, logo:

3 + 4 = 7;

Deve retornar 1 caso exista e o 0 para falso.
*/

int existe_subjconjunto (int v[], int tamanho, int indice, int alvo) {

    int incluir = 0;
    int nao_incluir = 0;

    //Primeiro caso base:

    if (alvo == 0) {

        return 1;
    }

    if (indice == tamanho) {

        return 0;
    }

    incluir = existe_subjconjunto(v, tamanho, indice + 1, alvo - v[indice]);
    nao_incluir = existe_subjconjunto(v, tamanho, indice + 1, alvo);

    return incluir || nao_incluir;
}

int main () {

    int vetor[5] = {1, 2, 3, 4, 5};

    printf ("Existe o %d no vetor? %d\n", 7, existe_subjconjunto(vetor, 5, 0, 7));

    return 0;
}