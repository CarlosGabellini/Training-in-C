    #include <stdio.h>

    /*Escreva uma função que recebe dois números inteiros positivos a e b por parâmetro e
    determina se eles são amigos ou não, devolvendo 1 caso sejam amigos, e 0 caso contrário.

    Dois números são amigos se cada número é igual à soma dos divisores próprios do outro
    (os divisores próprios de um número m são os divisores estritamente menores que m).
    
    Por exemplo, os divisores próprios de 220 são 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110, cuja soma
    é 284; e os divisores próprios de 284 são 1, 2, 4, 71 e 142, cuja soma é 220. Logo, 220 e
    284 são números amigos. O protótipo da função deve ser:

    int amigos(int a, int b);

    para exemplificar melhor:

    Divisores de 220:
    1, 2, 4, 5, 10, 11, 20, 22, 44, 55 e 110

    Somando isso resulta em 284;

    Divisores de 284:

    1, 2, 4, 71 e 142

    isso resulta em 220.
    */

    int amigos (int numero, int numero2) {

        int soma = 1;
        int soma2 = 1;

        for (int i = 2; i < (numero / 2) + 1; i++) {

            if (numero % i == 0) {
                
                soma += i;
            }
        }

        for (int j = 2; j < (numero2 / 2) + 1; j++) {

            if (numero2 % j == 0) {

                soma2 += j;
            }
        }

        if (soma == numero2 && soma2 == numero) {

            return 1;
        }

        return 0;
    }

    int main () {

        int numero_input = 0;
        int numero_input2 = 0;

        printf ("Digite um numero: \n");
        scanf ("%d", &numero_input);

        printf ("Digite outro numero: \n");
        scanf ("%d", &numero_input2);

        printf ("São amigos? \n");

        if (amigos(numero_input, numero_input2) == 1) {

            printf ("São amigos!\n");
        }

        else {

            printf ("Não são amigos!\n");
        }

        return 0;
    }
