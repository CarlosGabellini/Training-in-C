#include <stdio.h>

int main () {

    int numero;
    int numero2;
    int resto;


    printf ("Digite um numero inteiro positivo: \n");
    scanf ("%d", &numero);

    if (numero <= 0) {

        printf ("Numero invalido! \n");
    }

    printf ("Digite um outro numero inteiro positivo: \n");
    scanf ("%d", &numero2);

    if (numero2 <= 0) {

        printf ("Numero invalido! \n");
    }

    //Agora tenho que saber se esse dois numeros são coprimos ou não, ja armazenei esse dois numeros dentro uma variavel.

        do {

            resto = numero % numero2;

            numero = numero2;

            numero2 = resto;

        } while (resto != 0);


    if (numero == 1) {

        printf ("O numero eh coprimo! \n");
    }

    else {

        printf ("O numero não eh coprimo! \n");
    }

    return 0;
}