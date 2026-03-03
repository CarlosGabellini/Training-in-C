#include <stdio.h>

int main () {

    /*O desafio do chat gpt consiste em verificar se uma determinada matriz entre 2x2 a 10x10 eh anti simetrica ou não, dada pela formula
    
                                                    Matriz [i][j] = -Matriz [j][i];

    Então o programa deve avaliar caso a matriz seja simetrica ou anti simetrica;
    */

    int digito;                        //O usuario prescisa digitar qual é o tamanho da matriz que ele quer, que deve ser entre 2x2 <= n <= 10x10
    int simetria = 0;                  //Variavel contadora onde dado um numero de uma determinada comparação entre as matrizes, verifica se é anti.
    int regra = 0;                     //Compararemos a variavel regra com a variavel simetria, a simetria deve dar o mesmo que a regra para ser anti.
                                       //A regra está sendo vista na linha 59;

    printf ("Digite o tamanho da matriz: \n");
    scanf ("%d", &digito);

    //Forçar o usuario a colocar entre 2 a 10;

    if (digito < 2 || digito > 10) {

        printf ("Os elementos da matriz são muito grandes ou pequenos, coloque entre 2 a 10. \n");
        return 1;
    }

    int matriz[digito][digito];                             //Até aqui tudo normal, infelizmente não tem como colocar a declaração de matriz no inicio;

    for (int i = 0; i < digito; i++) {

        for (int j = 0; j < digito; j++) {

            printf ("Digite um elemento da matriz: \n");
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Agora tenho que fazer a analise nesses 2 fors que tem;

    for (int k = 0; k < digito; k++) {

        for (int l = 0; l < digito; l++) {

            if (matriz[k][l] == -1 * matriz[l][k] && k != l && k < l) {                     //Meu deus, era só fazer essas 3 condições, o for estava contando 2 vezes
                                                                                            //Com a regra if (matriz[k][l] == -1 * matriz[l][k] && k != l), prescisava 
                simetria++;                                                                 //Da terceira condição;
            }
        }
    }

    //Fazendo a tabela pra visualização melhor e ver o que tem de errado;

    for (int x = 0; x < digito; x++) {

        for (int z = 0; z < digito; z++) {

            printf ("%d \t", matriz[x][z]);
        }

        printf ("\n");                                                                      //Coloque o \n no primeiro for para quebrar a coluna;

    }

    //Fazendo uma operação matematica simples pra ver se os numeros da simetria batem com a regra;

    regra = (digito * (digito - 1)) / 2;                        //Aqui está a equação para comparar ambos;

    if (regra == simetria) {

        printf ("Ela é anti-simétrica.\n");
    }

    else {

        printf ("Ela não é anti-simétrica.\n");
    }

    printf ("Valor da simetria: %d \n", simetria);
    printf ("Valor da regra: %d \n", regra);

    return 0;
}