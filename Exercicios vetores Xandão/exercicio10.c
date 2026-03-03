#include <stdio.h>

int main () {

    //Problema complicado a vista, mas vamos tentar! 

    //Basicamente imprimir uma tabelinha 2x2 onde tenho que mostrar se os numeros são coprimos ou não somente usando 0 e 1.

    int v1[50];
    int digito;
    int resto;
    int a, b;                                                       //Variaveis importantes pra guardar o valor de v1

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

    for (int k = 0; k < digito; k++) {

        printf ("v1[%d]\t", v1[k]);

        for (int j = 0; j < digito; j++) {

            a = v1[k];
            b = v1[j];

            while (b != 0) {

                resto = a % b;

                a = b;

                b = resto;
            }

            if (a == 1) {

                printf ("1\t");
            }

            else {

                printf ("0\t");
            }
        }

        printf ("\n");
    }

    //Abracadabra.

    return 0;
}