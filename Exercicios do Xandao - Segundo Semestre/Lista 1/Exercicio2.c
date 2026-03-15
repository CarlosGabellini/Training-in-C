    #include <stdio.h>

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