#include <stdio.h>

int main () {

    float numero;
    float raiz = 1;

    //Raiz 1 serve para não conter lixo de memoria, escolhi o 1 por que provavelmente o 0 é bugado para esses casos.


    printf ("Digite um numero qualquer: \n");
    scanf ("%f", &numero);

    for (int i = 0; i < 20; i++) {

        raiz = (raiz + (numero / raiz)) / 2;

        //Formula para aproximação de raiz, onde o loop acontece 20 vezes para uma atual aproximação.
    }

    printf ("A raiz do numero digitado eh igual a: %.2f \n", raiz);

    return 0;

    //Fazer o teste de mesa desse programa aqui depois.
    //Fazer anotação de como fazer raiz em C sem importar nenhuma biblioteca.
}