#include <stdio.h>
#include <stdint.h>

//O objetivo aqui eh criar uma funcao que remove os espacos da string;

void remover_espacos (char *texto) {

    int16_t controle = 0;
    int16_t controle_if = 0;

    while (texto[controle] != '\0') {

        if (texto[controle] != ' ') {

            texto[controle_if] = texto[controle];           //Aqui  eh o coracao, onde sobrescreevemos o vetor original
            controle_if++;                              //e retiramos os espacos da string;
        }

        controle++;
    }
}

int main () {

    char texto[200] = "Mamemnidusmn ratnas reqds brutralis eqeenmlidin!";
    char texto2[200] = "Abra a porta do carro";

    remover_espacos(texto2);
    printf ("O texto dado aparece como: %s\n", texto2);

    return 0;
}