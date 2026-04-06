#include <stdio.h>

int main () {

    //Problema complicado a vista, mas vamos tentar! 

    //Basicamente imprimir uma tabelinha 2x2 onde tenho que mostrar se os numeros são coprimos ou não somente usando 0 e 1.

    int v1[50];
    int digito;
    int resto;
    int n = 0;
    int acumulador;                                         //Para colocar os numeros dentro da tabela.

    printf ("Digite o tamanho do vetor para fazer a sequencia: \n");
    scanf ("%d", &digito);

    if (digito <= 0 || 50 < digito) {

        printf ("Tamanho do vetor invalido, tente outro numero! \n");
        return 1;
    }

    for (int i = 0; i < digito; i++) {

        printf ("digite um numero inteiro positivo: \n");
        scanf ("%d", &v1[i]);

        if (v1[i] < 1) {

            printf ("Numero invalido, ele eh menor que 1");
            return 1;
        }
    }
    
    printf ("\t");

    for (int c = 0; c < digito; c++) {

     printf ("v1[%d]\t", v1[c]);
    }

    printf ("\n");                  //Esses printfs servem para dar formato e estética a tabela.

    for (int d = 0; d < digito; d++) {

        printf ("v1[%d]\t", v1[d]);

        for (int e = 0; e < digito; e++) {

            acumulador = v1[d] * v1[e];
            printf ("%d\t", acumulador);
        }

        printf ("\n");
    }

    //Aqui consegui fazer o meu codigo e como ele funciona somente usando 0 e 1 para os coprimos.

    return 0;
}
