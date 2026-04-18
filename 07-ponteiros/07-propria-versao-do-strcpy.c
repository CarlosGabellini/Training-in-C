#include <stdio.h>
#include <string.h>

void copia_string (char *texto_desejado, char *texto_copiado) {

    int controle = 0;

    while (texto_copiado[controle] != '\0') {

        texto_desejado[controle] = texto_copiado[controle];
        controle++;
    }
}

int main () {

    char texto[200];
    char texto_para_copiar[200];

    printf ("Digite o texto que quer escrever: \n");
    fgets (texto, 200, stdin);

    copia_string(texto_para_copiar, texto);

    printf ("O texto copiado abaixo: \n");
    printf ("%s\n", texto_para_copiar);

    return 0;
}