#include <stdio.h>

int main () {

    /*O exercicio 4 vai ser sobre:

    Leia uma matriz quadrada N×N e veja se ela é dominante na diagonal. (Não tem como colocar a formula matematica aqui);

    Saída:

    "DOMINANTE"
    ou "NAO DOMINANTE"

    Restrições:
    Implementar módulo manualmente (if)
    Sem math.h

    Dificuldade:

    Lógica matemática;
    Soma condicional;
    Comparações por linha;
    */

    int numero_input;                                               //Variavel que define o tamanho da matriz;
    int comparacao_diagonal = 0;                                    //Variavel que armazena o valor da comparacao da diagonal definido por sempre linha = coluna;
    int comparacao_normal = 0;                                      //Variavel que armazena o valor da comparacao dos outros numeros quanto linha != coluna;
    int acumuladora = 0;                                            //Se a variavel acumuladora der o mesmo resultado que o tamanho da matriz então a matriz é dominante;
    int valor = 0;                                                  //Variavel temporaria feita para ver se os numeros fora da diagonal são negativos, testamos o valor
                                                                    //Absoluto dela, não se é negativo ou positivo;          

    printf ("Digite um numero que sera o tamanho da matriz: \n");
    scanf ("%d",&numero_input);

    int matriz[numero_input][numero_input];

    for (int i = 0; i < numero_input; i++) {

        for (int j = 0; j < numero_input; j++) {

            printf ("Digite um numero para a matriz: \n");
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Visualizando a matriz formada;

    printf ("\n");                              //Printf meramente pra estetica;

    for (int k = 0; k < numero_input; k++) {

        for (int z = 0; z < numero_input; z++) {

            printf ("%d\t", matriz[k][z]);
        }

        printf ("\n");
    }

    //Agora vamos pra parte onde devemos implementar o codigo de forma correta;

    for (int linha = 0; linha < numero_input; linha++) {

        for (int coluna = 0; coluna < numero_input; coluna++) {

            //Fazendo a comparação diagonal definida por matriz [linha][linha], guardamos o valor dela nessa variavel e depois comparamos com os outros valores
            //que não fazem parte da diagonal;

            comparacao_diagonal = matriz[linha][linha];

            if (comparacao_diagonal < 0) {

                comparacao_diagonal = comparacao_diagonal * (-1);      //Numeros negativos devem se tornar positivos por que eles tambem podem ser dominantes;
            }
            
            //Esse if existe por que quando a coluna != linha podemos somar os valores de outras posições que não tem nada a ver com a diagonal, lembre-se que 
            //a comparação sempre acontece linha por linha;

            if (linha != coluna) {

                valor = matriz[linha][coluna];              //Variavel valor usada para saber se o elemento da matriz é negativo, caso seja entra no segundo if;

                if (valor < 0) {
                    
                    //Aqui dentro queremos comparar valores absolutos, não importandando se é negativo ou positivo;

                    valor = valor * (-1);
                }

                comparacao_normal += valor;     //Depois de colocar o if como positivo, saimos do segundo for e voltamos para o primeiro para somar os elementos;
            }
        }

        if (comparacao_normal < comparacao_diagonal) {

            acumuladora++;                                  //Esse if deve ser fora do for mais interno por que toda vez que muda de linha eu presciso
        }                                                   //antes de resetar ele comparar os resultados e ver se na minha variavel acumuladora ela anda;

        comparacao_normal = 0;                              //Toda vez que muda o for tenho que resetar o valor para comparar linha por linha;
    }

    printf ("\nAcumuladora resultado: %d\n", acumuladora);

    if (acumuladora == numero_input) {

        printf ("\nDOMINANTE!");
    }

    else {

        printf ("\nNÃO DOMINANTE!");
    }

    return 0;
}