#include <stdio.h>

//Fazer uma funcao que calcula quantas vogais existem em uma determinada string;

void contar_vogais (char *passagem_referencia, int *contador) {

    int controle = 0;

    while (passagem_referencia[controle] != '\0') {

        if (passagem_referencia[controle] == 'a') {
            (*contador)++;
        }

        if (passagem_referencia[controle] == 'e') {
            (*contador)++;
        }

        if (passagem_referencia[controle] == 'i') {
            (*contador)++;
        }

        if (passagem_referencia[controle] == 'o') {
            (*contador)++;
        }

        if (passagem_referencia[controle] == 'u') {
            (*contador)++;
        }

        //O while somente consegue verificar uma letra de cada vez em um tipo de string, nao tem como duas letrar ocupar o mesmo
        //espaco na memoria;

        controle++;
    }
}

int main () {

    char texto[100] = "Mamemdiuns thousands open delaporta!";
    char texto2[100] = "O rato roeu as botas do rei de roma!";
    int contador = 0;

    printf ("O texto digitado: %s\n", texto2);

    contar_vogais(texto2, &contador);
    printf ("O texto digitado possui: %d\n", contador);

    return 0;
}