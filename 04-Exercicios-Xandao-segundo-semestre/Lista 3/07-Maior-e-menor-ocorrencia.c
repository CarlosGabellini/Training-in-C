#include <stdio.h>
#include <stdlib.h>
#include <math.h>

//Fazer um vetor onde devemos comparar o numero com maior frequencia(F2) e o de menor frequencia(F1);

void frequencias(int *v, int size, int *f1, int *f2) {

    int *dados = (int*) calloc(size, sizeof(int));      //Inicializa um vetor com 0;
    int MenorFrequencia;
    int MaiorFrequencia;
    int contador = 0;

    for(int az = 0; az < size; az++) {

        for(int ay = 0; ay < size; ay++) {

            if(v[az] == v[ay] && az != ay) {
                contador++;
            }
        }
    }

    printf("Existem %d numeros repetidos.\n", contador);

    for(int a = 0; a < size; a++) {

        int analisado = v[a];

        for(int b = 0; b < size; b++) {

            if(analisado == v[b] && b != a) {
                dados[a] += 1;
            }
        }
    }

    //Agora podemos analisar o menor e maior dados;

    MenorFrequencia = dados[0];
    MaiorFrequencia = dados[0];         //Inicializando as variaveis aqui;

    //Partindo para a analise;

    for(int d = 1; d < size; d++) {
        
        if(MaiorFrequencia < dados[d]) {
            MaiorFrequencia = dados[d];
            *f2 = d;
        }

        if(dados[d] < MenorFrequencia) {
            MenorFrequencia = dados[d];
            *f1 = d;
        }
    }

    free(dados);
}

int main() {

    int vet[5] = {1, 2, 2, 1, 2};
    int indiceMenor;
    int indiceMaior;

    frequencias(vet, 5, &indiceMenor, &indiceMaior);

    printf("O numero que menos aparece esta na posicao %d\n", indiceMenor);
    printf("O numero que mais aparece esta no indice %d\n", indiceMaior);

    return 0;
}