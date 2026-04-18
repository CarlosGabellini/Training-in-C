#include <stdio.h>

//Fazendo uma funcao para comparar duas strings se elas sao iguais, eh uma funcao demasiada simples e nao cobre a maioria 
//dos casos, mas para aprender ate que eh uma boa forma;

int iguais (char *texto_a, char *texto_b) {

    int controle = 0;

    while (texto_a[controle] != '\n' && texto_b[controle] != '\n') {

        while (texto_a[controle] == texto_b[controle]) {

            if (texto_a[controle] == '\n') {
                return 1;
            }

            controle++;
        }

        controle++;
    }

    return 0;
}

int main () {

    char texto[100];
    char texto2[100];

    printf ("Digite um texto: \n");
    fgets (texto, 100, stdin);

    printf ("Digite outro texto: \n");
    fgets (texto2, 100, stdin);

    printf ("Eles sao iguais? \n");
    printf ("%d\n", iguais(texto, texto2));
    
    return 0;
}