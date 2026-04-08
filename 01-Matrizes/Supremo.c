#include <stdio.h>

int main () {

    /*Fazendo o exercicio supremo agora:
    
    1 1 0 0 0
    0 1 0 1 1
    0 0 0 1 0
    1 0 0 1 1
    1 1 0 0 0

    Achar o maior bloco de 1 bit conectado pela direita, esquerda, cima e baixo (diagonal não conta) e fazer permanecer o maior bloco:

    Maior bloco (5);

    0 0 0 0 0
    0 0 0 1 1
    0 0 0 1 0
    0 0 0 1 1
    0 0 0 0 0

    Somente posso criar matrizes auxiliares e não posso usar break para encerrar as buscas;
    */

    int numero_input;
    int maior_bloco = 0;                                            //Analisa qual é o maior bloco;

    printf ("Digite um numero que sera o tamanho da matriz: \n");
    scanf ("%d", &numero_input);

    int matriz[numero_input][numero_input];                         //Fazendo o tamanho da matriz com o numero digitado pelo usuario;
    int matriz_auxiliar[numero_input][numero_input];

    int fila_linha[numero_input * numero_input];                    //Se a matriz for composta somente de 1, este tem que ser o tamanho maximo;
    int fila_coluna[numero_input * numero_input];                   //Mesma coisa para a coluna;

    int maior_linha[numero_input * numero_input];                   //Variavel importante para registrar a maior_linha.
    int maior_coluna[numero_input * numero_input];                  //Mesma coisa para a variavel coluna.

    for (int i = 0; i < numero_input; i++) {

        for (int j = 0; j < numero_input; j++) {

            printf ("Digite 0 ou 1 para formar os blocos: \n");
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Visualizando a matriz;

    for (int y = 0; y < numero_input; y++) {

        for (int z = 0; z < numero_input; z++) {

            matriz_auxiliar[y][z] = 0;                          //Zerando os elementos da matriz auxiliar;
            printf ("%d\t", matriz[y][z]);
        }

        printf ("\n");
    }

    //Bem, é aqui que devo começar a fazer o meu programa e como ele deve funcionar;

    for (int linha = 0; linha < numero_input; linha++) {

        for (int coluna = 0; coluna < numero_input; coluna++) {

            if (matriz[linha][coluna] == 1 && matriz_auxiliar[linha][coluna] == 0) {

                //Variaveis que sempre são reutilizadas no codigo assim que o if acabar;

                int inicio = 0;                             //Variavel temporaria para o BFS (Busca em largura) semelhante a uma arvore;
                int fim = 0;
                int contador_bloco = 0;

                fila_linha[fim] = linha;                    //A primeira linha e coluna encontrada a gente utiliza o fim++ por que vai encontrar os conectados;
                fila_coluna[fim] = coluna;
                fim++;
                matriz_auxiliar[linha][coluna] = 1;
                contador_bloco++;
                
                while (inicio < fim) {

                    int atual_linha = fila_linha[inicio];                   //Variavel para saber se na direita, esquerda, cima e baixo vai ter elemento;
                    int atual_coluna = fila_coluna[inicio];

                    //atual_linha e atual_coluna representam a celula em que eu estou explorando;

                    if ((atual_linha - 1 >= 0) && (matriz[atual_linha - 1][atual_coluna] == 1 && matriz_auxiliar[atual_linha - 1][atual_coluna] == 0)) {
                        
                        //O ultimo && serve para não ter indice menor que 0, se não acessa indice negativo;

                        matriz_auxiliar[atual_linha - 1][atual_coluna] = 1;

                        fila_linha[fim] = atual_linha - 1;                           //Bem necessario guardar tanto as posições fila linha e coluna;
                        fila_coluna[fim] = atual_coluna; 
                        contador_bloco++;
                        fim++;
                    }

                    if ((atual_linha + 1 < numero_input) && (matriz[atual_linha + 1][atual_coluna] == 1 && matriz_auxiliar[atual_linha + 1][atual_coluna] == 0)) {  

                        matriz_auxiliar[atual_linha + 1][atual_coluna] = 1;

                        fila_linha[fim] = atual_linha + 1;
                        fila_coluna[fim] = atual_coluna;
                        contador_bloco++;
                        fim++;
                    }

                    if ((atual_coluna - 1 >= 0) && (matriz[atual_linha][atual_coluna - 1] == 1 && matriz_auxiliar[atual_linha][atual_coluna - 1] == 0)) {  

                        matriz_auxiliar[atual_linha][atual_coluna - 1] = 1;

                        fila_linha[fim] = atual_linha;
                        fila_coluna[fim] = atual_coluna - 1;
                        contador_bloco++;
                        fim++;
                    }

                    if ((atual_coluna + 1 < numero_input) && (matriz[atual_linha][atual_coluna + 1] == 1 && matriz_auxiliar[atual_linha][atual_coluna + 1] == 0)) {  

                        matriz_auxiliar[atual_linha][atual_coluna + 1] = 1;

                        fila_linha[fim] = atual_linha;
                        fila_coluna[fim] = atual_coluna + 1;
                        contador_bloco++;
                        fim++;
                    }

                    //Tudo aqui deve ser if por que cada caso é independente entre si, se eu colocar else if ou else, as condições nunca serão atendidas;

                    inicio++;
                }

                //Aqui usamos este if para registrar o bloco de maior linha e maior coluna;

                if (contador_bloco > maior_bloco) {

                    maior_bloco = contador_bloco;

                    for (int i = 0; i < contador_bloco; i++) {

                        maior_linha[i] = fila_linha[i];
                        maior_coluna[i] = fila_coluna[i];

                        //Assim que encontramos um bloco maior, sobrescrevemos aqui;
                    }

                    //Fim do maior if aqui;
                }

                //Depois que acaba este if voltamos ao for normal até que tenhamos outro bloco de 1 não visitado;
            }
        }
    }

    //Terminamos o for cabuloso para saber o maior bloco;

    for (int y = 0; y < numero_input; y++) {

        for (int z = 0; z < numero_input; z++) {

            matriz[y][z] = 0;                               //Alteração direta da matriz original para somente sobrepuser o maior bloco;
        }
    }

    for (int a = 0; a < maior_bloco; a++) {

        matriz[maior_linha[a]][maior_coluna[a]] = 1;        //Somente prescisamos de um unico for por que aqui colocamos os 1 conectados de acordo com as posições.
    }

    printf ("\n\n");

    printf ("O maior bloco: %d\n", maior_bloco);

    for (int linha = 0; linha < numero_input; linha++) {

        for (int coluna = 0; coluna < numero_input; coluna++) {

            printf ("%d\t", matriz[linha][coluna]);
        }

        printf ("\n");
    }

    /*Importante, aprendi que o C avalia OR e AND da esquerda para a direita em ordem de prioridade, então, este caso aqui está conceituamente errado: 
    
    ((matriz[atual_linha][atual_coluna + 1] == 1 && matriz_auxiliar[atual_linha][atual_coluna + 1] == 0) && (atual_coluna + 1 < numero_input));

    Aqui, esta parte:

    && (atual_coluna + 1 < numero_input)); deve vir primeiro;

    No C, ele não respeita bem a logica booleana, ele vai executar toda a expressão da esquerda primeiro para depois ir para a direita, logo, a ordem de 
    prioridade deve ser sempre colocar a esquerda primeiro o exemplo acima.
    
    ((atual_coluna + 1 < numero_input) && (matriz[atual_linha][atual_coluna + 1] == 1 && matriz_auxiliar[atual_linha][atual_coluna + 1] == 0));

    esse é a ordem correta para o compilador;
    */

    return 0;
}