#include <stdio.h>          //02/12/2025

int main () {

    //Mesma coisa que o exercicio 5, só muda que ao invés de fazer a intersecção fazemos a união dos numeros

    int vetor [50];
    int vetor2 [50];
    int vetor3 [100];
    int i = 0;
    int j = 0;
    int k = 50;                              //Variavel de controle do vetor 3
 
    //Preenchendo os valores para o primeiro vetor

    for (i; i < 50; i++){

        vetor[i] = i * 2;
    }

    //Preenchendo os valores para o segundo vetor

    for (j; j < 50; j++) {

        vetor2[j] = j * 3;
    }

    //Basicamente só presciso fazer todos os elementos do primeiro vetor no terceiro, ai depois eu excluo e coloco os do segundo

    for (i = 0; i < 50; i++) {

        vetor3[i] = vetor[i];
    }

    //Aqui o filho chora sem a mãe ver, é a partir daqui que eu tenho que fazer meu codigo funcionar


    for (i = 0; i < 50; i++) {

        int indicador = 0;                  //Muito bom usar isso para adquirir dois caminhos opostos, isso evita ambiguidade.

        for (j = 0; j < 50; j++) {

            if (vetor2[i] == vetor3[j]) {

                indicador = 1;
                break;
            }
        } 

        if (indicador == 0) {

            vetor3[k] = vetor2[i];
            k++;
        }
    }

    //Se eu eliminar os elementos interseccionados de 1 com o 2, e só deixar puro os elementos de 1, isso não seria uma forma de fazer 
    //adicionar todos os conjuntos de dois sem numeros repetidos?

    printf ("[");

    for (j = 0; j < k; j++) {

        printf ("%d \t", vetor3[j]);
    }

    printf ("]");


    //Entenda o código, não faça simplesmente por fazer, lembre-se disso

    return 0;
}