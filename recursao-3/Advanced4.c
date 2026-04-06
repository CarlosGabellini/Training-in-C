#include <stdio.h>

/*Fazer uma soma de digitos com restrição, onde somente pode somar os numeros pares, um exemplo:

numero = 1234;

soma = 2 + 4 = 6;

numero_2 = 1357;

soma = 0;
*/

int somar_pares (int numero) {

    if (numero <= 0) {

        return 0;
    } 

    if (numero % 2 == 0) {

        return (numero % 10) + somar_pares(numero / 10);
    }

    return somar_pares(numero / 10);
}

int main () {

    printf ("Pares somados do numero: %d\n", somar_pares(1357));

    return 0;
}