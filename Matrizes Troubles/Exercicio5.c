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

    int matriz[numero_input][numero_input];             //Mapa da matriz, ela é usada para saber se o caminho é livre ou não;
    int estado[numero_input][numero_input];             //Devo criar esta matriz por que ela é um registro, como só pode andar pela direita ou baixo
                                                        //voce deve começar a pensar como registra ela, e só chegamos nela a partir da esquerda ou topo;

    /*Basicamente temos tanto a matriz que será o mapa e dizer por onde deve andar ou não, e a matriz estado para registrar os passos;*/
                                                    
    for (int i = 0; i < numero_input; i++) {

        for (int j = 0; j < numero_input; j++) {

            printf ("Digite 0 ou 1 para formar a matriz: \n");                                  //Considere o usuario obediente;
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Visualizando a matriz;

    for (int y = 0; y < numero_input; y++) {

        for (int z = 0; z < numero_input; z++) {

            estado[y][z] = 0;                                   //Importante visualizar aqui primeiro, o estado está sendo inicializado como 0 por que 
                                                                //Vamos registrar ele em breve sobre até onde ele consegue ser alcançado;        
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

    //De forma logica, se o elemento 0,0 da matriz for 0 nem prescisa entrar no algoritmo por que não há caminho no inicio;
    //É como tentar registrar uma corrida de carros sem os proprios carros;

    for (int linha = 0; linha < numero_input; linha++) {

        for (int coluna = 0; coluna < numero_input; coluna++) {

            //Entrando no codigo, vocẽ não anda pela matriz, você registra da onde (Topo ou esquerda) tem os bits 1, e depois colocamos na matriz ESTADO.
            //Se não há nem da esquerda e nem do topo um caminho livre, então ele sera basicamente 0, não prescisamos colocar o 0 como caso por que ele já
            //é inicilizado acima por 0;

            //Sobre o primeiro if, é o primeiro caso onde os if elses não funcionam, basicamente atribuimos o primeiro elemento da matriz no estado[0][0];

            if (linha == 0 && coluna == 0) {

                estado[linha][coluna] = matriz[linha][coluna];
            }

            //Fazendo o else if quando a linha é igual a 0; (Caso especial 1);

            else if (linha == 0) {

                if (matriz[linha][coluna] == 1) {

                    estado[linha][coluna] = estado[linha][coluna - 1];
                }
            }

            //Fazendo o else if quando a coluna é igual a 0; (Caso especial 2);

            else if (coluna == 0) {

                if (matriz[linha][coluna] == 1) {

                    estado[linha][coluna] = estado[linha - 1][coluna];
                }
            }
            
            //Os casos especiais existem por que o caso geral não consegue cobrir eles, então prescisamos saber sobre quando a coluna é 0 ou a linha é 0;

            //Quando não é uma borda e está na meiuca, Caso geral;

            else if (0 < linha && 0 < coluna) {

                if (matriz[linha][coluna] == 1 && (estado[linha][coluna - 1] == 1||estado[linha - 1][coluna] == 1)) {

                    estado[linha][coluna] = 1;
                }
            }
        }
    }

    //Para saber se o caminho existe, a unica coisa que devemos fazer é saber se o ultimo elemento (N - 1) (N - 1) está com o numero 1;
    //Se em algum momento do caminho ele estiver bloqueado, naturalmente o ultimo elemento sera 0 mesmo que ele seja 1 na matriz original;

    printf ("\n\n");

    if (estado[numero_input - 1][numero_input - 1] == 1) {

        printf ("CAMINHO EXISTE!\n");
    }
    
    else {

        printf ("CAMINHO NAO EXISTE!\n");
    }

    /*O que eu aprendi com esse exercicio até o momento? que quando usar OU ou E você prescisa usar parenteses () para não misturar os dois, é igual o que
    eu aprendi com matematica discreta, sempre use quando for misturar.
        A segunda coisa que aprendi é saber usar um vetor de registro pra saber como chegar no resutado, principalmente em lógica de 0 e 1, parece que há 
    algum assunto dentro de matematica de computação que saber sobre este recurso é realmente bem importante, onde o 0 é sempre o que bloqueia ou que está
    apagado e o 1 é sempre o que está como caminho e acesso.       
        A logica aqui basicamente não é sobre andar pela matriz, mas fazer um registro inteligente e acompanhar, o caminho naturalmente irá existir se o
    ultimo elemento do codigo for 1.                            
    */

    return 0;
}