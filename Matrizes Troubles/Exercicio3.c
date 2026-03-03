#include <stdio.h>

int main () {

    /*Problema 3 é:
    
    Leia uma matriz M×M (3 ≤ M ≤ 10).
    O programa deve encontrar a submatriz 3×3 com a maior soma de elementos.

    Saída:
    A soma máxima; A posição inicial (linha, coluna);

    Exemplo conceitual:
    Percorrer todas as possíveis janelas 3×3; Calcular soma manualmente

    Dificuldade:
    Três níveis de loop
    Controle preciso de limites
    Raciocínio de janela deslizante 
    */

    int digito;
    int soma = 0;                                   //Variavel para somar os elementos dentro da matriz e então comparar;
    int maior_soma = 0;                             //Indice usado pra saber qual é a maior soma;
    int registro_linha = 0;                         //Registro_linha aparece na linha 100 sobre qual linha inicial é da submatriz de maior soma;
    int registro_coluna = 0;                        //Registro_coluna aparece na linha 101 sobre qual coluna inicial é essa submatriz;

    //Declarei um variavel fora do eixo localizada na linha 35 que é uma matriz;

    printf ("Digite um numero entre 3 a 10 para ser a matriz: \n");
    scanf ("%d", &digito);

    //Considerando o usuario obediente sem prescisar mecher com if e else;

    int matriz[digito][digito];
    
    for (int i = 0; i < digito; i++) {

        for (int j = 0; j < digito; j++) {

            printf ("Digite um numero para a matriz: \n");
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Visualizando a matriz;

    printf ("\n");

    for (int y = 0; y < digito; y++) {

        for (int x = 0; x < digito; x++) {

            printf("%d\t", matriz[y][x]);
        }

        printf ("\n");
    }

    //Certo, até aqui foi tudo padrão e nada de diferente, o código vai começar a ser feito agora.

    printf ("\n\n");

    //Inicializando o maior_soma com a primeira submatriz que tem, para não dar nenhum bug e funcionar com numeros negativos;
    //Se a maior soma basicamente for a coluna 0 e a linha 0, não irá ter nenhum bug devido a este for;

    for (int y = 0; y < 3; y++) {

        for (int z = 0; z < 3; z++) {

            maior_soma += matriz[y][z];
        }
    }
    
    //Abaixo está o codigo e como eu fiz, basicamente você só prescisa das posições iniciais de linha e coluna pra fazer o codigo e o resto vem naturalmente;

    for (int linha = 0; linha <= digito - 3; linha++) {             //Por que digito - 3? Por que queremos encontrar a submatriz de maior soma;

        for (int coluna = 0; coluna <= digito - 3; coluna++) {

            soma = 0;                                           //A soma sempre é resetada antes do terceiro e quarto for para que possamos comparar varios valores;

            //A partir daqui entra o sistema de janelas flutuantes onde analisamos primeiro sempre a linha 0 até 2 e a coluna 0 até 2, depois ainda vamos até a coluna
            //1 até 3 e ainda a linha 0 até 2, e ficamos repetindo isso e guardando numa variavel contadora para analizar a linha e a coluna inicial do maior valor.

            for (int a = linha; a <= linha + 2; a++) {              //Como exemplificado, quando entramos em a <= linha + 2 é o que torna tudo isso possivel.

                for (int b = coluna; b <= coluna + 2; b++) {        //Repetimos o mesmo proscesso na coluna;

                    soma = soma + matriz[a][b];                     //Variavel contadora;
                    printf ("%d\t", matriz[a][b]);                  //Mostrando nesse printf TODAS as combinações de resultados possiveis;
                }

                printf ("\n");                                      //Quebra de linha do for para visualização certa da matriz;
            }

            if (maior_soma < soma) {                                //Depois de sairmos do terceiro e quarto for, chegou a hora de comparar as somas;

                maior_soma = soma;
                registro_linha = linha;
                registro_coluna = coluna;
            }

            printf ("\n");
        }
    }

    printf ("%d\n", maior_soma);
    printf ("A posição inicial da linha %d e a posicao da coluna %d\n", registro_linha, registro_coluna);

    return 0;
}