#include <stdio.h>

typedef struct {

    int codigo;
    float preco;

} Produto;

void struct_funny () {

    for (int i = 0; i < 70; i++) {

        printf ("_");
    }

    printf ("\nBem vindo ao programa!\n\n");
}

float aplicar_desconto (float produto_mercado, float percentual) {

    float desconto = 0;
    float resultado_desconto = 0;

    desconto = produto_mercado * (percentual / 100);
    resultado_desconto = produto_mercado - desconto;

    return resultado_desconto;
}

int main () {

    struct_funny();

    Produto produtos[2];
    float preco_descontado = 0;
    int inicializador = 0;

    for (int i = 0; i < 2; i++) {

        printf ("Digite o preço de produto: \n");
        scanf ("%f", &produtos[i].preco);

        printf ("Quer aplicar desconto neste produto? Se sim, digite 1, se não qualquer coisa.\n");
        scanf ("%d", &inicializador);

        if (inicializador == 1) {

            preco_descontado = aplicar_desconto(produtos[i].preco, 15);

            printf ("Agora ele custa %.2f de preço.\n\n", preco_descontado);
        }
    }

    return 0;
}