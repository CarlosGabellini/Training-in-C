#include <stdio.h>

void retornar_triplo (short int *variavel) {

    *variavel *= 3;
    *variavel *= 2;
}

int main () {

    short int a1 = 10;
    short int *ponteiro_de_a1 = &a1;

    retornar_triplo(ponteiro_de_a1);                    //Aqui nao pode ter o & comercial, por que senao vamos alterar o 
                                                        //conteudo do ponteiro, e nao realmente quem importa, que seria o a1.

    printf ("O valor de a1 sera de: %hd\n", a1);

    return 0;
}