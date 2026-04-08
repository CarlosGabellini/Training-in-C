#include <stdio.h>

//Criando uma estrutura para o estoque de um mercadinho;

typedef struct {

    char nome[80];
    float preco;
    int quantidade;

} Produto;

//Implemente duas funções, uma que volta o vetor ordenado por preços e outra que devolve o vetor ordenado por quantidade de itens no estoque;

void ordenaPreco (Produto vet[], int tamanho) {         //Nome da variavel 'tamanho' é mais condizente do que dizer 'n';

    float registro = 0;
    int menor_indice = 0;

    for (int i = 0; i < tamanho; i++) {

        menor_indice = i;

        for (int j = i + 1; j < tamanho; j++) {

            if (vet[j].preco <= vet[menor_indice].preco) {

                menor_indice = j;
            }
        }

        registro = vet[i].preco;
        vet[i].preco = vet[menor_indice].preco;
        vet[menor_indice].preco = registro;
    }

    //Bingo! alteramos tudo em ordem do menor para o maior;
}

void ordenaQuant (Produto vet[], int tamanho) {

    int registro_de_quantidade = 0;
    int menor_indice = 0;

    for (int a = 0; a < tamanho; a++) {

        menor_indice = a;

        for (int b = a + 1; b < tamanho; b++) {

            if (vet[b].quantidade <= vet[menor_indice].quantidade) {

                menor_indice = b;
            }
        }

        registro_de_quantidade = vet[a].quantidade;
        vet[a].quantidade = vet[menor_indice].quantidade;
        vet[menor_indice].quantidade = registro_de_quantidade;
    }
}

int main () {

    Produto produtos_de_mercado[5];
    float colocar_valores = 13.321;
    float colocar_valores2 = 21.657;
    int valores_quantidade = 100;
    int valores_quantidade2 = 50;

    for (int a = 0; a < 5; a++) {

        if (a % 2 == 0) {

            produtos_de_mercado[a].preco = colocar_valores2;
            produtos_de_mercado[a].quantidade = valores_quantidade;
        }

        else if (a % 2 == 1) {

            produtos_de_mercado[a].preco = colocar_valores;
            produtos_de_mercado[a].quantidade = valores_quantidade2;
        }

        colocar_valores2 += 2.7;
        colocar_valores -= 1.712;
        valores_quantidade2 -= 10;
        valores_quantidade += 15;
    }

    for (int b = 0; b < 5; b++) {

        printf ("Na posicao %d do vetor tem o valor: %.2f\n", b, produtos_de_mercado[b].preco);
    }

    printf ("\n");

    for (int c = 0; c < 5; c++) {

        printf ("Em nessa posicao %d, o estoque tem de quantidade: %d produtos.\n", c, produtos_de_mercado[c].quantidade);
    }

    //Ordenando eles;

    printf ("\n\n");

    printf ("Agora com o vetor ordenado, sera: \n");

    ordenaPreco(produtos_de_mercado, 5);
    ordenaQuant(produtos_de_mercado, 5);

    for (int b = 0; b < 5; b++) {

        printf ("Na posicao %d do vetor tem o valor: %.2f\n", b, produtos_de_mercado[b].preco);
    }

    printf ("\n\n");

    for (int c = 0; c < 5; c++) {

        printf ("Em nessa posicao %d, o estoque tem de quantidade: %d produtos.\n", c, produtos_de_mercado[c].quantidade);
    }

    return 0;
}