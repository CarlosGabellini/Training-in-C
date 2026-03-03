#include <stdio.h>

int main () {

    //Escreva um programa que leia um vetor de até 50 numeros reais e calcule o desvio padrão destes valores.

    float vetor1 [50];
    float media_comeco = 0;
    float media_final;
    float parte_sigma = 0;
    float desvio_padrao = 1;
  
    
    for (int i = 0; i < 50; i++) {                      //Quero testar o programa logo, imagina ficar digitando 50 numeros do usuario e dar errado?

        vetor1[i] = i;                                  //Aqui estarei atribuindo os valores de i para todos os vetores do espaço 0 ao 49.
    }

    for (int j = 0; j < 50; j++) {

        media_comeco += vetor1[j];
    }

    media_final = media_comeco / 50;


    //Implementando agora a raiz quadrada e teste final para calcular o desvio padrao de um numero.
    //Fazendo o método Héron.

    for (int l = 0; l < 50; l++) {

        parte_sigma += ((vetor1[l] - media_final) * (vetor1[l] - media_final));

        desvio_padrao = (desvio_padrao + ((0.02 *  parte_sigma) / desvio_padrao)) / 2;    //Anotação, em C, se tu quiser um numero de ponto flutuante NÃO

        //FAÇA DIVISÃO DE NUMEROS INTEIROS PORRA! esse 0.02 me fudeu muito, o programa todo certo mas resultado errado por que (1 / 50 - 1) não é igual.

    }

    printf ("O desvio padrão dos vetores será: %.2f \n", desvio_padrao);

    return 0;
}