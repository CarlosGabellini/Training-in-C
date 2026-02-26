#include <stdio.h>

//O exercicio aqui é calcular a media de 5 numeros e aprender a utilizar arrays dentro de funções em C.
//Não prescisamos declarar o tamanho do array em C caso somente tenha um unico array, mas se tiver 2 ou 3 arrays a gente só não declara
//o primeiro;

float calculo_media (float v1[], int tamanho) {                   //Indica o tamanho do vetor e seus elementos dentro;

    float media = 0;

    for (int i = 0; i < tamanho; i++) {

        media += v1[i];
    }

    media /= tamanho;

    return media;    
}

int main () {

    float vetor[5];

    for (int i = 0; i < 5; i++) {

        printf ("Digite um numero: \n");
        scanf ("%f", &vetor[i]);
    }

    printf ("A media deste vetor sera de: %.2f\n", calculo_media(vetor, 5));

    return 0;
}