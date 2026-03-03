#include <stdio.h>

int main () {

    /*Basicamente o usuario vai digitar o tamanho da sequencia em um vetor e depois ele mesmo vai escrever uma sequencia, então ele tem que digitar 
    um numero na qual 2 numeros do vetor multiplicados dão esse numero, se não achar o programa deve informar ele.
    */


    int vetor[50];
    int entrada;
    int numero_aleatorio;
    int multiplicacao;                                                              //Variavel armazenada para saber a multiplicacao dos dois vetores.

    printf ("Digite o tamanho da sequencia para o vetor entre 0 a 50: \n");
    scanf ("%d", &entrada);

    if (entrada <= 0 || 50 < entrada) {

        printf ("Numero invalido! digite outro! \n");
        return 0;
    }

    //Depois do if, temos o for onde o usuario coloca os numeros que ele quer.

    for (int i = 0; i < entrada; i++) {

        printf ("Digite um numero inteiro: \n");
        scanf ("%d", &vetor[i]);
    }

    printf ("Digite um numero na qual 2 numeros do vetor multiplicado dão esse numero: \n");
    scanf ("%d", &numero_aleatorio);

    for (int k = 0; k < entrada; k++) {

        for (int l = 0; l < entrada; l++) {

            multiplicacao = vetor[k] * vetor[l];                             //O segundo loop vai percorrer tudo até achar algum junto com primeiro.

            if (multiplicacao == numero_aleatorio) {

                printf ("No vetor os numeros %d e %d quando multiplicados formam: %d \n", vetor[k], vetor[l], numero_aleatorio);
                return 0;
            }
        }
    }

    if (multiplicacao != numero_aleatorio) {

        printf ("Não foram encontrados numeros que quando multiplicados formam o numero digitado");
    }
      
    return 0;
}