#include <stdio.h>

/*Faça um fatorial quádruplo de N usando recursão, onde o fatorial se dá por:

(2N)!
______

N!
*/

int fatorial_quadruplo (int numero, int contador) { 

    if (numero == 0) {
        
        return 1;
    }

    return ((numero * 2) + (contador)) * fatorial_quadruplo(numero - 1, contador + 1);
}

int main () {

    printf ("Fatorial quadruplo de 6 eh: %d\n", fatorial_quadruplo(6, 0));

    return 0;
}