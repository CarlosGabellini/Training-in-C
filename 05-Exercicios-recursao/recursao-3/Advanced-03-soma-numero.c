#include <stdio.h>

/*Soma dos primeiros n números naturais;

Implemente uma função recursiva que calcule:

S (n) =1+2+3+...+n;
S (n) =1+2+3+...+n;
*/

int soma_numero (int numero) {

    if (numero <= 0) {

        return 0;
    }

    return numero + soma_numero(numero - 1);
}

int main () {

    printf ("O numero %d depois da soma eh: %d\n", 10, soma_numero(10));

    return 0;
}