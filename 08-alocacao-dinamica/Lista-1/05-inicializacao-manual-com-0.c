#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Fazer uma inicializacao com malloc colocando tudo em 0, o objetivo eh entender que com o malloc tem lixo de memoria;

const int GLOBAL = 5;

void inicializar(int *vetor) {

    for (int b = 0; b < GLOBAL; b++) {
        vetor[b] = 0;
    }
}

int main () {

    int *v1 = (int*) malloc(GLOBAL * sizeof(int));

    inicializar(v1);            //v1 aqui ja eh endereco;

    for (int b = 0; b < GLOBAL; b++) {
        printf("%d\n", v1[b]);
    }

    //Aqui entendemos o real preco de quando usamos calloc e o que devemos fazer;

    free(v1);

    return 0;
}