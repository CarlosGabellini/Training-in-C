#include <stdio.h>
#define TAM 5

//Objetivo, fazer um sistema de vendas com relatorio;

typedef struct {
    int codigo;
    int QuantidadeVenda;
    float preco_unitario;

} Venda;

//-----------------------------------------------------------------------------------------------------------------------------------------

void cadastrar_vendas (Venda vetor[], int tamanho);
float calcular_faturamento (Venda vetor1);
int maior_venda (Venda vetor2[], int tamanho);
float faturamento_total (Venda vetor3[], int tamanho);

//Protótipo da função;

//-----------------------------------------------------------------------------------------------------------------------------------------

void cadastrar_vendas (Venda vetor[], int tamanho) {

    for (int i = 0; i < tamanho; i++) {

        printf ("Digite o codigo do produto: \n");
        scanf ("%d", &vetor[i].codigo);

        printf ("Digite a quantidade vendida: \n");
        scanf ("%d", &vetor[i].QuantidadeVenda);

        printf ("Digite o preço unitario do produto: \n");
        scanf ("%f", &vetor[i].preco_unitario);

        printf ("\n");
    }
}

float calcular_faturamento (Venda vetor1) {

    return vetor1.preco_unitario * vetor1.QuantidadeVenda;
}

//Tanto na função de cima quanto na função debaixo o nome ja é autoexplicativo;

int maior_venda (Venda vetor2[], int tamanho) {

    float maior = calcular_faturamento(vetor2[0]);
    int indice = 0;

    for (int k = 1; k < tamanho; k++) {

        float comparacao_indice = calcular_faturamento(vetor2[k]);              //Chamando a função somente uma vez para ajudar;

        if (maior < comparacao_indice) {

            maior = comparacao_indice;
            indice = k;
        }
    }

    //Usando o indice para usar este codigo depois pra saber o codigo do produto;

    return indice;
}

float faturamento_total (Venda vetor3[], int tamanho) {

    float total = 0;                                        //Fazendo uma variavel simples para retornar ela;

    for (int l = 0; l < tamanho; l++) {

        total += calcular_faturamento(vetor3[l]);
    }

    return total;
}

int main () {

    Venda vendas[TAM];
    int venda_maior = 0;

    cadastrar_vendas (vendas, TAM);                         //Colocando os dados nesta função do tipo void;

    for (int m = 0; m < TAM; m++) {

        printf ("Codigo do produto: %d\n", vendas[m].codigo);
        printf ("Quantidade vendida: %d\n", vendas[m].QuantidadeVenda);
        printf ("Preço unitario: %.2f\n", vendas[m].preco_unitario);

        printf ("\n");

        printf ("Total vendido do produto: %.2f\n", calcular_faturamento(vendas[m]));

        printf ("\n");
    }

    venda_maior = maior_venda(vendas, TAM);

    printf ("O faturamento total foi: %.2fR$\n", faturamento_total(vendas, TAM));
    printf ("CODIGO DA MAIOR VENDA: %d\n", vendas[venda_maior].codigo);
    printf ("\n");

    printf ("Valor da maior venda: %.2f\n", calcular_faturamento(vendas[venda_maior]));

    return 0;
}