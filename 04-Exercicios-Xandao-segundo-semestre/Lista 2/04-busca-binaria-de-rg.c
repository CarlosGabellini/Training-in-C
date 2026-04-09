#include <stdio.h>
#define GLOBAL 2

/*Fazer uma busca binaria pra ver se um rg existe no sistema, se existe, retorna o indice, se não retorna 1.*/

typedef struct {

    int rg;
    int cpf;
    char nome[100];
} Pessoa;

Pessoa cadastro () {

    Pessoa pessoa_cadastramento;

    printf ("Digite o Rg da pessoa: ");
    scanf ("%d", &pessoa_cadastramento.rg);

    printf ("Digite o Cpf da pessoa: ");
    scanf ("%d", &pessoa_cadastramento.cpf);

    printf ("E qual o nome? ");
    scanf ("%s", pessoa_cadastramento.nome);

    printf ("\n");

    return pessoa_cadastramento;
}

void ordenado_por_rg (Pessoa pessoas[], int tamanho) {

    Pessoa controle_ordenacao;
    int indice_menor = 0;

    for (int i = 0; i < tamanho; i++) {

        indice_menor = i;

        for (int j = i + 1; j < tamanho; j++) {

            if (pessoas[j].rg < pessoas[indice_menor].rg) {

                indice_menor = j;
            }
        }

        controle_ordenacao = pessoas[i];
        pessoas[i] = pessoas[indice_menor];
        pessoas[indice_menor] = controle_ordenacao;
    }
}

int busca_binaria (Pessoa pessoas[], int inicio, int fim, int rg) {

    if (inicio > fim) {

        return -1;
    }

    int meio = (inicio + fim) / 2;

    if (rg < pessoas[meio].rg) {

        return busca_binaria(pessoas, inicio, meio - 1, rg);
    }

    else if (rg > pessoas[meio].rg) {

        return busca_binaria(pessoas, meio + 1, fim, rg);
    }

    return meio;
}

int main () {

    Pessoa pessoas_brasileiras[GLOBAL];
    int indicador = 0;

    for (int i = 0; i < GLOBAL; i++) {

        pessoas_brasileiras[i] = cadastro();
    }

    ordenado_por_rg(pessoas_brasileiras, GLOBAL);

    indicador = busca_binaria(pessoas_brasileiras, 0, GLOBAL, 237);

    if (indicador == -1) {
        printf ("Não ha pessoa com este rg!");
    }

    else {

        printf ("O rg mostrando pertence ao: \n");
        printf ("Nome: %s\n", pessoas_brasileiras[indicador].nome);
        printf ("Cpf: %d\n", pessoas_brasileiras[indicador].cpf);
    }

    return 0;
}