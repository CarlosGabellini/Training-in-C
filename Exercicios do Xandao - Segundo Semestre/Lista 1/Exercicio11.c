#include <stdio.h>

//Lembre-se que linhas = saídas, e colunas = entradas;

/*Respeitando as condições:

Sem entradas mas com saidas;
Sem saida mas com entrada;
Sem saida e sem entrada;

Verificar saidas: (0,0), (0,1), (0,2);
verificar entradas: (0,0), (1,0), (2,0);

verificar saidas: (1,0), (1,1), (1,2);
verificar entradas: (0,1), (1,1), (2, 1);


00 01 02
10 11 12
20 21 22y
*/

void verifica (int matriz[30][30], int n, int respostas[]) {

    int entradas = 0;
    int saidas = 0;
    int tamanho_das_respostas = 0;

    for (int linhas = 0; linhas < n; linhas++) {

        for (int colunas = 0; colunas < n; colunas++) {

            saidas += matriz[linhas][colunas];
            entradas += matriz[colunas][linhas];

            printf ("Saidas = linhas: %d, colunas: %d\t", linhas, colunas);
            printf ("Entradas = linhas: %d, colunas: %d\n", colunas, linhas);
        }

        //Indo pro if e else para atender as condições;

        //Devemos comparar o if e o else fora for mais interno para saber se os valores estão corretos;

        //Se fosse dentro do for mais interno ele faria um loop e já iria comparar;

        if (entradas == 0 && saidas > 0) {

            respostas[tamanho_das_respostas] = 1;

            tamanho_das_respostas++;
        }
            
        else if (saidas == 0 && entradas > 0) {

            respostas[tamanho_das_respostas] = 1;

            tamanho_das_respostas++;
        }

        else if (saidas == 0 && entradas == 0) {

            respostas[tamanho_das_respostas] = 1;

            tamanho_das_respostas++;
        }

        else {

            respostas[tamanho_das_respostas] = 0;

            tamanho_das_respostas++;
        }

        //Zerando saidas e entradas para comparar novos valores dentro do for mais interno;

        saidas = 0;
        entradas = 0;

        printf ("\n");
    }
}

int main () {

    int variavel_matriz = 0;
    int matriz_cidades[30][30];

    printf ("Digite o número de cidades: \n");
    scanf ("%d", &variavel_matriz);

    int respostas[variavel_matriz];

    for (int i = 0; i < variavel_matriz; i++) {

        for (int j = 0; j < variavel_matriz; j++) {

            printf ("Digite 0 para estrada bloqueada e 1 para livre.\n");
            scanf ("%d", &matriz_cidades[i][j]);
        }

        printf ("\n");
    }

    //Visualização da matriz;

    for (int k = 0; k < variavel_matriz; k++) {

        for (int l = 0; l < variavel_matriz; l++) {

            printf ("[%d]\t", matriz_cidades[k][l]);
        }

        printf ("\n");
    }

    printf ("\n");

    //Testando o exercicio para ver se ele está funcionando, aqui chamamos a função;

    verifica(matriz_cidades, variavel_matriz, respostas);

    //Verificando as respostas;

    printf ("\n\n");

    for (int controle = 0; controle < variavel_matriz; controle++) {

        printf ("Repostas da cidade %d aqui: %d\n", controle, respostas[controle]);
    }

    return 0;
}