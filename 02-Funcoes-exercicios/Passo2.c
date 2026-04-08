#include <stdio.h>
#include <stdlib.h>

//Objetivo aqui é calcular o maior de 3 numeros digitados pelo usuario e treinar funções;

int maior_de_3 (int numero1, int numero2, int numero3) {    //Basicamente essas variaveis são feitas para saber os 3 maiores numeros;

    if (numero1 > numero2 && numero1 > numero3)
        printf ("%d eh maior!\n\n", numero1);

    else if (numero2 > numero1 && numero2 > numero3)
        printf ("%d eh maior!\n\n", numero2);

    else if (numero3 > numero1 && numero3 > numero2)
        printf ("%d eh maior!\n\n", numero3);
    
    else 
        printf ("Numero invalido ou todos são iguais!\n");

    return 0;
}

void struct_funny () {

    printf ("Bem vindo ao programa!\n");

    for (int i = 0; i < 50; i++) 
        printf ("_");

    printf ("\n\n");
}

int main () {

    int numero_digitado[3];
    struct_funny();

    for (int i = 0; i < 3; i++) {

        printf ("Digite um numero: \n");
        scanf ("%d", &numero_digitado[i]);
    }

    printf ("\n\n");

    maior_de_3(numero_digitado[0], numero_digitado[1], numero_digitado[2]);

    return 0;
}