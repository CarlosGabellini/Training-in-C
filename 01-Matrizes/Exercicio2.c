#include <stdio.h>

int main () {

    /*Leia uma matriz quadrada N×N (2 ≤ N ≤ 10) e rotacione-a 90 graus no sentido horário, sem usar uma segunda matriz.

                                                                Regras:
    Apenas uma variável temporária
    Modificação direta na matriz original (Bem importante, ignorei isso da primeira vez)

                                                        Dica conceitual (não código):

    Trabalhar em camadas (anel externo → interno)*/

    int digito;                                      
    int armazenamento;                                 //Variavel temporaria para o meu codigo;
    int aneis;                                         //Primeiro presciso saber quantos anéis tem a matriz, dada pela equação digito/2;
    int ciclos;                                        //Quantos ciclos tem a minha matriz dada sempre por anel - 1;
    int limite_topo;                                   //Parte superior do anel para percorrer;
    int limite_base;                                   //Parte inferior do anel para percorrer; 
    int limite_esquerda;                               //Parte a esquerda do anel; 
    int limite_direita;                                //Para percorrer todo o anel, presciso desses 4 limites para mudar a matriz de forma correta;
    
    printf ("Digite o tamanho da matriz: \n");
    scanf ("%d", &digito);

    armazenamento = digito - 1;

    int matriz [digito][digito];                    //Tem que colocar a matriz aqui por que não tem como colocar ela lá em cima;

    for (int i = 0; i < digito; i++) {

        for (int j = 0; j < digito; j++) {

            printf ("Digite um numero: \n");
            scanf ("%d", &matriz[i][j]);
        }
    }

    //Até aqui tudo normal, o usuario digitou os numeros que vão para a matriz;

    printf ("\n");                                 //Esse printf dá formato a primeira tabela e mostra como os numeros originais estão sendo postos;

    for (int i = 0; i < digito; i++) {

        for (int j = 0; j < digito; j++) {

            printf ("%d\t", matriz[i][j]);
        }

        printf ("\n");
    }

    //Certo, até aqui chegamos na parte onde somente colocamos a entrada do usuario e os numeros que fazem a matriz, a proxima parte seria
    //como rotacionar ela em 90 graus, talvez eu já saiba mais ou menos como fazer, eu já tenho a tabela do for pronto.

            /*O que está acontecendo aqui? Você deve me perguntar
            
            Vamos por partes, basicamente para conseguir fazer esse exercicio presciso lidar com a ideia de aneis e ciclos, e com cada ciclo vem uma
            nova posição que é sempre alterada, basicamente temos uma matriz 3x3 onde:

            1   2   3
            4   5   6
            7   8   9

            O que basicamente esse sistema está fazendo? temos o anel externo e um interno feito somente do numero 5, onde em matrizes impares ele sempre
            fica fora dos aneis e não mechemos na sua posição, o anel externo é composto de:

            1   2   3
            4       6
            7   8   9

            Onde devemos rotacionar os lados, sempre nessa ordem 7 -> 1 -> 3 -> 9 -> 7, mas beleza, por que devo usar a variavel armazenamento? Por que sem
            ela você literalmente sobreescrever o numero 1 pelo numero 7 antes de usar ele, então deve-se guardar sempre o numero do topo esquerda e usar 
            ele no topo direita, você sempre tem que ficar atento por que em uma parte você meche na coluna, depois na linha, e vice-versa, mas lembre-se, 
            você tem que fazer com TODOS QUE ESTÃO NO ANEL EXTERNO, e o principal cuidado que você tem que tomar é em relação aos FORS, aqui, não queremos
            mudar a matriz completamente de uma vez somente, você PRESCISA trabalhar em camadas por que você só tem uma variavel esqueceu? Você só tem 1 
            variavel e tem que modificar a matriz original diretamente.
            Isso exige bastante atenção na manipulação avançada de indice, fora que vocẽ prescisa de bastante variavel suporte para rotacionar de forma
            correta, depois de rotacionar na primeira ordem, temos a segunda orgem composta de 2 -> 6 -> 8 -> 4, depois de alterar essa ordem conforme os co-
            mentarios da linha 72 até a 80, você tem uma matriz alterada sobreescrita de forma correta para 90 graus.
            
            */

    for (aneis = 0; aneis < digito / 2; aneis++) {

        //A primeira linha é 0 e a ultima é 2;

        limite_topo = aneis;                                                    //Começa no 0 basicamente e vai aumentando para outros aneis;
        limite_base = digito - 1 - aneis;                                       //Começa na ultima posição e quando vai para outro anel diminui;
        limite_esquerda = aneis;                                                //A esquerda deve ficar sempre na coluna 0 e escalona;
        limite_direita = digito - 1 - aneis;                                    //A direita é ao contrario da esquerda;

        // Define os limites do anel atual.
        // Esses limites garantem que todas as operações do ciclo
        // afetem exclusivamente o anel 'aneis', preservando os demais.

        for (ciclos = 0; ciclos < limite_direita - limite_esquerda; ciclos++) {

            // O número de ciclos é definido pela largura do anel atual;
            //Não percorremos o canto duas vezes;

            //Limite_direita - Limite_esquerda é o que define quanto ciclos tem para cada elemento, sempre extremamente necessario para fazer a matriz 
            //rotacionar de forma certa;

            armazenamento = matriz[limite_topo][limite_esquerda + ciclos];                                  //armazenamento ← (topo, esquerda + i);

            matriz[limite_topo][limite_esquerda + ciclos] = matriz[limite_base - ciclos][limite_esquerda];  //( topo, esquerda + i ) ← ( base − i, esquerda);

            matriz[limite_base - ciclos][limite_esquerda] = matriz[limite_base][limite_direita - ciclos];   //( base − i, esquerda ) ← ( base, direita − i);

            matriz[limite_base][limite_direita - ciclos] = matriz [limite_topo + ciclos][limite_direita];   //( base, direita − i ) ← ( topo + i, direita);

            matriz[limite_topo + ciclos][limite_direita] = armazenamento;                                   //( topo + i, direita ) <- Temporario.

        }

        printf ("\n");
    }

    printf ("\n");                                 

    for (int i = 0; i < digito; i++) {

        for (int j = 0; j < digito; j++) {

            printf ("%d\t", matriz[i][j]);
        }
        
        //Aqui é só para mostrar que a matriz original realmente foi alterada com sucesso com um desafio impressionante.
        printf ("\n");
    }

    //A matriz está errada ainda, presciso colocar os numeros em outra posição na memoria, não somente imprimir;
    //18/01 ainda está errada, presciso corrigir ela amanhã, desafio muito interessante;
    //22/01 literalmente o exercicio mais dificil que ja fiz na vida;


    //Eu literalmente passei 5 dias INTEIROS TENTANDO RESOLVER ESTE EXERCICIO, puta merda, o exercicio mais dificil que ja fiz na vida hahahhahah mas 
    //valeu a pena!
    
    return 0;
}