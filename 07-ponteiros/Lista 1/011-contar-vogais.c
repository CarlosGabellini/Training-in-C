#include <stdio.h>

//Fazer uma funcao que calcula quantas vogais existem em uma determinada string;

int contar_vogais (char *passagem_referencia) {

    int controle = 0;
    int contador = 0;

    while (passagem_referencia[controle] != '\0') {

        if (passagem_referencia[controle] == 'a') {
            contador++;
        }

        if (passagem_referencia[controle] == 'e') {
            contador++;
        }

        if (passagem_referencia[controle] == 'i') {
            contador++;
        }

        if (passagem_referencia[controle] == 'o') {
            contador++;
        }

        if (passagem_referencia[controle] == 'u') {
            contador++;
        }

        //O while somente consegue verificar uma letra de cada vez em um tipo de string, nao tem como duas letrar ocupar o mesmo
        //espaco na memoria;

        controle++;
    }

    return contador;
}

int main () {

    char texto[100] = "Mamemdiuns thousands open delaporta!";
    char texto2[100] = "O rato roeu as botas do rei de roma!";
    int contador = 0;

    printf ("O texto digitado: %s\n", texto);
    printf ("O texto digitado possui: %d vogais\n", contar_vogais(texto));

    return 0;
}