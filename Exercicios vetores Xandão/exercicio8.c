#include <stdio.h>

int main () {

    int digito;
    float vetor [50];
    float vetor2 [50];
    float soma = 0;                                                                               //Acumula dentro da variavel soma o resultado.

    printf ("Digite o espaço dos vetores como no máximo 50: \n");
    scanf("%d", &digito);

    if (digito <= 0 || 50 < digito) {

        printf ("Numero invalido! digite outro! \n");
        return 0;
    }

    //O if serve para o numero ser entre 0 a 50, tirando disso o problema é invalidado.

    //Dois vetores do mesmo tamanho n lidos no teclado.

    for (int i = 0; i < digito; i++) {

       printf ("Digite um numero para o vetor 1: \n");
       scanf ("%f", &vetor[i]);
    }

    //Uma sequencia simples de i e i + 1.

    printf ("\n");

    for (int j = 0; j < digito; j++) {

        printf ("Digite um numero para o vetor 2: \n");
        scanf ("%f", &vetor2[j]);
    }

    //Agora eu tenho que fazer com que cada espaço exato de vetor faça a multiplicação com vetor 2 e somar tudo.

    for (int l = 0; l < digito; l++) {

        soma += vetor[l] * vetor2[l];
    }

    printf ("O produto interno dos dois vetores sera: %.2f \n", soma);
 
    return 0;
}