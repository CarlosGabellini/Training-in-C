#include <stdio.h>

/*Objetivo agora é fazer um sistema de estoque simplificado onde eu tenho que fazer 3 funções;*/

typedef struct {

    int codigo;
    int quantidade;
    float preco;

} produto;

void cadastrar_produtos (produto vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        printf ("Digite o codigo do produto: \n");
        scanf ("%d", &vetor[i].codigo);

        printf ("Digite a quantidade do produto: \n");
        scanf ("%d", &vetor[i].quantidade);

        printf ("Digite o preço do produto: \n");
        scanf ("%f", &vetor[i].preco);

        printf ("\n");
    }
}

float ValorTotalEstoque (produto vetor1[], int tamanho) {

    float total = 0.0;

    for (int a = 0; a < tamanho; a++) {

        total += vetor1[a].quantidade * vetor1[a].preco;
    }

    return total;
}

int buscar_produto (produto vetor2[], int tamanho, int codigo) {

    int controle = 0;

    while (controle < tamanho) {

        if (codigo == vetor2[controle].codigo) {

            float total = vetor2[controle].preco * vetor2[controle].quantidade;

            printf ("O valor do produto eh: %.2f\n", vetor2[controle].preco);
            printf ("A quantidade dele eh: %d\n", vetor2[controle].quantidade);
            printf ("O valor total do produto (Preço * quantidade) é: %.2f\n", total);

            return 1;
        }

        controle++;
    }

    return 0;
}

int main () {

    produto produtos[2];
    int controle = 2;

    cadastrar_produtos(produtos, 2);
    printf ("O valor total do estoque eh: %.2f\n", ValorTotalEstoque(produtos, 2));

    printf ("\n\n");

    while (controle != 0) {

        printf ("Deseja buscar por algum produto? \n");
        printf ("Se sim, digite 1 e se quiser sair, digite 0.\n");
        scanf ("%d", &controle);

        printf ("\n\n");

        switch (controle) {

            case 1:
            int buscar;
            printf ("Qual o codigo do produto que quer digitar? \n");
            scanf ("%d", &buscar);

            printf ("\n");

            buscar_produto(produtos, 2, buscar);

            break;
        }

        printf ("\n");
    }

    return 0;
}