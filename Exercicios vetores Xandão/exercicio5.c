#include <stdio.h>

int main () {

    //Duas sequencias de numeros inteiros distintos que vão até 50, o programa deve imprimir um terceiro vetor com a interseccção dos 2 vetores.
    //Reune matematica discreta e programação.

    int vetor [50];
    int vetor2 [50];
    int vetor3 [50];
    int i = 0;
    int j = 0;
    int k = 0;
    
    for (i; i < 50; i++) {

        vetor[i] = 2 * i; 
    }

    for (j; j < 50; j++) {

        vetor2[j] = 3 * j;
    }

    //Resetando os valores i e o j, se não eles já começam em 50 aqui, tenho que me lembrar disso.

    for (i = 0; i < 50; i++) {

        for (j = 0; j < 50; j++) {

            if (vetor[i] == vetor2[j]) {

                vetor3[k] = vetor[i];
                printf ("Os valores do Terceiro vetor resultantes da interssecção do primeiro e segundo eh: %d na posição %d \n", vetor3[k], k);
                k++;

                //Caótico, se eu colocar o k++ em cima do vetor3, ele começa em 1, se for embaixo do vetor3 ele dá um bug engraçado, e se for embaixo do
                //printf ele fica certo! Muito engraçado!
            }
        }
    }

    return 0;
}

//Aprendizado 1: Não declarar vetores dentro de ifs ou nada parecido, nem no meio do codigo, coloque ele em cima corretamente.

//Aprendizado 2: Se tu declarar a variavel i e rodar em um loop, ela vai terminar em 49, lembre-se sempre de resetar ela.

//Se eu voltar pra ver esse problema, eu posso refinar ele ainda mais onde adiciono um Scanf e printf pro usuario digitar os valores que ele quiser.