#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Fazer uma função que retorna a media onde *i vai retornar o elemento mais próximo da média;

double media(double *vet, int size, int *i) {

    double media = 0;
    double menor_diferenca;

    for(int a = 0; a < size; a++) {
        media += vet[a];
    }

    media /= size;

    //Verificação do valor mais próximo da média;

    //Comecamos com o elemento 0 por que assumimos um valor de diferença;
    menor_diferenca = vet[0] - media;

    //Se menor_diferenca for negativo, colocamos positivo por que queremos valor absoluto;
    if(menor_diferenca < 0) {
        menor_diferenca = menor_diferenca * -1;
    }

    for(int b = 1; b < size; b++) {

        double diferenca = vet[b] - media;

        if(diferenca < 0) {
            diferenca = diferenca * -1;
        }

        if(diferenca < menor_diferenca) {
            menor_diferenca = diferenca;
            *i = b;
        }
    }


    return media;
}

int main() {

    double v1[10] = {21, 54, 65, 76, 13, 14, 18, 59, 43, 24};
    int MaisProximo;

    printf("Media do vetor: %.2f\n", media(v1, 10, &MaisProximo));
    printf("O elemento mais proximo na posicao: %d\n", MaisProximo);

    return 0;
}