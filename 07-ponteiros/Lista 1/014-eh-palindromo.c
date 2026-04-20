#include <stdio.h>
#include <stdlib.h>

int eh_palindromo (char *texto, int tamanho) {

    int controle = 0;
    int comparacao_de_tras = (tamanho - 1);
    int contador = 0;                   //Vamos conseguir verificar o palidromo caso contador tenha o mesmo numero que 
                                    //o tamanho;

    while (texto[controle] != '\0') {

        if (texto[controle] == texto[comparacao_de_tras]) {
            contador++;
        }
        
        controle++;
        comparacao_de_tras--;
    }

    if (contador == tamanho) {
        return 1;
    }

    return 0;
}

int main () {

    char texto[20] = "ovo";
    char texto_exemplo2[20] = "ava";
    char texto_3[20] = "natan";

    printf ("Eh palidromo? \n");
    printf ("%d\n", eh_palindromo(texto_3, 5));

    return 0;
}