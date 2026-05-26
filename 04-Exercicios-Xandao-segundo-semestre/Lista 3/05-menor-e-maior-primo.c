#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

//Digitar um numero n, e a partir desse numero encontrar o maior numero primo < n
//E tambem devemos encontrar o menor numero primo > n

int verificarPrimo(int numero) {

    int controle = 2;

    while(controle < numero) {
        if(numero % controle == 0) {
            return 0;
        }

        controle++;
    }

    return 1;
}

int primo(int n, int *p1, int *p2) {

    int Wcontrol = 2;                       //Wcontrol == While control
    int guardarMaior;
    int guardarMenor;
    int AcharPrimo = 0;
    int cpy = n;

    while(Wcontrol < n) {

        int verificar = verificarPrimo(Wcontrol);

        if(verificar == 1) {
            guardarMaior = Wcontrol;
        }

        Wcontrol++;
    }

    *p1 = guardarMaior;

    //Achado o maior numero antes do n, agora vamos para o contrário;

    while(AcharPrimo == 0) {

        AcharPrimo = verificarPrimo(cpy);

        if(AcharPrimo == 1) {
            guardarMenor = cpy;
        }

        cpy++;
    }

    *p2 = guardarMenor;

    return 1;
}

int main() {

    int number = 37555;
    int p1;
    int p2;
    int retorno = primo(number, &p1, &p2);    //Aprendi uma lição hoje, não faça o codigo comentado abaixo;

    //printf("O retorno: %d\nMaior primo antes de %d eh %d\n", primo(number, &p1), number, p1);
    //O compilador nao tem ordem de execução, então pode dar errado;

    printf("O retorno: %d\nMaior primo antes de %d eh %d\n", retorno, number, p1);
    printf("Menor primo DEPOIS de %d eh %d\n", number, p2);
    
    return 0;
}