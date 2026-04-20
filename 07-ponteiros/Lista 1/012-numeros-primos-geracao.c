#include <stdio.h>

//Fazendo um programa que gere 20 mil primos e aloque em um vetor usando ponteiros;

float raiz_quadrada (float numero_colocado) {

    float resultado = numero_colocado;
    
    for (int i = 0; i < 20; i++) {
        resultado = (1.0/2.0) * (resultado + (numero_colocado / resultado));
    }

    return resultado;
}

void gerar_primos (int *numero_colocado, int tamanho, int limite) {

    int controle;
    int posicao_vetor = 2;

    numero_colocado[0] = 2;
    numero_colocado[1] = 3;

    for (int i = 5; i <= limite; i += 2) {                  //Pra otimizar, nao prescisa testar pares, somente impares;

        controle = 2;
        float limite_raiz = raiz_quadrada(i);
        int eh_primo = 1;

        while (controle <= limite_raiz) {                   //Pronto, a outra funcao nao vai ficar prescisando ser chamada.

            if (i % controle == 0) {
                eh_primo = 0;
                break;
            }

            controle++;
        }

        if (eh_primo == 1) {

            if (posicao_vetor < tamanho) {

                numero_colocado[posicao_vetor] = i;
                posicao_vetor++;
            }
        }
    }
}

int main () {

    const short int tamanho = 20000;
    int vetor[tamanho];
    int *ponteiro_vetor = vetor;

    gerar_primos(ponteiro_vetor, tamanho, 2000000);

    printf ("O numero primo na posicao 2004 eh: %d\n", ponteiro_vetor[2004]);

    return 0;
}