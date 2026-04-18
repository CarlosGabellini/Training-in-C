#include <stdio.h>

int contador_caracteres (char *texto, int tamanho) {

    int controle = 0;
    int contador = 0;

    while (texto[controle] != '\n' && controle < tamanho) {

        contador++;
        controle++;
    }

    return contador;
}

int main () {

    char texto[100];

    printf ("Digite o texto que quer implementar: \n");
    fgets (texto, 100, stdin);

    printf ("Seu texto possui %d caracteres.\n", contador_caracteres(texto, 100));
    
    return 0;
}