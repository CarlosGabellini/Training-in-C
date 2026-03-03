#include <stdio.h>

int main () {

    /*O problema 5 é:   Leia uma matriz N×N (2 ≤ N ≤ 10) composta apenas por 0 e 1.

    1 representa caminho livre; 0 representa bloqueio;

    Verifique se existe um caminho válido do canto superior esquerdo (0,0) até o canto inferior direito (N-1,N-1) movendo-se apenas para a direita ou para baixo.

    Saída:
    "CAMINHO EXISTE"
    ou "CAMINHO NAO EXISTE"

    Importante:
    Não usar recursão
    Resolver com lógica iterativa

    Dificuldade:
    Pensamento algorítmico
    Estado acumulado
    Muito acima do padrão da lista original*/

    int numero_input;
    
    printf ("Digite o tamanho da matriz: \n");
    scanf ("%d", &numero_input);

    int matriz[numero_input][numero_input];
    int estado[numero_input][numero_input];

    for (int i = 0; i < numero_input; i++) {

        for (int j = 0; j < numero_input; j++) {

            printf ("Digite 0 ou 1 para formar a matriz: \n");                                  //Considere o usuario obediente;
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Visualizando a matriz;

    for (int y = 0; y < numero_input; y++) {

        for (int z = 0; z < numero_input; z++) {

            printf ("%d\t", matriz[y][z]);
        }

        printf ("\n");
    }

    //Agora vem a parte onde eu presciso conseguir fazer esse desafio de forma logica;
    //A primeira coisa que devo fazer para o programa é uma otimização simples, se o primeiro elemento da matriz for 0 e o ultimo também
    //então não há caminho;

    if (matriz[0][0] == 0) {

        printf ("NAO EXISTE CAMINHO!\n");
        return 1;
    }

    for (int linha = 0; linha < numero_input; linha++) {

        for (int coluna = 0; coluna < numero_input; coluna++) {

            if (matriz[0][0] == 1) {

                estado[0][0] == matriz[0][0];
            }
                
            else if (linha == 0) {

                estado[linha][coluna] = matriz[linha][coluna - 1];
            }

            else if (coluna == 0) {

                estado[linha][coluna] = matriz[linha - 1][coluna];
            }


            printf ("%d\t", estado[linha][coluna]);
        }

        printf ("\n");
    }

    if (estado[numero_input - 1][numero_input - 1] == 1) {

        printf ("TEM CAMINHO!\n");
    }

    else {

        printf ("NAO HA CAMINHO!\n");
    }

    
    return 0;
}