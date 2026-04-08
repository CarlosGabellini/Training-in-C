#include <stdio.h>

int main () {

    //Fazer uma tabela com os vetores do 2 ao 10 e mostrar ela no terminal;

    int formato = 1;
    int formato2 = 1;
    int tabela [20][20];

    //Agora vamos tentar fazer ela aos poucos;

    for (int y = 0; y < 20; y++) {

        for (int z = 0; z < 20; z++) {

            tabela[y][z] = 0;
        }
    }

    //Zerando todos os resultados da tabela para excluir o lixo de memoria;

    printf ("\t");

    for (int i = 0; i < 20; i++) {

        printf ("[%d]\t", formato++);
    }

    printf ("\n");

    //Dando formato para a tabela;

    for (int j = 0; j < 20; j++) {

        printf ("[%d]", formato2++);  

        for (int k = 0; k < 20; k++) {

            tabela[j][k] = (j + 1) * (k + 1); 

            printf ("\t%d", tabela[j][k]);
        }

        printf ("\n");
    }

    //Aqui nesse for é onde a magica acontece;

    return 0;
}