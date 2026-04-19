#include <stdio.h>
#include <string.h>

//Fazer um programa que cadastra carros e retorna o maior usando ponteiros;

typedef struct {

    char modelo_do_carro[100];
    float valor;
} Carros;

float maior_valor (Carros *maior_preco, int tamanho) {

    float maior = (maior_preco)->valor;

    for (int i = 1; i < tamanho; i++) {

        if (maior < (maior_preco + i)->valor) {
            maior = (maior_preco + i)->valor;
        }
    }

    return maior;
}

void atualizar_preco (Carros *atualiza, int tamanho) {

    for (int i = 0; i < tamanho; i++) {
        atualiza[i].valor *= 1.04;
    }
}

int main () {

    const int tamanho_do_vetor = 2;
    Carros carros_brasileiros[tamanho_do_vetor];
    Carros *do_brasil = carros_brasileiros;
    int c;

    for (int i = 0; i < tamanho_do_vetor; i++) {

        printf ("Digite o modelo do carro: ");
        fgets ((do_brasil + i)->modelo_do_carro, 100, stdin);

        //Fazemos o uso das setas aqui por que com elas fica mais facil acessar os campos do vetor, eh melhor do que
        //fazer isso daqui: (*(do_brasil + 1)).modelo_do_carro;

        (do_brasil + i)->modelo_do_carro[strcspn((do_brasil + i)->modelo_do_carro, "\n")] = 0;

        //Removendo o \n do fgets;

        printf ("Digite o valor do carro: ");
        scanf ("%f", &(do_brasil + i)->valor);

        while ((c = getchar()) != '\n' && c != EOF);        //Limpando o buffer de memoria pra nao ficar armazenado;

        printf ("\n");

        //Presciso entender melhor o que esse while aqui faz;
    }

    atualizar_preco(do_brasil, tamanho_do_vetor);

    for (int i = 0; i < tamanho_do_vetor; i++) {
        
        printf ("O valor dos carros: %.2f\n", (do_brasil + i)->valor);
    }

    return 0;
}