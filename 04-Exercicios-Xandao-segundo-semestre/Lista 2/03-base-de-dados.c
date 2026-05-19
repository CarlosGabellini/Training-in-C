#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*Suponha que criamos uma estrutura para armazenar dados de pessoas e uma outra estru-
tura para armazenar dados de várias pessoas como uma base de dados.

typedef struct Pessoa{
int rg;
int cpf;
char nome[80];
}Pessoa;

typedef struct Base{
int armazenado; //Deve sempre corresponder ao número de pessoas na base
Pessoa pessoas[100];
}Base;

1Crie funções para cada uma das operações abaixo:
• Cria base: esta função devolve uma Base onde o campo armazenado é inicializado
com 0.

Base cria_base();

• Inclui Pessoa: esta função recebe como parâmetro um dado do tipo Pessoa e o inclui
na base (também passada por parâmetro) caso já não exista na base uma pessoa com
o mesmo RG. A função devolve 1 caso a inclusão tenha ocorrido, devolve 0 caso a
Base esteja cheia e devolve -1 caso já exista uma pessoa com o RG informado.

int insere_base(Pessoa p, Base base);

• Exclui Pessoa: esta função recebe como parâmetro um dado do tipo int representando
o RG de uma pessoa e o exclui da base caso esteja presente. A função devolve 1 caso a
exclusão tenha ocorrido, e devolve 0 caso não exista uma pessoa com o RG informado.

int remove_base(int rg, Base base);
*/

typedef struct {
    int rg;
    int cpf;
    char nome[80];
} Pessoa;

typedef struct {
    int armazenamento;
    Pessoa pessoas[100];
} Base;

Base cria_base() {

    Base pessoas_br;
    pessoas_br.armazenamento = 0;

    return pessoas_br;
}

int insere_base (Pessoa *p, Base *base) {

    int c;

    printf ("Digite o Rg da pessoa: ");
    scanf("%d", &p->rg);

    while((c = getchar()) != '\n' && c != EOF);             //Limpeza buffer;

    printf ("Digite o nome da pessoa: ");
    fgets(p->nome, 80, stdin);

    p->nome[strlen(p->nome) - 1] = '\0';

    for (int a = 0; a < base->armazenamento; a++) {

        if (base->pessoas[a].rg == p->rg) {

            printf("Ja tem um pessoa com esse rg!");
            return -1;
        }
    }

    if (base->armazenamento >= 100) {
        printf("A base está cheia!");
        return 0;
    }

    printf("Inserindo o dado da pessoa na base....\n");
    base->pessoas[base->armazenamento].rg = p->rg;
    base->pessoas[base->armazenamento].cpf = p->cpf;

    strcpy(base->pessoas[base->armazenamento].nome, p->nome);

    base->armazenamento++;

    return 1;
}

int remove_base (int rg, Base *base) {              //Aqui removemos a pessoa da base criada;

    for (int b = 0; b < base->armazenamento; b++) {
        
        if (rg == base->pessoas[b].rg) {
           
            base->pessoas[b].rg = 0;
            base->pessoas[b].cpf = 0;
            base->pessoas[b].nome[0] = '\0';

            return 1;
        }
    }

    return 0;
}

int main () {

    Base de_brasileiros;
    Pessoa br1_pessoas;
    int insert = -1;
    int rg;

    de_brasileiros = cria_base();               //Zerando a base criada;

    for (int d = 0; d < 3; d++) {

        insere_base(&br1_pessoas, &de_brasileiros);
        printf("\n");
    }

    printf("Deseja excluir alguma pessoa? Digite 1 pra sim e 0 pra nao.\n");
    scanf("%d", &insert);

    if (insert == 1){

        printf("Digite o Rg da pessoa: \n");
        scanf("%d", &rg);

        remove_base(rg, &de_brasileiros);
    }

    else if (insert != 1) {

        printf("Feito com sucesso!\n");
    }


    return 0;
}