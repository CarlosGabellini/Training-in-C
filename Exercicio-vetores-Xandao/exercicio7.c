#include <stdio.h>

int main () {

    //Tenho que a fazer a união de 2 vetores e fazer com que fiquem em ordem crescente.

    int vetor [50];
    int vetor2 [50];
    int vetor3 [100];
    int i = 0;
    int j = 0;

    for (; i < 50; i++) {

        printf ("Digite um numero inteiro: \n");                        //Armazenando no Scanf tanto no primeiro for quanto no segundo.
        scanf ("%d", &vetor[i]);

        if (vetor[i] == -1) {
            break;
        }
    }
    
    for (; j < 50; j++) {

        printf ("Digite um outro numero inteiro: \n");
        scanf ("%d", &vetor2[j]);

        if (vetor2[j] == -1) {
            break;
        }
    }

    //Agora tenho que fazer a mescla e deixar em ordem crescente.

    int l = 0, k = 0, m = 0;                                        //Declarando variaveis de controle para o while.

    while (l < i && k < j) {                                        //Bem melhor fazer no while do que no for, não sabia que podia fazer esse truque.

        if (vetor[l] <= vetor2[k]) {

            vetor3[m] = vetor[l];
            m++;
            l++;
        }

        else {

            vetor3[m] = vetor2[k];
            m++;
            k++;
        }
    }

    //Vou prescisar de mais 2 whiles, pois se sobrou algo no vetor 3 eu presciso adicionar o que falta ou no vetor 1 ou no vetor 2.

    while (l < i) {

        vetor3[m] = vetor[j];
        l++;
        m++;
    }

    while (k < j) {

        vetor3[m] = vetor2[k];
        k++;
        m++;
    }

    //Pronto, agora todos os elementos estão colocados no vetor 3 na ordem crescente, assim não vai ter lixo de memoria nas variaveis.

    //Imprimindo o resultado.

    printf ("[");

    for (int b = 0; b < m; b++) {

        printf ("%d, ", vetor3[b]);
    }

    printf ("]");

    return 0;
}